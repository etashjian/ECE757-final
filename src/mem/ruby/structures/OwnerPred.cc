#include "mem/ruby/structures/OwnerPred.hh"
#include "mem/ruby/system/System.hh"
#include "debug/RubyOwnerPred.hh"
#include "debug/RubySlicc.hh"

using namespace std;

OwnerPred::OwnerPred(const Params *p)
    :SimObject(p) , _dirty(false)
{
    _L1TableEntryArray.resize( 1 << 10 );      
    _L2TableEntryArray.resize( 1 << 12 );     
}

OwnerPred::~OwnerPred() {}

NetDest OwnerPred::getPrediction(Address pc, Address addr, MachineID local) 
{
  NetDest prediction;

  //  add lcoal to mask
  prediction.add(local);

  //  add L2 nodes to mask
  for (NodeID i = 0; i < MachineType_base_count(MachineType_L2Cache); i++) {
    MachineID mach = {MachineType_L2Cache, i};
    prediction.add(mach);
  }

  //  indexed by PC
  const size_t pcIndxL1 = pc.bitSelect(6, 15);
  const size_t pcIndxL2 = pc.bitSelect(4, 15) ^ addr.bitSelect(2, 13);

  DPRINTF( RubyOwnerPred, "Get Prediction : idx1 = %u, idx2 = %u, localID = %d\n", pcIndxL1, pcIndxL2, local.getNum() );

  const OwnerPredL1Table & l1table = _L1TableEntryArray[pcIndxL1];
  const OwnerPredL2Table & l2table = _L2TableEntryArray[pcIndxL2];

  //  1st-level predictor 
  bool isC2C = false;       //  predicted as a $2$ transfer miss

  if( l1table.getConfidenceC2C() >= 2 ) {
    isC2C = true;
    DPRINTF( RubyOwnerPred, "L1 predicts $2$. \n" );
    if( l1table.getConfidenceNode() >=2 ) {
      MachineID l1pred = { MachineType_L1Cache, l1table.getNodePtr() };
      prediction.add(l1pred);
      DPRINTF( RubyOwnerPred, "L1 predicts node %d. \n", l1table.getNodePtr() );
    }
  }

  if( isC2C ) {
    if( l2table.getConfidenceNode() >= 2 ) 
      for( size_t i = 0; i < 4; i++ ) {
        if( l2table.getValidBit(i) && l2table.getNodePtr(i) != l1table.getNodePtr() ) {
          MachineID l2pred = { MachineType_L1Cache, l2table.getNodePtr(i) };
          prediction.add(l2pred);
          DPRINTF( RubyOwnerPred, "L2 predicts node %d. \n", l2table.getNodePtr(i) );
        }
      }
  }

  return prediction;
}

void OwnerPred::updatePredictionTable( Address pc, Address addr, MachineID requestor, MachineID sender )
{
  const size_t pcIndxL1 = pc.bitSelect(6, 15);
  const size_t pcIndxL2 = pc.bitSelect(4, 15) ^ addr.bitSelect(2, 13);

  const NodeID ownerID = sender.getNum();

  OwnerPredL1Table & l1table = _L1TableEntryArray[pcIndxL1];

  if( sender.getType() == MachineType_L2Cache ) {       
    l1table.decrConfidenceC2C();
    DPRINTF( RubyOwnerPred, "First-Level Table : idx1 = %u --Confd\n", pcIndxL1 );
    return;
  }

  l1table.incrConfidenceC2C();
  DPRINTF( RubyOwnerPred, "First-Level Table : idx1 = %u ++Confd\n", pcIndxL1 );

  if( l1table.getConfidenceNode() == ownerID ) {
    l1table.incrConfidenceNode();
    DPRINTF( RubyOwnerPred, "First-Level Table : idx1 = %u ++ConfdNode\n", pcIndxL1 );
  }
  else {
    l1table.decrConfidenceNode();
    DPRINTF( RubyOwnerPred, "First-Level Table : idx1 = %u --ConfdNode\n", pcIndxL1 );
  }

  if( l1table.getConfidenceNode() < 2 ) {
    l1table._nodePtr = ownerID;
    DPRINTF( RubyOwnerPred, "First-Level Table : idx1 = %u Change Node = %d Confd$2$ = %u ConfdNode = %u\n", pcIndxL1, ownerID, l1table.getConfidenceC2C(), l1table.getConfidenceNode() );
  }

  OwnerPredL2Table & l2table = _L2TableEntryArray[pcIndxL2];
  l2table.updateWithRealOwnerID( ownerID );

}

OwnerPred *
RubyOwnerPredParams::create()
{
  typedef RubyOwnerPredParams Params;
    return new OwnerPred(this);
}

OwnerPredL2Table::OwnerPredL2Table()
  : _confdPtr(1) 
{
  for( size_t i = 0; i < 4; i ++ ) {
    _nodePtrArray[i] = 0;
    _nodeValidArray[i] = false; 
    _hitHistLen[i] = 0;
  }
}

OwnerPredL2Table::~OwnerPredL2Table() {}

NodeID OwnerPredL2Table::getNodePtr(size_t idx) const {
  assert( 0 <= idx && idx < 4 );
  return _nodePtrArray[idx];
}

bool OwnerPredL2Table::getValidBit(size_t idx) const {
  assert( 0 <= idx && idx < 4 );
  return _nodeValidArray[idx];
}

void OwnerPredL2Table::updateWithRealOwnerID( NodeID ownerID )
{
  //  check if l2table prediction hit
  bool hit = false;
  for( size_t i = 0;  i < 4; i++ ) {
    hit |= ( getValidBit(i)&&getNodePtr(i)==ownerID );
  }

  if( hit ) {
    incrConfidenceNode();
    for( size_t i = 0; i < 4; i++ ) {
      if( getValidBit(i) ) {
        if( getNodePtr(i) == ownerID )
          _hitHistLen[i] = 0;
        else
          ++ _hitHistLen[i];
      }
    }
  }
  else {
    decrConfidenceNode();
    //  evict the LRU
    size_t evictIdx = 0;
    for( size_t i = 1; i < 4; i++ ) {
      if( 
          ( getValidBit(evictIdx)==true && getValidBit(i)==false )
          ||
          ( getValidBit(evictIdx)==true && getValidBit(i)==true && _hitHistLen[i]>_hitHistLen[evictIdx] ) 
          )
        evictIdx = i;
    }
    replaceNodePtr( evictIdx, ownerID );
  }
}

void OwnerPredL2Table::replaceNodePtr( size_t idx, NodeID ownerID ) 
{
  _nodePtrArray[idx] = ownerID;
  _hitHistLen[idx] = 0;
  _nodeValidArray[idx] = true;
}

