#ifndef __PARAMS__BranchPredictor__
#define __PARAMS__BranchPredictor__

class BPredUnit;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>

#include "params/SimObject.hh"

struct BranchPredictorParams
    : public SimObjectParams
{
    BPredUnit * create();
    unsigned BTBEntries;
    unsigned BTBTagSize;
    unsigned RASSize;
    unsigned choiceCtrBits;
    unsigned choicePredictorSize;
    unsigned globalCtrBits;
    unsigned globalPredictorSize;
    unsigned instShiftAmt;
    unsigned localCtrBits;
    unsigned localHistoryTableSize;
    unsigned localPredictorSize;
    unsigned numThreads;
    std::string predType;
};

#endif // __PARAMS__BranchPredictor__
