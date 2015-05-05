#ifndef __MEM_RUBY_COMMON_WIDESHARINGPRED_HH__
#define __MEM_RUBY_COMMON_WIDESHARINGPRED_HH__

#include <iostream>
#include <string>
#include <stdlib.h>

#include "mem/ruby/common/NetDest.hh"
#include "mem/ruby/common/Address.hh"
#include "mem/protocol/MachineType.hh"
#include "params/WideSharingPred.hh"
#include "sim/sim_object.hh"

class WideSharingPred : public SimObject {
 public:
  WideSharingPred(const Params *p) : SimObject(p) {}; 
  NetDest getPrediction(Address addr, MachineID local, int get_indicator);

  // MANDATORY SIM OBJECT METHODS
  WideSharingPred& operator=(const WideSharingPred& obj);


 private:
  PredTableEntry pred_table[1024];
};


 //create object with netdest field x2 - one for gets w/just owner, another for getx with all and pc field

class PredTableEntry {

 public:
   NetDest owner; //Netdest for owner L1
   NetDest ownersharers; //NetDest for owner and sharers
   Address pc; //Address field for our pc
   int counter; //used to keep track of how many elements I've put in my array. 
};



#endif // __MEM_RUBY_COMMON_WIDESHARINGPRED_HH__

