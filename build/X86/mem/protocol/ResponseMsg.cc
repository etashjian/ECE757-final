/** \file ResponseMsg.cc
 *
 * Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/Type.py:410
 */

#include <iostream>
#include <memory>

#include "mem/protocol/ResponseMsg.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
ResponseMsg::print(ostream& out) const
{
    out << "[ResponseMsg: ";
    out << "Addr = " << m_Addr << " ";
    out << "Type = " << m_Type << " ";
    out << "Sender = " << m_Sender << " ";
    out << "SenderMachine = " << m_SenderMachine << " ";
    out << "PredictionMask = " << m_PredictionMask << " ";
    out << "Destination = " << m_Destination << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Dirty = " << m_Dirty << " ";
    out << "Acks = " << m_Acks << " ";
    out << "MessageSize = " << m_MessageSize << " ";
    out << "Time = " << g_system_ptr->clockPeriod() * getTime() << " ";
    out << "]";
}
bool
ResponseMsg::functionalWrite(Packet* param_pkt)
{
return (testAndWrite(m_Addr, m_DataBlk, param_pkt));

}
bool
ResponseMsg::functionalRead(Packet* param_pkt)
{
    if (((((m_Type == CoherenceResponseType_DATA) || (m_Type == CoherenceResponseType_DATA_EXCLUSIVE)) || (m_Type == CoherenceResponseType_WRITEBACK_CLEAN_DATA)) || (m_Type == CoherenceResponseType_WRITEBACK_DIRTY_DATA))) {
        return (testAndRead(m_Addr, m_DataBlk, param_pkt));
    }
    return (false);

}
