#ifndef __PARAMS__L2Cache_Controller__
#define __PARAMS__L2Cache_Controller__

class L2Cache_Controller;

#include <cstddef>
#include "params/RubyCache.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MulticastScoreboard.hh"

#include "params/RubyController.hh"

struct L2Cache_ControllerParams
    : public RubyControllerParams
{
    L2Cache_Controller * create();
    CacheMemory * L2cache;
    Cycles request_latency;
    Cycles response_latency;
    MulticastScoreboard * sb;
    unsigned int port_GlobalRequestFromL2Cache_connection_count;
    unsigned int port_L1RequestToL2Cache_connection_count;
    unsigned int port_responseFromL2Cache_connection_count;
    unsigned int port_L1RequestFromL2Cache_connection_count;
    unsigned int port_GlobalRequestToL2Cache_connection_count;
    unsigned int port_responseToL2Cache_connection_count;
};

#endif // __PARAMS__L2Cache_Controller__
