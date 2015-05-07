#ifndef __PARAMS__CoherentXBar__
#define __PARAMS__CoherentXBar__

class CoherentXBar;

#include <cstddef>
#include "params/SnoopFilter.hh"
#include <cstddef>
#include "params/System.hh"

#include "params/BaseXBar.hh"

struct CoherentXBarParams
    : public BaseXBarParams
{
    CoherentXBar * create();
    SnoopFilter * snoop_filter;
    System * system;
};

#endif // __PARAMS__CoherentXBar__
