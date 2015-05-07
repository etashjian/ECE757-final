#ifndef __PARAMS__DMA_Controller__
#define __PARAMS__DMA_Controller__

class DMA_Controller;

#include <cstddef>
#include "params/DMASequencer.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/RubyController.hh"

struct DMA_ControllerParams
    : public RubyControllerParams
{
    DMA_Controller * create();
    DMASequencer * dma_sequencer;
    Cycles request_latency;
    Cycles response_latency;
    unsigned int port_reqToDir_connection_count;
    unsigned int port_responseFromDir_connection_count;
    unsigned int port_respToDir_connection_count;
};

#endif // __PARAMS__DMA_Controller__
