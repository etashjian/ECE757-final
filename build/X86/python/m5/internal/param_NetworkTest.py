# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.7
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.



from sys import version_info
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_NetworkTest', [dirname(__file__)])
        except ImportError:
            import _param_NetworkTest
            return _param_NetworkTest
        if fp is not None:
            try:
                _mod = imp.load_module('_param_NetworkTest', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_NetworkTest = swig_import_helper()
    del swig_import_helper
else:
    import _param_NetworkTest
del version_info
try:
    _swig_property = property
except NameError:
    pass # Python < 2.2 doesn't have 'property'.
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError(name)

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0


def _swig_setattr_nondynamic_method(set):
    def set_attr(self,name,value):
        if (name == "thisown"): return self.this.own(value)
        if hasattr(self,name) or (name == "this"):
            set(self,name,value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr


import param_System
import enum_MemoryMode
import AddrRange_vector
import AbstractMemory_vector
import param_AbstractMemory
import param_MemObject
import param_ClockedObject
import param_ClockDomain
import param_SimObject
import drain
import serialize
class NetworkTest(param_MemObject.MemObject):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
NetworkTest_swigregister = _param_NetworkTest.NetworkTest_swigregister
NetworkTest_swigregister(NetworkTest)

class NetworkTestParams(param_MemObject.MemObjectParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def create(self): return _param_NetworkTest.NetworkTestParams_create(self)
    block_offset = _swig_property(_param_NetworkTest.NetworkTestParams_block_offset_get, _param_NetworkTest.NetworkTestParams_block_offset_set)
    fixed_pkts = _swig_property(_param_NetworkTest.NetworkTestParams_fixed_pkts_get, _param_NetworkTest.NetworkTestParams_fixed_pkts_set)
    inj_rate = _swig_property(_param_NetworkTest.NetworkTestParams_inj_rate_get, _param_NetworkTest.NetworkTestParams_inj_rate_set)
    max_packets = _swig_property(_param_NetworkTest.NetworkTestParams_max_packets_get, _param_NetworkTest.NetworkTestParams_max_packets_set)
    memory_size = _swig_property(_param_NetworkTest.NetworkTestParams_memory_size_get, _param_NetworkTest.NetworkTestParams_memory_size_set)
    num_memories = _swig_property(_param_NetworkTest.NetworkTestParams_num_memories_get, _param_NetworkTest.NetworkTestParams_num_memories_set)
    precision = _swig_property(_param_NetworkTest.NetworkTestParams_precision_get, _param_NetworkTest.NetworkTestParams_precision_set)
    sim_cycles = _swig_property(_param_NetworkTest.NetworkTestParams_sim_cycles_get, _param_NetworkTest.NetworkTestParams_sim_cycles_set)
    system = _swig_property(_param_NetworkTest.NetworkTestParams_system_get, _param_NetworkTest.NetworkTestParams_system_set)
    traffic_type = _swig_property(_param_NetworkTest.NetworkTestParams_traffic_type_get, _param_NetworkTest.NetworkTestParams_traffic_type_set)
    port_test_connection_count = _swig_property(_param_NetworkTest.NetworkTestParams_port_test_connection_count_get, _param_NetworkTest.NetworkTestParams_port_test_connection_count_set)
    def __init__(self): 
        this = _param_NetworkTest.new_NetworkTestParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_NetworkTest.delete_NetworkTestParams
    __del__ = lambda self : None;
NetworkTestParams_swigregister = _param_NetworkTest.NetworkTestParams_swigregister
NetworkTestParams_swigregister(NetworkTestParams)


