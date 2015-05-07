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
            fp, pathname, description = imp.find_module('_AddrRange_vector', [dirname(__file__)])
        except ImportError:
            import _AddrRange_vector
            return _AddrRange_vector
        if fp is not None:
            try:
                _mod = imp.load_module('_AddrRange_vector', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _AddrRange_vector = swig_import_helper()
    del swig_import_helper
else:
    import _AddrRange_vector
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
    __swig_destroy__ = _AddrRange_vector.delete_SwigPyIterator
    __del__ = lambda self : None;
    def value(self): return _AddrRange_vector.SwigPyIterator_value(self)
    def incr(self, n=1): return _AddrRange_vector.SwigPyIterator_incr(self, n)
    def decr(self, n=1): return _AddrRange_vector.SwigPyIterator_decr(self, n)
    def distance(self, *args): return _AddrRange_vector.SwigPyIterator_distance(self, *args)
    def equal(self, *args): return _AddrRange_vector.SwigPyIterator_equal(self, *args)
    def copy(self): return _AddrRange_vector.SwigPyIterator_copy(self)
    def next(self): return _AddrRange_vector.SwigPyIterator_next(self)
    def __next__(self): return _AddrRange_vector.SwigPyIterator___next__(self)
    def previous(self): return _AddrRange_vector.SwigPyIterator_previous(self)
    def advance(self, *args): return _AddrRange_vector.SwigPyIterator_advance(self, *args)
    def __eq__(self, *args): return _AddrRange_vector.SwigPyIterator___eq__(self, *args)
    def __ne__(self, *args): return _AddrRange_vector.SwigPyIterator___ne__(self, *args)
    def __iadd__(self, *args): return _AddrRange_vector.SwigPyIterator___iadd__(self, *args)
    def __isub__(self, *args): return _AddrRange_vector.SwigPyIterator___isub__(self, *args)
    def __add__(self, *args): return _AddrRange_vector.SwigPyIterator___add__(self, *args)
    def __sub__(self, *args): return _AddrRange_vector.SwigPyIterator___sub__(self, *args)
    def __iter__(self): return self
SwigPyIterator_swigregister = _AddrRange_vector.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

class vector_AddrRange(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def iterator(self): return _AddrRange_vector.vector_AddrRange_iterator(self)
    def __iter__(self): return self.iterator()
    def __nonzero__(self): return _AddrRange_vector.vector_AddrRange___nonzero__(self)
    def __bool__(self): return _AddrRange_vector.vector_AddrRange___bool__(self)
    def __len__(self): return _AddrRange_vector.vector_AddrRange___len__(self)
    def pop(self): return _AddrRange_vector.vector_AddrRange_pop(self)
    def __getslice__(self, *args): return _AddrRange_vector.vector_AddrRange___getslice__(self, *args)
    def __setslice__(self, *args): return _AddrRange_vector.vector_AddrRange___setslice__(self, *args)
    def __delslice__(self, *args): return _AddrRange_vector.vector_AddrRange___delslice__(self, *args)
    def __delitem__(self, *args): return _AddrRange_vector.vector_AddrRange___delitem__(self, *args)
    def __getitem__(self, *args): return _AddrRange_vector.vector_AddrRange___getitem__(self, *args)
    def __setitem__(self, *args): return _AddrRange_vector.vector_AddrRange___setitem__(self, *args)
    def append(self, *args): return _AddrRange_vector.vector_AddrRange_append(self, *args)
    def empty(self): return _AddrRange_vector.vector_AddrRange_empty(self)
    def size(self): return _AddrRange_vector.vector_AddrRange_size(self)
    def clear(self): return _AddrRange_vector.vector_AddrRange_clear(self)
    def swap(self, *args): return _AddrRange_vector.vector_AddrRange_swap(self, *args)
    def get_allocator(self): return _AddrRange_vector.vector_AddrRange_get_allocator(self)
    def begin(self): return _AddrRange_vector.vector_AddrRange_begin(self)
    def end(self): return _AddrRange_vector.vector_AddrRange_end(self)
    def rbegin(self): return _AddrRange_vector.vector_AddrRange_rbegin(self)
    def rend(self): return _AddrRange_vector.vector_AddrRange_rend(self)
    def pop_back(self): return _AddrRange_vector.vector_AddrRange_pop_back(self)
    def erase(self, *args): return _AddrRange_vector.vector_AddrRange_erase(self, *args)
    def __init__(self, *args): 
        this = _AddrRange_vector.new_vector_AddrRange(*args)
        try: self.this.append(this)
        except: self.this = this
    def push_back(self, *args): return _AddrRange_vector.vector_AddrRange_push_back(self, *args)
    def front(self): return _AddrRange_vector.vector_AddrRange_front(self)
    def back(self): return _AddrRange_vector.vector_AddrRange_back(self)
    def assign(self, *args): return _AddrRange_vector.vector_AddrRange_assign(self, *args)
    def resize(self, *args): return _AddrRange_vector.vector_AddrRange_resize(self, *args)
    def insert(self, *args): return _AddrRange_vector.vector_AddrRange_insert(self, *args)
    def reserve(self, *args): return _AddrRange_vector.vector_AddrRange_reserve(self, *args)
    def capacity(self): return _AddrRange_vector.vector_AddrRange_capacity(self)
    __swig_destroy__ = _AddrRange_vector.delete_vector_AddrRange
    __del__ = lambda self : None;
vector_AddrRange_swigregister = _AddrRange_vector.vector_AddrRange_swigregister
vector_AddrRange_swigregister(vector_AddrRange)



