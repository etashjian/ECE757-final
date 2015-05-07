#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Probe[] = {
    120,156,181,145,77,79,131,64,16,134,103,41,253,140,7,163,
    127,192,35,26,237,158,154,94,76,227,71,106,162,169,109,67,
    123,145,11,217,194,34,52,44,37,187,219,164,61,215,255,173,
    59,44,181,254,1,23,120,153,153,44,243,62,179,68,80,175,
    134,121,30,174,0,212,200,4,177,185,9,228,0,130,64,64,
    128,96,238,64,238,192,178,142,26,38,106,0,39,144,16,136,
    93,248,2,56,0,124,4,46,196,77,88,120,45,211,34,251,
    54,203,35,38,210,93,35,139,76,204,86,107,30,105,91,66,
    185,209,151,70,231,114,179,226,147,76,105,94,112,105,183,68,
    127,153,158,144,233,218,4,28,16,197,248,7,14,194,5,198,
    222,133,117,19,120,11,214,109,132,58,56,16,116,192,95,120,
    248,153,239,24,81,23,40,153,160,37,154,88,237,167,169,62,
    59,250,190,179,130,125,114,233,33,161,238,24,9,195,130,9,
    30,134,186,87,37,98,19,111,115,76,93,220,176,47,121,85,
    143,118,187,48,229,44,230,82,55,177,19,147,76,248,200,171,
    91,54,229,133,214,8,193,138,189,110,155,183,168,109,112,207,
    73,212,212,8,221,42,46,85,201,34,78,99,26,39,73,166,
    82,46,233,248,121,60,28,12,233,203,235,244,113,18,206,253,
    217,219,248,121,89,23,239,146,172,96,57,85,50,162,167,201,
    170,97,250,229,190,154,250,22,123,35,73,139,224,53,245,16,
    178,154,89,12,250,191,255,193,2,119,109,181,196,17,84,117,
    2,152,201,205,206,182,250,127,226,202,243,222,158,243,200,59,
    146,159,147,30,233,57,63,226,103,147,128,
};

EmbeddedPython embedded_m5_objects_Probe(
    "m5/objects/Probe.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/sim/probe/Probe.py",
    "m5.objects.Probe",
    data_m5_objects_Probe,
    363,
    668);

} // anonymous namespace
