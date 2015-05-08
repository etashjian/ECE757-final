#ifndef __MEM_RUBY_COMMON_OWNERPRED_HH__
#define __MEM_RUBY_COMMON_OWNERPRED_HH__

#include <iostream>
#include <string>
#include <stdlib.h>

#include "mem/ruby/common/NetDest.hh"
#include "mem/ruby/common/Address.hh"
#include "mem/protocol/MachineType.hh"
#include "params/RubyOwnerPred.hh"
#include "sim/sim_object.hh"

#include "mem/protocol/CacheRequestType.hh"
#include "mem/protocol/CoherenceRequestType.hh"

class OwnerPredL1Table;
class OwnerPredL2Table;

class OwnerPred : public SimObject {
 public:
    OwnerPred(const Params *p);
    ~OwnerPred();

    NetDest getPrediction(Address pc, Address addr, MachineID local);
    void updatePredictionTable( Address pc, Address addr, MachineID requestor, MachineID sender );

    // MANDATORY SIM OBJECT METHODS
    OwnerPred & operator=(const OwnerPred & obj);

 private:
    std::vector<OwnerPredL1Table> _L1TableEntryArray;
    std::vector<OwnerPredL2Table> _L2TableEntryArray;

    bool _dirty;
};

class OwnerPredL1Table
{
  friend class OwnerPred;

  public:
  OwnerPredL1Table() : _confdCnt(1), _confdPtr(1), _nodePtr(0) {}
  ~OwnerPredL1Table() {}

  private:
  inline unsigned getConfidenceC2C() const { return _confdCnt; }
  inline unsigned getConfidenceNode() const { return _confdPtr; }
  inline NodeID getNodePtr() const { return _confdPtr; }

  inline void incrConfidenceC2C() { if( _confdCnt < 3 ) ++ _confdCnt; }
  inline void decrConfidenceC2C() { if( _confdCnt > 0 ) -- _confdCnt; }
  inline void incrConfidenceNode() { if( _confdPtr < 3 ) ++ _confdPtr; }
  inline void decrConfidenceNode() { if( _confdPtr > 0 ) -- _confdPtr; }

  unsigned _confdCnt : 2;   //  2-bit saturating counter regarding confidence about $2$ transfer;
  unsigned _confdPtr : 2;   //  2-bit saturating counter
  NodeID _nodePtr;          //  predicted target node
};

class OwnerPredL2Table
{
  friend class OwnerPred;

  public:
  OwnerPredL2Table();
  ~OwnerPredL2Table();

  private:
  inline unsigned getConfidenceNode() const { return _confdPtr; }

  NodeID getNodePtr(size_t idx) const;
  bool getValidBit(size_t idx) const;

  inline void incrConfidenceNode() { if( _confdPtr < 3 ) ++ _confdPtr; }
  inline void decrConfidenceNode() { if( _confdPtr > 0 ) -- _confdPtr; }

  inline void setValidBit(size_t idx) {
    assert( 0 <= idx && idx < 4 );
    _nodeValidArray[idx] = true;
  }

  void replaceNodePtr( size_t idx, NodeID ownerID );
  void updateWithRealOwnerID( NodeID ownerID );

  unsigned _confdPtr : 2;
  NodeID _nodePtrArray[4];          //  predicted target node array
  unsigned _hitHistLen[4];
  bool _nodeValidArray[4];          //  prediction valid array

};

#endif 