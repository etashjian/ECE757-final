#ifndef __PARAMS__MemTest__
#define __PARAMS__MemTest__

class MemTest;

#include <cstddef>
#include <cstddef>
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
#include <cstddef>
#include "params/System.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/MemObject.hh"

struct MemTestParams
    : public MemObjectParams
{
    MemTest * create();
    bool atomic;
    bool issue_dmas;
    Counter max_loads;
    int memory_size;
    int percent_dest_unaligned;
    int percent_functional;
    int percent_reads;
    int percent_source_unaligned;
    int percent_uncacheable;
    Counter progress_interval;
    bool suppress_func_warnings;
    System * sys;
    Addr trace_addr;
    unsigned int port_test_connection_count;
    unsigned int port_functional_connection_count;
};

#endif // __PARAMS__MemTest__
