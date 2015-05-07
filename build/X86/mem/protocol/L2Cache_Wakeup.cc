// Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/StateMachine.py:1042
// L2Cache: Token protocol

#include <sys/types.h>
#include <unistd.h>

#include <cassert>

#include "base/misc.hh"
#include "debug/RubySlicc.hh"
#include "mem/protocol/L2Cache_Controller.hh"
#include "mem/protocol/L2Cache_Event.hh"
#include "mem/protocol/L2Cache_State.hh"
#include "mem/protocol/Types.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"
#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"

using namespace std;

void
L2Cache_Controller::wakeup()
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
            // L2CacheInPort triggerQueue_in
            m_cur_in_port = 0;
                        if ((((*m_triggerQueue_ptr)).isReady())) {
                            {
                                // Declare message
                                const TriggerMsg* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const TriggerMsg *>(((*m_triggerQueue_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                                if ((((*in_msg_ptr)).m_Type == TriggerType_ALL_ACKS)) {
                                    {

                                        TransitionResult result = doTransition(L2Cache_Event_All_Acks, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                    panic("Runtime Error at MOESI_CMP_directory-L2cache.sm:567: %s.\n", ("Unexpected message"));
                                    ;
                                }
                                }
                            }
            // L2CacheInPort requestNetwork_in
            m_cur_in_port = 0;
                        if ((((*m_GlobalRequestToL2Cache_ptr)).isReady())) {
                            {
                                // Declare message
                                const RequestMsg* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_GlobalRequestToL2Cache_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                                if (((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETX) || (((*in_msg_ptr)).m_Type == CoherenceRequestType_DMA_WRITE))) {
                                        if ((((*in_msg_ptr)).m_Requestor == m_machineID)) {
                                            {

                                                TransitionResult result = doTransition(L2Cache_Event_Own_GETX, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                TransitionResult result = doTransition(L2Cache_Event_Fwd_GETX, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                    TransitionResult result = doTransition(L2Cache_Event_Fwd_GETS, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                            TransitionResult result = doTransition(L2Cache_Event_Fwd_DMA, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                                    TransitionResult result = doTransition(L2Cache_Event_Inv, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                                            TransitionResult result = doTransition(L2Cache_Event_Writeback_Ack, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                                                    TransitionResult result = doTransition(L2Cache_Event_Writeback_Nack, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                                panic("Runtime Error at MOESI_CMP_directory-L2cache.sm:602: %s.\n", ("Unexpected message"));
                                                                                ;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        }
                                                    }
            // L2CacheInPort L1requestNetwork_in
            m_cur_in_port = 0;
                        if ((((*m_L1RequestToL2Cache_ptr)).isReady())) {
                            {
                                // Declare message
                                const RequestMsg* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_L1RequestToL2Cache_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                            #ifndef NDEBUG
                            if (!(((((*in_msg_ptr)).m_Destination).isElement(m_machineID)))) {
                                panic("Runtime Error at MOESI_CMP_directory-L2cache.sm:611: %s.\n", "assert failure");

                            }
                            #endif
                            ;
                                if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETX)) {
                                        if ((((*m_localDirectory_ptr)).isTagPresent(((*in_msg_ptr)).m_Addr))) {
                                            (((*m_sb_ptr)).record_GETX(((*in_msg_ptr)).m_Requestor, ((*in_msg_ptr)).m_PredictionMask, ((((*m_localDirectory_ptr)).lookup(((*in_msg_ptr)).m_Addr))).m_Sharers, ((((*m_localDirectory_ptr)).lookup(((*in_msg_ptr)).m_Addr))).m_OwnerValid, ((((*m_localDirectory_ptr)).lookup(((*in_msg_ptr)).m_Addr))).m_Owner));
                                        } else {
                                            (((*m_sb_ptr)).record_GETX(((*in_msg_ptr)).m_Requestor, ((*in_msg_ptr)).m_PredictionMask));
                                        }
                                        {

                                            TransitionResult result = doTransition(L2Cache_Event_L1_GETX, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                            if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETS)) {
                                                    if ((((*m_localDirectory_ptr)).isTagPresent(((*in_msg_ptr)).m_Addr))) {
                                                        (((*m_sb_ptr)).record_GETS(((*in_msg_ptr)).m_Requestor, ((*in_msg_ptr)).m_PredictionMask, ((((*m_localDirectory_ptr)).lookup(((*in_msg_ptr)).m_Addr))).m_Sharers, ((((*m_localDirectory_ptr)).lookup(((*in_msg_ptr)).m_Addr))).m_OwnerValid, ((((*m_localDirectory_ptr)).lookup(((*in_msg_ptr)).m_Addr))).m_Owner));
                                                    } else {
                                                        (((*m_sb_ptr)).record_GETS(((*in_msg_ptr)).m_Requestor, ((*in_msg_ptr)).m_PredictionMask));
                                                    }
                                                    {

                                                        TransitionResult result = doTransition(L2Cache_Event_L1_GETS, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                        if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_PUTO)) {
                                                            {

                                                                TransitionResult result = doTransition(L2Cache_Event_L1_PUTO, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_PUTX)) {
                                                                        if ((((*m_localDirectory_ptr)).isTagPresent(((*in_msg_ptr)).m_Addr))) {
                                                                            (((*m_sb_ptr)).record_PUTX(((*in_msg_ptr)).m_Requestor, ((*in_msg_ptr)).m_PredictionMask, ((((*m_localDirectory_ptr)).lookup(((*in_msg_ptr)).m_Addr))).m_Sharers, ((((*m_localDirectory_ptr)).lookup(((*in_msg_ptr)).m_Addr))).m_OwnerValid, ((((*m_localDirectory_ptr)).lookup(((*in_msg_ptr)).m_Addr))).m_Owner));
                                                                        } else {
                                                                            (((*m_sb_ptr)).record_PUTX(((*in_msg_ptr)).m_Requestor, ((*in_msg_ptr)).m_PredictionMask));
                                                                        }
                                                                        {

                                                                            TransitionResult result = doTransition(L2Cache_Event_L1_PUTX, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                            if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_PUTS)) {
                                                                                L2Cache_Entry* cache_entry
                                                                                 = (getCacheEntry(((*in_msg_ptr)).m_Addr));
                                                                                    if ((isOnlySharer(cache_entry, ((*in_msg_ptr)).m_Addr, ((*in_msg_ptr)).m_Requestor))) {
                                                                                        {

                                                                                            TransitionResult result = doTransition(L2Cache_Event_L1_PUTS_only, cache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                                                            TransitionResult result = doTransition(L2Cache_Event_L1_PUTS, cache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                                    panic("Runtime Error at MOESI_CMP_directory-L2cache.sm:653: %s.\n", ("Unexpected message"));
                                                                                    ;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                }
                                                            }
            // L2CacheInPort responseNetwork_in
            m_cur_in_port = 0;
                        if ((((*m_responseToL2Cache_ptr)).isReady())) {
                            {
                                // Declare message
                                const ResponseMsg* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseToL2Cache_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                            #ifndef NDEBUG
                            if (!(((((*in_msg_ptr)).m_Destination).isElement(m_machineID)))) {
                                panic("Runtime Error at MOESI_CMP_directory-L2cache.sm:664: %s.\n", "assert failure");

                            }
                            #endif
                            ;
                                if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_ACK)) {
                                        if ((((*in_msg_ptr)).m_SenderMachine == MachineType_L2Cache)) {
                                            {

                                                TransitionResult result = doTransition(L2Cache_Event_ExtAck, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                TransitionResult result = doTransition(L2Cache_Event_IntAck, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_DATA)) {
                                                {

                                                    TransitionResult result = doTransition(L2Cache_Event_Data, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                            TransitionResult result = doTransition(L2Cache_Event_Data_Exclusive, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_UNBLOCK)) {
                                                                {

                                                                    TransitionResult result = doTransition(L2Cache_Event_Unblock, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                    if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_UNBLOCK_EXCLUSIVE)) {
                                                                        {

                                                                            TransitionResult result = doTransition(L2Cache_Event_Exclusive_Unblock, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_WRITEBACK_DIRTY_DATA)) {
                                                                                L2Cache_Entry* cache_entry
                                                                                 = (getCacheEntry(((*in_msg_ptr)).m_Addr));
                                                                                    if (((cache_entry == NULL) && ((((*m_L2cache_ptr)).cacheAvail(((*in_msg_ptr)).m_Addr)) == (false)))) {
                                                                                        {

                                                                                            TransitionResult result = doTransition(L2Cache_Event_L2_Replacement, (getCacheEntry((((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_Addr)))), (((*m_TBEs_ptr)).lookup((((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_Addr)))), (((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_Addr)));

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

                                                                                            TransitionResult result = doTransition(L2Cache_Event_L1_WBDIRTYDATA, cache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                                        if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_WRITEBACK_CLEAN_DATA)) {
                                                                                            L2Cache_Entry* cache_entry
                                                                                             = (getCacheEntry(((*in_msg_ptr)).m_Addr));
                                                                                                if (((cache_entry == NULL) && ((((*m_L2cache_ptr)).cacheAvail(((*in_msg_ptr)).m_Addr)) == (false)))) {
                                                                                                    {

                                                                                                        TransitionResult result = doTransition(L2Cache_Event_L2_Replacement, (getCacheEntry((((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_Addr)))), (((*m_TBEs_ptr)).lookup((((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_Addr)))), (((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_Addr)));

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

                                                                                                        TransitionResult result = doTransition(L2Cache_Event_L1_WBCLEANDATA, cache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                                                    if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_DMA_ACK)) {
                                                                                                        {

                                                                                                            TransitionResult result = doTransition(L2Cache_Event_DmaAck, (getCacheEntry(((*in_msg_ptr)).m_Addr)), (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                                                        panic("Runtime Error at MOESI_CMP_directory-L2cache.sm:714: %s.\n", ("Unexpected message"));
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
                                                                    }
        break;  // If we got this far, we have nothing left todo
    }
}
