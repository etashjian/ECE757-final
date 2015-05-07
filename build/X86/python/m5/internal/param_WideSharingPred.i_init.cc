#include "sim/init.hh"

extern "C" {
    void init_param_WideSharingPred();
}

EmbeddedSwig embed_swig_param_WideSharingPred(init_param_WideSharingPred);
