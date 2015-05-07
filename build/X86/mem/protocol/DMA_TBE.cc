/** \file DMA_TBE.cc
 *
 * Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/Type.py:410
 */

#include <iostream>
#include <memory>

#include "mem/protocol/DMA_TBE.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
DMA_TBE::print(ostream& out) const
{
    out << "[DMA_TBE: ";
    out << "address = " << m_address << " ";
    out << "NumAcks = " << m_NumAcks << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "]";
}
