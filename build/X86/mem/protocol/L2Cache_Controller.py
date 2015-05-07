from m5.params import *
from m5.SimObject import SimObject
from Controller import RubyController

class L2Cache_Controller(RubyController):
    type = 'L2Cache_Controller'
    cxx_header = 'mem/protocol/L2Cache_Controller.hh'
    L2cache = Param.RubyCache("")
    response_latency = Param.Cycles((2), "")
    request_latency = Param.Cycles((2), "")
    sb = Param.MulticastScoreboard("")
    L1RequestFromL2Cache = MasterPort("")
    GlobalRequestFromL2Cache = MasterPort("")
    responseFromL2Cache = MasterPort("")
    L1RequestToL2Cache = SlavePort("")
    GlobalRequestToL2Cache = SlavePort("")
    responseToL2Cache = SlavePort("")
