/** \file RequestMsg.cc
 *
 * Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/Type.py:410
 */

#include <iostream>
#include <memory>

#include "mem/protocol/RequestMsg.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
RequestMsg::print(ostream& out) const
{
    out << "[RequestMsg: ";
    out << "Addr = " << m_Addr << " ";
    out << "Len = " << m_Len << " ";
    out << "Type = " << m_Type << " ";
    out << "Requestor = " << m_Requestor << " ";
    out << "RequestorMachine = " << m_RequestorMachine << " ";
    out << "PredictionMask = " << m_PredictionMask << " ";
    out << "Destination = " << m_Destination << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Acks = " << m_Acks << " ";
    out << "MessageSize = " << m_MessageSize << " ";
    out << "AccessMode = " << m_AccessMode << " ";
    out << "Prefetch = " << m_Prefetch << " ";
    out << "Time = " << g_system_ptr->clockPeriod() * getTime() << " ";
    out << "]";
}
bool
RequestMsg::functionalWrite(Packet* param_pkt)
{
return (testAndWrite(m_Addr, m_DataBlk, param_pkt));

}
bool
RequestMsg::functionalRead(Packet* param_pkt)
{
    if (((m_Type == CoherenceRequestType_DMA_READ) || (m_Type == CoherenceRequestType_DMA_WRITE))) {
        return (testAndRead(m_Addr, m_DataBlk, param_pkt));
    }
    return (false);

}
