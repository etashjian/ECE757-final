#include "sim/init.hh"

namespace {

const uint8_t data_m5_trace[] = {
    120,156,189,82,65,75,195,48,20,126,105,187,234,96,120,17,
    188,9,34,8,189,184,156,198,46,34,202,220,64,145,42,217,
    78,189,140,218,100,174,35,109,71,146,10,187,251,191,245,189,
    48,182,121,21,52,164,143,47,31,239,189,239,125,105,10,216,
    174,0,191,187,11,0,251,128,64,226,102,160,1,178,29,102,
    144,49,143,3,208,1,84,33,100,33,84,17,100,17,48,25,
    194,39,166,118,64,70,30,196,84,48,77,58,216,168,252,194,
    149,38,212,220,197,24,154,214,173,91,231,97,249,94,55,70,
    21,135,250,35,210,63,165,92,220,12,86,1,172,66,152,71,
    36,59,77,24,242,169,111,234,40,76,114,109,149,59,166,70,
    181,83,166,206,181,167,157,201,11,229,34,68,197,71,110,220,
    17,2,85,231,111,90,201,132,84,246,193,166,24,120,107,149,
    177,107,44,225,146,203,197,162,180,75,101,248,120,52,30,14,
    134,124,242,152,222,63,207,95,197,203,211,120,52,219,146,215,
    139,18,149,184,53,5,95,111,220,178,169,121,53,224,94,179,
    143,103,82,147,165,37,185,75,146,32,79,192,126,101,145,28,
    204,76,171,68,136,64,208,73,16,47,226,31,38,254,204,73,
    188,187,183,171,189,145,132,252,249,129,252,120,173,43,181,59,
    57,248,1,125,95,46,40,87,144,21,225,243,187,255,51,49,
    189,132,155,170,145,173,86,183,231,164,65,68,143,245,130,179,
    160,27,126,3,35,5,152,171,
};

EmbeddedPython embedded_m5_trace(
    "m5/trace.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/python/m5/trace.py",
    "m5.trace",
    data_m5_trace,
    328,
    742);

} // anonymous namespace