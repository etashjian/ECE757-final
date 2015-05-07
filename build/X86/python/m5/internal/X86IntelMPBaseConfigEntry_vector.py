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
            fp, pathname, description = imp.find_module('_X86IntelMPBaseConfigEntry_vector', [dirname(__file__)])
        except ImportError:
            import _X86IntelMPBaseConfigEntry_vector
            return _X86IntelMPBaseConfigEntry_vector
        if fp is not None:
            try:
                _mod = imp.load_module('_X86IntelMPBaseConfigEntry_vector', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _X86IntelMPBaseConfigEntry_vector = swig_import_helper()
    del swig_import_helper
else:
    import _X86IntelMPBaseConfigEntry_vector
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


class SwigPyIterator(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _X86IntelMPBaseConfigEntry_vector.delete_SwigPyIterator
    __del__ = lambda self : None;
    def value(self): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator_value(self)
    def incr(self, n=1): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator_incr(self, n)
    def decr(self, n=1): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator_decr(self, n)
    def distance(self, *args): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator_distance(self, *args)
    def equal(self, *args): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator_equal(self, *args)
    def copy(self): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator_copy(self)
    def next(self): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator_next(self)
    def __next__(self): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator___next__(self)
    def previous(self): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator_previous(self)
    def advance(self, *args): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator_advance(self, *args)
    def __eq__(self, *args): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator___eq__(self, *args)
    def __ne__(self, *args): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator___ne__(self, *args)
    def __iadd__(self, *args): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator___iadd__(self, *args)
    def __isub__(self, *args): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator___isub__(self, *args)
    def __add__(self, *args): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator___add__(self, *args)
    def __sub__(self, *args): return _X86IntelMPBaseConfigEntry_vector.SwigPyIterator___sub__(self, *args)
    def __iter__(self): return self
SwigPyIterator_swigregister = _X86IntelMPBaseConfigEntry_vector.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import param_X86IntelMPBaseConfigEntry
import param_SimObject
import drain
import serialize
class vector_X86IntelMPBaseConfigEntry(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def iterator(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry___nonzero__(self)
    def __bool__(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry___bool__(self)
    def __len__(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry___len__(self)
    def pop(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_pop(self)
    def __getslice__(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry___getslice__(self, *args)
    def __setslice__(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry___setslice__(self, *args)
    def __delslice__(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry___delslice__(self, *args)
    def __delitem__(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry___delitem__(self, *args)
    def __getitem__(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry___getitem__(self, *args)
    def __setitem__(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry___setitem__(self, *args)
    def append(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_append(self, *args)
    def empty(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_empty(self)
    def size(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_size(self)
    def clear(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_clear(self)
    def swap(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_swap(self, *args)
    def get_allocator(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_get_allocator(self)
    def begin(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_begin(self)
    def end(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_end(self)
    def rbegin(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_rbegin(self)
    def rend(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_rend(self)
    def pop_back(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_pop_back(self)
    def erase(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_erase(self, *args)
    def __init__(self, *args): 
        this = _X86IntelMPBaseConfigEntry_vector.new_vector_X86IntelMPBaseConfigEntry(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_push_back(self, *args)
    def front(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_front(self)
    def back(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_back(self)
    def assign(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_assign(self, *args)
    def resize(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_resize(self, *args)
    def insert(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_insert(self, *args)
    def reserve(self, *args): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_reserve(self, *args)
    def capacity(self): return _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_capacity(self)
    __swig_destroy__ = _X86IntelMPBaseConfigEntry_vector.delete_vector_X86IntelMPBaseConfigEntry
    __del__ = lambda self : None;
vector_X86IntelMPBaseConfigEntry_swigregister = _X86IntelMPBaseConfigEntry_vector.vector_X86IntelMPBaseConfigEntry_swigregister
vector_X86IntelMPBaseConfigEntry_swigregister(vector_X86IntelMPBaseConfigEntry)



