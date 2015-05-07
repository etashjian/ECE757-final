/** \file Directory_Entry.cc
 *
 * Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/Type.py:410
 */

#include <iostream>
#include <memory>

#include "mem/protocol/Directory_Entry.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
Directory_Entry::print(ostream& out) const
{
    out << "[Directory_Entry: ";
    out << "DirectoryState = " << m_DirectoryState << " ";
    out << "Sharers = " << m_Sharers << " ";
    out << "Owner = " << m_Owner << " ";
    out << "WaitingUnblocks = " << m_WaitingUnblocks << " ";
    out << "]";
}
