/** \file TriggerMsg.hh
 *
 *
 * Auto generated C++ code started by /userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/slicc/symbols/Type.py:200
 */

#ifndef __TriggerMsg_HH__
#define __TriggerMsg_HH__

#include <iostream>

#include "mem/ruby/slicc_interface/RubySlicc_Util.hh"
#include "mem/protocol/Address.hh"
#include "mem/protocol/TriggerType.hh"
#include "mem/protocol/Message.hh"
class TriggerMsg :  public Message
{
  public:
    TriggerMsg
(Tick curTime) : Message(curTime) {
        // m_Addr has no default
        m_Type = TriggerType_NUM; // default value of TriggerType
    }
    TriggerMsg(const TriggerMsg&other)
        : Message(other)
    {
        m_Addr = other.m_Addr;
        m_Type = other.m_Type;
    }
    TriggerMsg(const Tick curTime, const Address& local_Addr, const TriggerType& local_Type)
        : Message(curTime)
    {
        m_Addr = local_Addr;
        m_Type = local_Type;
    }
    MsgPtr
    clone() const
    {
         return std::shared_ptr<Message>(new TriggerMsg(*this));
    }
    // Const accessors methods for each field
    /** \brief Const accessor method for Addr field.
     *  \return Addr field
     */
    const Address&
    getAddr() const
    {
        return m_Addr;
    }
    /** \brief Const accessor method for Type field.
     *  \return Type field
     */
    const TriggerType&
    getType() const
    {
        return m_Type;
    }
    // Non const Accessors methods for each field
    /** \brief Non-const accessor method for Addr field.
     *  \return Addr field
     */
    Address&
    getAddr()
    {
        return m_Addr;
    }
    /** \brief Non-const accessor method for Type field.
     *  \return Type field
     */
    TriggerType&
    getType()
    {
        return m_Type;
    }
    // Mutator methods for each field
    /** \brief Mutator method for Addr field */
    void
    setAddr(const Address& local_Addr)
    {
        m_Addr = local_Addr;
    }
    /** \brief Mutator method for Type field */
    void
    setType(const TriggerType& local_Type)
    {
        m_Type = local_Type;
    }
    void print(std::ostream& out) const;
  //private:
    /** Physical address for this request */
    Address m_Addr;
    /** Type of trigger */
    TriggerType m_Type;
    bool functionalWrite(Packet* param_pkt);
    bool functionalRead(Packet* param_pkt);
};
inline std::ostream&
operator<<(std::ostream& out, const TriggerMsg& obj)
{
    obj.print(out);
    out << std::flush;
    return out;
}

#endif // __TriggerMsg_HH__
