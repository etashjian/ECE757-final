/** \file TriggerMsg.cc
 *
 * Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/Type.py:410
 */

#include <iostream>
#include <memory>

#include "mem/protocol/TriggerMsg.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
TriggerMsg::print(ostream& out) const
{
    out << "[TriggerMsg: ";
    out << "Addr = " << m_Addr << " ";
    out << "Type = " << m_Type << " ";
    out << "Time = " << g_system_ptr->clockPeriod() * getTime() << " ";
    out << "]";
}
bool
TriggerMsg::functionalWrite(Packet* param_pkt)
{
return (false);

}
bool
TriggerMsg::functionalRead(Packet* param_pkt)
{
return (false);

}
