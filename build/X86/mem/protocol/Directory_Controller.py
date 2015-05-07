from m5.params import *
from m5.SimObject import SimObject
from Controller import RubyController

class Directory_Controller(RubyController):
    type = 'Directory_Controller'
    cxx_header = 'mem/protocol/Directory_Controller.hh'
    directory = Param.RubyDirectoryMemory("")
    directory_latency = Param.Cycles((6), "")
    to_memory_controller_latency = Param.Cycles((1), "")
    requestToDir = SlavePort("")
    responseToDir = SlavePort("")
    forwardFromDir = MasterPort("")
    responseFromDir = MasterPort("")
