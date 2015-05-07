#ifndef __PARAMS__WideSharingPred__
#define __PARAMS__WideSharingPred__

class WideSharingPred;


#include "params/SimObject.hh"

struct WideSharingPredParams
    : public SimObjectParams
{
    WideSharingPred * create();
};

#endif // __PARAMS__WideSharingPred__
