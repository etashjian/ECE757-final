/** \file L1Cache_TBE.cc
 *
 * Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/Type.py:410
 */

#include <iostream>
#include <memory>

#include "mem/protocol/L1Cache_TBE.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
L1Cache_TBE::print(ostream& out) const
{
    out << "[L1Cache_TBE: ";
    out << "Addr = " << m_Addr << " ";
    out << "TBEState = " << m_TBEState << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Dirty = " << m_Dirty << " ";
    out << "NumPendingMsgs = " << m_NumPendingMsgs << " ";
    out << "]";
}
