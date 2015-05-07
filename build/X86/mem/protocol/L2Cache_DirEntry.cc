/** \file L2Cache_DirEntry.cc
 *
 * Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/Type.py:410
 */

#include <iostream>
#include <memory>

#include "mem/protocol/L2Cache_DirEntry.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
L2Cache_DirEntry::print(ostream& out) const
{
    out << "[L2Cache_DirEntry: ";
    out << "Sharers = " << m_Sharers << " ";
    out << "Owner = " << m_Owner << " ";
    out << "OwnerValid = " << m_OwnerValid << " ";
    out << "DirState = " << m_DirState << " ";
    out << "]";
}
