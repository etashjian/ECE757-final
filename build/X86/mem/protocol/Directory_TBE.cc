/** \file Directory_TBE.cc
 *
 * Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/Type.py:410
 */

#include <iostream>
#include <memory>

#include "mem/protocol/Directory_TBE.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
Directory_TBE::print(ostream& out) const
{
    out << "[Directory_TBE: ";
    out << "PhysicalAddress = " << m_PhysicalAddress << " ";
    out << "Len = " << m_Len << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Requestor = " << m_Requestor << " ";
    out << "]";
}
