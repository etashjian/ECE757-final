#ifndef __PARAMS__MulticastScoreboard__
#define __PARAMS__MulticastScoreboard__

class MulticastScoreboard;


#include "params/SimObject.hh"

struct MulticastScoreboardParams
    : public SimObjectParams
{
    MulticastScoreboard * create();
};

#endif // __PARAMS__MulticastScoreboard__
