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
            fp, pathname, description = imp.find_module('_param_IsaFake', [dirname(__file__)])
        except ImportError:
            import _param_IsaFake
            return _param_IsaFake
        if fp is not None:
            try:
                _mod = imp.load_module('_param_IsaFake', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_IsaFake = swig_import_helper()
    del swig_import_helper
else:
    import _param_IsaFake
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


import param_BasicPioDevice
import param_PioDevice
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
class IsaFake(param_BasicPioDevice.BasicPioDevice):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
IsaFake_swigregister = _param_IsaFake.IsaFake_swigregister
IsaFake_swigregister(IsaFake)

class IsaFakeParams(param_BasicPioDevice.BasicPioDeviceParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def create(self): return _param_IsaFake.IsaFakeParams_create(self)
    fake_mem = _swig_property(_param_IsaFake.IsaFakeParams_fake_mem_get, _param_IsaFake.IsaFakeParams_fake_mem_set)
    pio_size = _swig_property(_param_IsaFake.IsaFakeParams_pio_size_get, _param_IsaFake.IsaFakeParams_pio_size_set)
    ret_bad_addr = _swig_property(_param_IsaFake.IsaFakeParams_ret_bad_addr_get, _param_IsaFake.IsaFakeParams_ret_bad_addr_set)
    ret_data16 = _swig_property(_param_IsaFake.IsaFakeParams_ret_data16_get, _param_IsaFake.IsaFakeParams_ret_data16_set)
    ret_data32 = _swig_property(_param_IsaFake.IsaFakeParams_ret_data32_get, _param_IsaFake.IsaFakeParams_ret_data32_set)
    ret_data64 = _swig_property(_param_IsaFake.IsaFakeParams_ret_data64_get, _param_IsaFake.IsaFakeParams_ret_data64_set)
    ret_data8 = _swig_property(_param_IsaFake.IsaFakeParams_ret_data8_get, _param_IsaFake.IsaFakeParams_ret_data8_set)
    update_data = _swig_property(_param_IsaFake.IsaFakeParams_update_data_get, _param_IsaFake.IsaFakeParams_update_data_set)
    warn_access = _swig_property(_param_IsaFake.IsaFakeParams_warn_access_get, _param_IsaFake.IsaFakeParams_warn_access_set)
    def __init__(self): 
        this = _param_IsaFake.new_IsaFakeParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_IsaFake.delete_IsaFakeParams
    __del__ = lambda self : None;
IsaFakeParams_swigregister = _param_IsaFake.IsaFakeParams_swigregister
IsaFakeParams_swigregister(IsaFakeParams)



