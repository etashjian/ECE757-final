#include "sim/init.hh"

extern "C" {
    void init_param_MulticastScoreboard();
}

EmbeddedSwig embed_swig_param_MulticastScoreboard(init_param_MulticastScoreboard);
