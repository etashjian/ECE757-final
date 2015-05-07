/** \file L2Cache_TBE.cc
 *
 * Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/Type.py:410
 */

#include <iostream>
#include <memory>

#include "mem/protocol/L2Cache_TBE.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
L2Cache_TBE::print(ostream& out) const
{
    out << "[L2Cache_TBE: ";
    out << "Addr = " << m_Addr << " ";
    out << "TBEState = " << m_TBEState << " ";
    out << "PC = " << m_PC << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Dirty = " << m_Dirty << " ";
    out << "NumExtPendingAcks = " << m_NumExtPendingAcks << " ";
    out << "NumIntPendingAcks = " << m_NumIntPendingAcks << " ";
    out << "Fwd_GETX_ExtAcks = " << m_Fwd_GETX_ExtAcks << " ";
    out << "Local_GETX_IntAcks = " << m_Local_GETX_IntAcks << " ";
    out << "L1_GetS_IDs = " << m_L1_GetS_IDs << " ";
    out << "L1_GetX_ID = " << m_L1_GetX_ID << " ";
    out << "Fwd_GetS_IDs = " << m_Fwd_GetS_IDs << " ";
    out << "Fwd_GetX_ID = " << m_Fwd_GetX_ID << " ";
    out << "]";
}
