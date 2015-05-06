#include "mem/ruby/structures/OwnerPred.hh"
#include "mem/ruby/system/System.hh"
#include "debug/RubyOwnerPred.hh"
#include "debug/RubySlicc.hh"

using namespace std;

OwnerPred::OwnerPred(const Params *p)
    :SimObject(p) , _dirty(false)
{
    _L1TableEntryArray.resize( 1 << 11 );
    _L2TableEntryArray.resize( 1 << 14 );
}

OwnerPred::~OwnerPred() {}

NetDest OwnerPred::getPrediction(Address pc, Address addr, MachineID local) 
{
  NetDest prediction;

  //  add lcoal to mask
  prediction.add(local);

  //  add L1 nodes to mask
  for (NodeID i = 0; i < MachineType_base_count(MachineType_L1Cache); i++) {
    MachineID mach = {MachineType_L1Cache, i};
    prediction.add(mach);
  }

  //  add L2 nodes to mask
  for (NodeID i = 0; i < MachineType_base_count(MachineType_L2Cache); i++) {
    MachineID mach = {MachineType_L2Cache, i};
    prediction.add(mach);
  }

  return prediction;

  //  indexed by PC
  const size_t pcIndxL1 = (pc.getAddress() & ~pc.maskLowOrderBits(11));
  const size_t pcIndxL2 = pc.bitSelect(2, 15) ^ addr.bitSelect(5, 18);
  assert( pcIndxL2 < (1<<15) );

  const OwnerPredL1Table & l1table = _L1TableEntryArray[pcIndxL1];
  const OwnerPredL2Table & l2table = _L2TableEntryArray[pcIndxL2];

  //  1st-level predictor 
  bool isC2C = false;       //  predicted as a $2$ transfer miss

  if( l1table.cfdC2C() >= 2 ) {
    isC2C = true;
    if( l1table.cfdNode() >=2 ) {
      MachineID l1pred = { MachineType_L1Cache, l1table.getNodePtr() };
      prediction.add(l1pred);
    }
  }

  if( isC2C ) {
    if( l2table.cfdNode() >= 2 ) 
      for( size_t i = 0; i < 4; i++ ) {
        if( l2table.getValidBit(i) && l2table.getNodePtr(i) != l1table.getNodePtr() ) {
          MachineID l2pred = { MachineType_L1Cache, l2table.getNodePtr(i) };
          prediction.add(l2pred);
        }
      }
  }

  return prediction;
}

void OwnerPred::updatePredictionTable( Address pc, Address addr, MachineID realOwner )
{
  //  increment the $2$ confidence
  const size_t pcIndxL1 = (pc.getAddress() & ~pc.maskLowOrderBits(11));
  const size_t pcIndxL2 = pc.bitSelect(2, 15) ^ addr.bitSelect(5, 18);

  OwnerPredL1Table & l1table = _L1TableEntryArray[pcIndxL1];

  if( realOwner.getType() == MachineType_L2Cache ) {       //  the sender is from L2
    l1table.cfdC2C_dn();
    return;
  }

  //  $2$ transfer between L1
  l1table.cfdC2C_up();

  const NodeID ownerID = realOwner.getNum();

  if( l1table.cfdNode() == ownerID )
    l1table.cfdNode_up();
  else {
    l1table.cfdNode_dn();
    if( l1table.cfdNode() < 2 )
      l1table._nodePtr = ownerID;
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

OwnerPredL1Table::OwnerPredL1Table() 
  : _confdCnt(1), _confdPtr(1), _nodePtr(0) 
{}

OwnerPredL1Table::~OwnerPredL1Table() 
{}

OwnerPredL2Table::OwnerPredL2Table()
  : _confdPtr(1) 
{
  for( size_t i = 0; i < 4; i ++ ) {
    _nodePtrArray[i] = 0;
    _nodeValidArray[i] = false; 
    _missedTimesArray[i] = 0;
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
    cfdNode_up();
    for( size_t i = 0; i < 4; i++ ) {
      if( getValidBit(i) ) {
        if( getNodePtr(i) == ownerID )
          _missedTimesArray[i] = 0;
        else
          ++ _missedTimesArray[i];
      }
    }
  }
  else {
    cfdNode_dn();
    //  evict the LRU
    size_t evictIdx = 0;
    for( size_t i = 1; i < 4; i++ ) {
      if( 
          ( getValidBit(evictIdx)==true && getValidBit(i)==false )
          ||
          ( getValidBit(evictIdx)==true && getValidBit(i)==true && _missedTimesArray[i]>_missedTimesArray[evictIdx] ) 
          )
        evictIdx = i;
    }
    replaceNodePtr( evictIdx, ownerID );
  }
}

void OwnerPredL2Table::replaceNodePtr( size_t idx, NodeID ownerID ) 
{
  _nodePtrArray[idx] = ownerID;
  _missedTimesArray[idx] = 0;
  _nodeValidArray[idx] = true;
}

