#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SimpleTrace[] = {
    120,156,189,81,75,75,3,49,16,158,108,107,145,122,212,163,
    7,15,34,139,96,115,16,233,69,68,45,43,40,165,45,109,
    65,236,37,108,147,89,118,101,95,36,41,180,103,253,223,58,
    179,182,62,254,128,33,249,152,231,55,143,104,216,158,22,189,
    219,19,0,119,74,130,161,43,32,7,152,155,0,80,64,34,
    192,180,224,29,224,13,224,101,17,128,105,195,44,220,163,192,
    236,131,78,40,72,242,12,231,254,128,112,150,21,117,142,115,
    27,107,212,59,122,246,222,51,253,17,9,8,176,16,92,132,
    169,4,44,90,48,157,133,1,57,166,28,230,142,9,116,189,
    146,213,165,172,109,181,68,233,26,66,229,153,177,151,166,97,
    155,235,237,19,40,85,198,5,42,229,187,141,82,84,102,149,
    179,218,4,108,106,108,236,122,189,86,41,198,6,109,200,157,
    252,128,123,38,144,43,135,214,213,196,44,141,52,73,146,185,
    20,173,140,6,81,255,170,47,31,30,71,119,67,53,153,142,
    159,162,193,124,107,188,72,178,50,206,165,179,90,254,105,242,
    215,212,189,122,211,76,194,85,28,247,210,17,29,49,10,121,
    197,158,183,54,225,4,127,184,147,134,153,243,88,162,29,47,
    95,81,251,239,204,127,234,180,89,228,245,215,234,110,206,184,
    24,255,68,55,248,4,143,142,125,103,
};

EmbeddedPython embedded_m5_objects_SimpleTrace(
    "m5/objects/SimpleTrace.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/cpu/o3/probe/SimpleTrace.py",
    "m5.objects.SimpleTrace",
    data_m5_objects_SimpleTrace,
    298,
    538);

} // anonymous namespace