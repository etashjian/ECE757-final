#ifndef __PARAMS__L1Cache_Controller__
#define __PARAMS__L1Cache_Controller__

class L1Cache_Controller;

#include <cstddef>
#include "params/RubyCache.hh"
#include <cstddef>
#include "params/RubyCache.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "params/RubySequencer.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/RubyController.hh"

struct L1Cache_ControllerParams
    : public RubyControllerParams
{
    L1Cache_Controller * create();
    CacheMemory * L1Dcache;
    CacheMemory * L1Icache;
    int l2_select_num_bits;
    Cycles request_latency;
    bool send_evictions;
    Sequencer * sequencer;
    Cycles use_timeout_latency;
    unsigned int port_requestToL1Cache_connection_count;
    unsigned int port_responseToL1Cache_connection_count;
    unsigned int port_requestFromL1Cache_connection_count;
    unsigned int port_responseFromL1Cache_connection_count;
};

#endif // __PARAMS__L1Cache_Controller__
