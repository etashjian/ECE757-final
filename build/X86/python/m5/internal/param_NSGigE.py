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
            fp, pathname, description = imp.find_module('_param_NSGigE', [dirname(__file__)])
        except ImportError:
            import _param_NSGigE
            return _param_NSGigE
        if fp is not None:
            try:
                _mod = imp.load_module('_param_NSGigE', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_NSGigE = swig_import_helper()
    del swig_import_helper
else:
    import _param_NSGigE
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


import param_EtherDevBase
import param_EtherDevice
import param_PciDevice
import param_Platform
import param_IntrControl
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
import param_DmaDevice
import param_PioDevice
class NSGigE(param_EtherDevBase.EtherDevBase):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
NSGigE_swigregister = _param_NSGigE.NSGigE_swigregister
NSGigE_swigregister(NSGigE)

class NSGigEParams(param_EtherDevBase.EtherDevBaseParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def create(self): return _param_NSGigE.NSGigEParams_create(self)
    dma_data_free = _swig_property(_param_NSGigE.NSGigEParams_dma_data_free_get, _param_NSGigE.NSGigEParams_dma_data_free_set)
    dma_desc_free = _swig_property(_param_NSGigE.NSGigEParams_dma_desc_free_get, _param_NSGigE.NSGigEParams_dma_desc_free_set)
    dma_no_allocate = _swig_property(_param_NSGigE.NSGigEParams_dma_no_allocate_get, _param_NSGigE.NSGigEParams_dma_no_allocate_set)
    def __init__(self): 
        this = _param_NSGigE.new_NSGigEParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_NSGigE.delete_NSGigEParams
    __del__ = lambda self : None;
NSGigEParams_swigregister = _param_NSGigE.NSGigEParams_swigregister
NSGigEParams_swigregister(NSGigEParams)


