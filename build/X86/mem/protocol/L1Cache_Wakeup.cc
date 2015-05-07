// Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/StateMachine.py:1042
// L1Cache: Directory protocol

#include <sys/types.h>
#include <unistd.h>

#include <cassert>

#include "base/misc.hh"
#include "debug/RubySlicc.hh"
#include "mem/protocol/L1Cache_Controller.hh"
#include "mem/protocol/L1Cache_Event.hh"
#include "mem/protocol/L1Cache_State.hh"
#include "mem/protocol/Types.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"
#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"

using namespace std;

void
L1Cache_Controller::wakeup()
{
    int counter = 0;
    while (true) {
        // Some cases will put us into an infinite loop without this limit
        assert(counter <= m_transitions_per_cycle);
        if (counter == m_transitions_per_cycle) {
            // Count how often we are fully utilized
            m_fully_busy_cycles++;

            // Wakeup in another cycle and try again
            scheduleEvent(Cycles(1));
            break;
        }
            // L1CacheInPort useTimerTable_in
            m_cur_in_port = 0;
                        if ((((*m_useTimerTable_ptr)).isReady())) {
                            {

                                TransitionResult result = doTransition(L1Cache_Event_Use_Timeout, (getCacheEntry((((*m_useTimerTable_ptr)).readyAddress()))), (((*m_TBEs_ptr)).lookup((((*m_useTimerTable_ptr)).readyAddress()))), (((*m_useTimerTable_ptr)).readyAddress()));

                                if (result == TransitionResult_Valid) {
                                    counter++;
                                    continue; // Check the first port again
                                }

                                if (result == TransitionResult_ResourceStall) {
                                    scheduleEvent(Cycles(1));

                                    // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                }
                            }
                            ;
                        }
            // L1CacheInPort triggerQueue_in
            m_cur_in_port = 0;
                        if ((((*m_triggerQueue_ptr)).isReady())) {
                            {
                                // Declare message
                                const TriggerMsg* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const TriggerMsg *>(((*m_triggerQueue_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                                if ((((*in_msg_ptr)).m_Type == TriggerType_ALL_ACKS)) {
                                    {

                                        TransitionResult result = doTransition(L1Cache_Event_All_acks, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                        if (result == TransitionResult_Valid) {
                                            counter++;
                                            continue; // Check the first port again
                                        }

                                        if (result == TransitionResult_ResourceStall) {
                                            scheduleEvent(Cycles(1));

                                            // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                        }
                                    }
                                    ;
                                } else {
                                    panic("Runtime Error at MOESI_CMP_directory-L1cache.sm:284: %s.\n", ("Unexpected message"));
                                    ;
                                }
                                }
                            }
            // L1CacheInPort requestNetwork_in
            m_cur_in_port = 0;
                        if ((((*m_requestToL1Cache_ptr)).isReady())) {
                            {
                                // Declare message
                                const RequestMsg* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_requestToL1Cache_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                                if (m_is_blocking &&
                                    (m_block_map.count(in_msg_ptr->m_Addr) == 1) &&
                                    (m_block_map[in_msg_ptr->m_Addr] != &(*m_requestToL1Cache_ptr))) {
                                        (*m_requestToL1Cache_ptr).delayHead();
                                        continue;
                                }
                                        
                            #ifndef NDEBUG
                            if (!(((((*in_msg_ptr)).m_Destination).isElement(m_machineID)))) {
                                panic("Runtime Error at MOESI_CMP_directory-L1cache.sm:296: %s.\n", "assert failure");

                            }
                            #endif
                            ;
                            DPRINTF(RubySlicc, "MOESI_CMP_directory-L1cache.sm:297: L1 received: %s\n", ((*in_msg_ptr)).m_Type);
                                if (((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETX) || (((*in_msg_ptr)).m_Type == CoherenceRequestType_DMA_WRITE))) {
                                        if (((((*in_msg_ptr)).m_Requestor == m_machineID) && (((*in_msg_ptr)).m_RequestorMachine == MachineType_L1Cache))) {
                                            {

                                                TransitionResult result = doTransition(L1Cache_Event_Own_GETX, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                                if (result == TransitionResult_Valid) {
                                                    counter++;
                                                    continue; // Check the first port again
                                                }

                                                if (result == TransitionResult_ResourceStall) {
                                                    scheduleEvent(Cycles(1));

                                                    // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                }
                                            }
                                            ;
                                        } else {
                                            {

                                                TransitionResult result = doTransition(L1Cache_Event_Fwd_GETX, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                                if (result == TransitionResult_Valid) {
                                                    counter++;
                                                    continue; // Check the first port again
                                                }

                                                if (result == TransitionResult_ResourceStall) {
                                                    scheduleEvent(Cycles(1));

                                                    // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                }
                                            }
                                            ;
                                        }
                                    } else {
                                            if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETS)) {
                                                {

                                                    TransitionResult result = doTransition(L1Cache_Event_Fwd_GETS, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                                    if (result == TransitionResult_Valid) {
                                                        counter++;
                                                        continue; // Check the first port again
                                                    }

                                                    if (result == TransitionResult_ResourceStall) {
                                                        scheduleEvent(Cycles(1));

                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                    }
                                                }
                                                ;
                                            } else {
                                                    if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_DMA_READ)) {
                                                        {

                                                            TransitionResult result = doTransition(L1Cache_Event_Fwd_DMA, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                                            if (result == TransitionResult_Valid) {
                                                                counter++;
                                                                continue; // Check the first port again
                                                            }

                                                            if (result == TransitionResult_ResourceStall) {
                                                                scheduleEvent(Cycles(1));

                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                            }
                                                        }
                                                        ;
                                                    } else {
                                                            if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_WB_ACK)) {
                                                                {

                                                                    TransitionResult result = doTransition(L1Cache_Event_Writeback_Ack, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                                                    if (result == TransitionResult_Valid) {
                                                                        counter++;
                                                                        continue; // Check the first port again
                                                                    }

                                                                    if (result == TransitionResult_ResourceStall) {
                                                                        scheduleEvent(Cycles(1));

                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                    }
                                                                }
                                                                ;
                                                            } else {
                                                                    if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_WB_ACK_DATA)) {
                                                                        {

                                                                            TransitionResult result = doTransition(L1Cache_Event_Writeback_Ack_Data, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                                                            if (result == TransitionResult_Valid) {
                                                                                counter++;
                                                                                continue; // Check the first port again
                                                                            }

                                                                            if (result == TransitionResult_ResourceStall) {
                                                                                scheduleEvent(Cycles(1));

                                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                            }
                                                                        }
                                                                        ;
                                                                    } else {
                                                                            if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_WB_NACK)) {
                                                                                {

                                                                                    TransitionResult result = doTransition(L1Cache_Event_Writeback_Nack, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                                                                    if (result == TransitionResult_Valid) {
                                                                                        counter++;
                                                                                        continue; // Check the first port again
                                                                                    }

                                                                                    if (result == TransitionResult_ResourceStall) {
                                                                                        scheduleEvent(Cycles(1));

                                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                                    }
                                                                                }
                                                                                ;
                                                                            } else {
                                                                                    if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_INV)) {
                                                                                        {

                                                                                            TransitionResult result = doTransition(L1Cache_Event_Inv, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                                                                            if (result == TransitionResult_Valid) {
                                                                                                counter++;
                                                                                                continue; // Check the first port again
                                                                                            }

                                                                                            if (result == TransitionResult_ResourceStall) {
                                                                                                scheduleEvent(Cycles(1));

                                                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                                            }
                                                                                        }
                                                                                        ;
                                                                                    } else {
                                                                                        panic("Runtime Error at MOESI_CMP_directory-L1cache.sm:326: %s.\n", ("Unexpected message"));
                                                                                        ;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            }
                                                        }
            // L1CacheInPort responseToL1Cache_in
            m_cur_in_port = 0;
                        if ((((*m_responseToL1Cache_ptr)).isReady())) {
                            {
                                // Declare message
                                const ResponseMsg* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseToL1Cache_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                                if (m_is_blocking &&
                                    (m_block_map.count(in_msg_ptr->m_Addr) == 1) &&
                                    (m_block_map[in_msg_ptr->m_Addr] != &(*m_responseToL1Cache_ptr))) {
                                        (*m_responseToL1Cache_ptr).delayHead();
                                        continue;
                                }
                                        
                                if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_ACK)) {
                                    {

                                        TransitionResult result = doTransition(L1Cache_Event_Ack, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                        if (result == TransitionResult_Valid) {
                                            counter++;
                                            continue; // Check the first port again
                                        }

                                        if (result == TransitionResult_ResourceStall) {
                                            scheduleEvent(Cycles(1));

                                            // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                        }
                                    }
                                    ;
                                } else {
                                        if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_DATA)) {
                                            {

                                                TransitionResult result = doTransition(L1Cache_Event_Data, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                                if (result == TransitionResult_Valid) {
                                                    counter++;
                                                    continue; // Check the first port again
                                                }

                                                if (result == TransitionResult_ResourceStall) {
                                                    scheduleEvent(Cycles(1));

                                                    // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                }
                                            }
                                            ;
                                        } else {
                                                if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_DATA_EXCLUSIVE)) {
                                                    {

                                                        TransitionResult result = doTransition(L1Cache_Event_Exclusive_Data, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

                                                        if (result == TransitionResult_Valid) {
                                                            counter++;
                                                            continue; // Check the first port again
                                                        }

                                                        if (result == TransitionResult_ResourceStall) {
                                                            scheduleEvent(Cycles(1));

                                                            // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                        }
                                                    }
                                                    ;
                                                } else {
                                                    panic("Runtime Error at MOESI_CMP_directory-L1cache.sm:346: %s.\n", ("Unexpected message"));
                                                    ;
                                                }
                                            }
                                        }
                                        }
                                    }
            // L1CacheInPort mandatoryQueue_in
            m_cur_in_port = 0;
                        if ((((*m_mandatoryQueue_ptr)).isReady())) {
                            {
                                // Declare message
                                const RubyRequest* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const RubyRequest *>(((*m_mandatoryQueue_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                                if (m_is_blocking &&
                                    (m_block_map.count(in_msg_ptr->m_LineAddress) == 1) &&
                                    (m_block_map[in_msg_ptr->m_LineAddress] != &(*m_mandatoryQueue_ptr))) {
                                        (*m_mandatoryQueue_ptr).delayHead();
                                        continue;
                                }
                                        
                                if ((((*in_msg_ptr)).m_Type == RubyRequestType_IFETCH)) {
                                    L1Cache_Entry* L1Icache_entry
                                     = (getL1ICacheEntry(((*in_msg_ptr)).m_LineAddress));
                                        if ((L1Icache_entry != NULL)) {
                                            {

                                                TransitionResult result = doTransition((mandatory_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Icache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress);

                                                if (result == TransitionResult_Valid) {
                                                    counter++;
                                                    continue; // Check the first port again
                                                }

                                                if (result == TransitionResult_ResourceStall) {
                                                    scheduleEvent(Cycles(1));

                                                    // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                }
                                            }
                                            ;
                                        } else {
                                            L1Cache_Entry* L1Dcache_entry
                                             = (getL1DCacheEntry(((*in_msg_ptr)).m_LineAddress));
                                                if ((L1Dcache_entry != NULL)) {
                                                    {

                                                        TransitionResult result = doTransition(L1Cache_Event_L1_Replacement, L1Dcache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress);

                                                        if (result == TransitionResult_Valid) {
                                                            counter++;
                                                            continue; // Check the first port again
                                                        }

                                                        if (result == TransitionResult_ResourceStall) {
                                                            scheduleEvent(Cycles(1));

                                                            // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                        }
                                                    }
                                                    ;
                                                }
                                                    if ((((*m_L1Icache_ptr)).cacheAvail(((*in_msg_ptr)).m_LineAddress))) {
                                                        {

                                                            TransitionResult result = doTransition((mandatory_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Icache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress);

                                                            if (result == TransitionResult_Valid) {
                                                                counter++;
                                                                continue; // Check the first port again
                                                            }

                                                            if (result == TransitionResult_ResourceStall) {
                                                                scheduleEvent(Cycles(1));

                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                            }
                                                        }
                                                        ;
                                                    } else {
                                                        {

                                                            TransitionResult result = doTransition(L1Cache_Event_L1_Replacement, (getL1ICacheEntry((((*m_L1Icache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_TBEs_ptr)).lookup((((*m_L1Icache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_L1Icache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)));

                                                            if (result == TransitionResult_Valid) {
                                                                counter++;
                                                                continue; // Check the first port again
                                                            }

                                                            if (result == TransitionResult_ResourceStall) {
                                                                scheduleEvent(Cycles(1));

                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                            }
                                                        }
                                                        ;
                                                    }
                                                }
                                            } else {
                                                L1Cache_Entry* L1Dcache_entry
                                                 = (getL1DCacheEntry(((*in_msg_ptr)).m_LineAddress));
                                                    if ((L1Dcache_entry != NULL)) {
                                                        {

                                                            TransitionResult result = doTransition((mandatory_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Dcache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress);

                                                            if (result == TransitionResult_Valid) {
                                                                counter++;
                                                                continue; // Check the first port again
                                                            }

                                                            if (result == TransitionResult_ResourceStall) {
                                                                scheduleEvent(Cycles(1));

                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                            }
                                                        }
                                                        ;
                                                    } else {
                                                        L1Cache_Entry* L1Icache_entry
                                                         = (getL1ICacheEntry(((*in_msg_ptr)).m_LineAddress));
                                                            if ((L1Icache_entry != NULL)) {
                                                                {

                                                                    TransitionResult result = doTransition(L1Cache_Event_L1_Replacement, L1Icache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress);

                                                                    if (result == TransitionResult_Valid) {
                                                                        counter++;
                                                                        continue; // Check the first port again
                                                                    }

                                                                    if (result == TransitionResult_ResourceStall) {
                                                                        scheduleEvent(Cycles(1));

                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                    }
                                                                }
                                                                ;
                                                            }
                                                                if ((((*m_L1Dcache_ptr)).cacheAvail(((*in_msg_ptr)).m_LineAddress))) {
                                                                    {

                                                                        TransitionResult result = doTransition((mandatory_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Dcache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress);

                                                                        if (result == TransitionResult_Valid) {
                                                                            counter++;
                                                                            continue; // Check the first port again
                                                                        }

                                                                        if (result == TransitionResult_ResourceStall) {
                                                                            scheduleEvent(Cycles(1));

                                                                            // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                        }
                                                                    }
                                                                    ;
                                                                } else {
                                                                    {

                                                                        TransitionResult result = doTransition(L1Cache_Event_L1_Replacement, (getL1DCacheEntry((((*m_L1Dcache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_TBEs_ptr)).lookup((((*m_L1Dcache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_L1Dcache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)));

                                                                        if (result == TransitionResult_Valid) {
                                                                            counter++;
                                                                            continue; // Check the first port again
                                                                        }

                                                                        if (result == TransitionResult_ResourceStall) {
                                                                            scheduleEvent(Cycles(1));

                                                                            // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                        }
                                                                    }
                                                                    ;
                                                                }
                                                            }
                                                        }
                                                        }
                                                    }
        break;  // If we got this far, we have nothing left todo
    }
}
