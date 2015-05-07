// Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/StateMachine.py:1042
// Directory: Directory protocol

#include <sys/types.h>
#include <unistd.h>

#include <cassert>

#include "base/misc.hh"
#include "debug/RubySlicc.hh"
#include "mem/protocol/Directory_Controller.hh"
#include "mem/protocol/Directory_Event.hh"
#include "mem/protocol/Directory_State.hh"
#include "mem/protocol/Types.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"
#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"

using namespace std;

void
Directory_Controller::wakeup()
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
            // DirectoryInPort unblockNetwork_in
            m_cur_in_port = 0;
                        if ((((*m_responseToDir_ptr)).isReady())) {
                            {
                                // Declare message
                                const ResponseMsg* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseToDir_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                                if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_UNBLOCK)) {
                                        if (((*(getDirectoryEntry(((*in_msg_ptr)).m_Addr))).m_WaitingUnblocks == (1))) {
                                            {

                                                TransitionResult result = doTransition(Directory_Event_Last_Unblock, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                TransitionResult result = doTransition(Directory_Event_Unblock, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_UNBLOCK_EXCLUSIVE)) {
                                                {

                                                    TransitionResult result = doTransition(Directory_Event_Exclusive_Unblock, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                        {

                                                            TransitionResult result = doTransition(Directory_Event_Dirty_Writeback, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_WRITEBACK_CLEAN_ACK)) {
                                                                {

                                                                    TransitionResult result = doTransition(Directory_Event_Clean_Writeback, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                                            TransitionResult result = doTransition(Directory_Event_Data, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_DMA_ACK)) {
                                                                                {

                                                                                    TransitionResult result = doTransition(Directory_Event_DMA_ACK, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                                panic("Runtime Error at MOESI_CMP_directory-dir.sm:257: %s.\n", ("Invalid message"));
                                                                                ;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        }
                                                    }
            // DirectoryInPort requestQueue_in
            m_cur_in_port = 0;
                        if ((((*m_requestToDir_ptr)).isReady())) {
                            {
                                // Declare message
                                const RequestMsg* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_requestToDir_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                                if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETS)) {
                                    {

                                        TransitionResult result = doTransition(Directory_Event_GETS, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                        if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETX)) {
                                            {

                                                TransitionResult result = doTransition(Directory_Event_GETX, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                    {

                                                        TransitionResult result = doTransition(Directory_Event_PUTX, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                                TransitionResult result = doTransition(Directory_Event_PUTO, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                                                if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_PUTO_SHARERS)) {
                                                                    {

                                                                        TransitionResult result = doTransition(Directory_Event_PUTO_SHARERS, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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

                                                                                TransitionResult result = doTransition(Directory_Event_DMA_READ, (((*m_TBEs_ptr)).lookup((makeLineAddress(((*in_msg_ptr)).m_Addr)))), (makeLineAddress(((*in_msg_ptr)).m_Addr)));

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
                                                                                if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_DMA_WRITE)) {
                                                                                    {

                                                                                        TransitionResult result = doTransition(Directory_Event_DMA_WRITE, (((*m_TBEs_ptr)).lookup((makeLineAddress(((*in_msg_ptr)).m_Addr)))), (makeLineAddress(((*in_msg_ptr)).m_Addr)));

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
                                                                                    panic("Runtime Error at MOESI_CMP_directory-dir.sm:283: %s.\n", ("Invalid message"));
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
            // DirectoryInPort memQueue_in
            m_cur_in_port = 0;
                        if ((((*m_responseFromMemory_ptr)).isReady())) {
                            {
                                // Declare message
                                const MemoryMsg* in_msg_ptr M5_VAR_USED;
                                in_msg_ptr = dynamic_cast<const MemoryMsg *>(((*m_responseFromMemory_ptr)).peek());
                                assert(in_msg_ptr != NULL); // Check the cast result
                                if ((((*in_msg_ptr)).m_Type == MemoryRequestType_MEMORY_READ)) {
                                    {

                                        TransitionResult result = doTransition(Directory_Event_Memory_Data, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                        if ((((*in_msg_ptr)).m_Type == MemoryRequestType_MEMORY_WB)) {
                                            {

                                                TransitionResult result = doTransition(Directory_Event_Memory_Ack, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_Addr)), ((*in_msg_ptr)).m_Addr);

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
                                            DPRINTF(RubySlicc, "MOESI_CMP_directory-dir.sm:298: %s\n", ((*in_msg_ptr)).m_Type);
                                            panic("Runtime Error at MOESI_CMP_directory-dir.sm:299: %s.\n", ("Invalid message"));
                                            ;
                                        }
                                    }
                                    }
                                }
        break;  // If we got this far, we have nothing left todo
    }
}
