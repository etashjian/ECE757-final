#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SimpleMemory[] = {
    120,156,189,82,75,111,211,64,16,158,205,171,121,84,32,122,
    229,98,36,14,86,165,198,60,84,149,3,66,52,81,64,160,
    210,70,73,133,68,46,214,198,59,81,140,252,98,103,211,54,
    231,240,191,97,102,147,40,61,113,100,109,143,190,25,205,227,
    155,253,156,192,238,212,249,251,24,0,80,159,129,225,87,65,
    6,112,187,67,138,81,13,80,193,66,129,169,195,111,128,13,
    192,143,89,13,76,3,166,97,147,75,210,63,124,66,197,200,
    137,57,117,199,108,167,105,94,101,248,13,243,210,174,147,199,
    147,6,50,233,59,3,4,152,41,153,39,189,20,204,234,128,
    13,224,81,27,198,77,192,22,252,60,146,129,60,102,83,131,
    89,123,31,105,130,105,249,72,199,71,186,96,56,216,246,145,
    30,76,166,97,135,91,79,132,7,61,99,147,99,30,145,167,
    18,51,236,47,151,212,19,114,153,190,195,160,42,173,35,215,
    96,255,237,171,130,232,185,20,226,175,21,146,11,92,25,88,
    164,170,44,8,131,76,59,44,146,181,19,242,146,247,242,223,
    121,193,157,182,169,46,18,164,54,39,190,126,211,127,247,121,
    16,17,189,96,103,88,230,243,180,64,195,53,218,4,186,48,
    193,189,77,29,6,115,134,247,169,113,203,80,110,206,73,93,
    28,23,58,199,56,118,93,239,228,165,89,101,226,10,91,183,
    174,208,199,147,135,135,120,201,173,208,186,206,126,171,49,47,
    229,179,100,59,39,242,140,181,213,185,59,98,116,181,219,68,
    240,126,171,222,1,199,204,220,61,101,127,171,218,96,207,202,
    55,63,112,20,33,15,134,110,216,68,43,66,75,149,78,48,
    50,145,89,44,82,90,162,141,70,195,209,197,249,69,244,233,
    203,245,229,85,60,158,220,124,29,13,111,119,193,179,69,90,
    232,44,34,155,68,162,208,227,159,165,95,173,189,124,103,210,
    252,9,155,150,146,231,88,157,168,147,122,71,93,135,162,131,
    167,148,159,247,43,217,141,156,164,93,206,201,89,157,184,109,
    23,223,226,63,80,245,98,189,223,202,243,225,84,134,200,221,
    119,85,183,246,23,204,39,208,83,
};

EmbeddedPython embedded_m5_objects_SimpleMemory(
    "m5/objects/SimpleMemory.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/mem/SimpleMemory.py",
    "m5.objects.SimpleMemory",
    data_m5_objects_SimpleMemory,
    473,
    863);

} // anonymous namespace