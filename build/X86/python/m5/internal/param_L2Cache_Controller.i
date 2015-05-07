%module(package="m5.internal") param_L2Cache_Controller

%{
#include "sim/sim_object.hh"
#include "params/L2Cache_Controller.hh"
#include <cstddef>
#include "params/RubyCache.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MulticastScoreboard.hh"
#include "mem/protocol/L2Cache_Controller.hh"
/**
  * This is a workaround for bug in swig. Prior to gcc 4.6.1 the STL
  * headers like vector, string, etc. used to automatically pull in
  * the cstddef header but starting with gcc 4.6.1 they no longer do.
  * This leads to swig generated a file that does not compile so we
  * explicitly include cstddef. Additionally, including version 2.0.4,
  * swig uses ptrdiff_t without the std:: namespace prefix which is
  * required with gcc 4.6.1. We explicitly provide access to it.
  */
#include <cstddef>
using std::ptrdiff_t;
%}

%import "python/m5/internal/param_RubyCache.i"
%import "stdint.i"
%import "base/types.hh"
%import "stdint.i"
%import "base/types.hh"
%import "python/m5/internal/param_MulticastScoreboard.i"

%import "python/m5/internal/param_RubyController.i"


// stop swig from creating/wrapping default ctor/dtor
%nodefault L2Cache_Controller;
class L2Cache_Controller
    : public AbstractController
{
  public:
};

%include "params/L2Cache_Controller.hh"
