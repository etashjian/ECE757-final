#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_MemoryMode[] = {
    120,156,205,86,81,111,27,69,16,158,189,59,59,177,19,55,
    78,211,164,45,13,212,8,85,152,138,198,72,208,22,68,85,
    81,74,138,90,209,180,156,145,154,26,196,113,189,91,199,231,
    216,119,214,221,166,197,40,121,33,21,240,198,143,64,60,240,
    63,248,95,48,223,220,217,113,34,144,120,74,113,114,163,185,
    217,189,217,153,111,191,153,221,128,138,95,137,159,79,26,68,
    217,188,34,10,249,95,209,128,104,168,168,163,72,105,69,225,
    18,237,150,40,253,128,194,18,189,36,234,88,164,45,58,100,
    197,166,175,45,138,23,229,155,50,13,108,177,40,26,87,73,
    59,212,41,209,147,120,153,28,93,166,221,42,165,223,145,82,
    42,86,180,29,206,81,56,79,47,217,59,43,21,113,56,79,
    97,85,148,10,133,11,162,84,105,92,39,189,64,29,118,62,
    71,157,26,187,186,202,174,206,136,171,63,225,42,228,145,58,
    133,53,76,231,88,158,98,166,131,153,178,198,25,241,178,68,
    218,166,126,157,58,117,81,150,169,179,44,202,89,234,156,21,
    101,133,58,43,162,156,163,206,57,81,86,169,179,138,100,218,
    205,101,70,37,250,139,127,77,70,133,204,34,139,231,58,205,
    162,36,246,162,184,155,68,22,198,203,16,192,48,128,152,43,
    192,188,11,48,255,32,65,50,180,10,48,15,136,20,222,137,
    6,22,29,136,114,96,209,184,73,251,138,250,14,133,54,237,
    243,50,37,58,84,180,163,232,208,162,111,108,76,56,96,233,
    112,250,111,144,99,114,36,251,146,126,238,105,142,14,74,180,
    95,162,246,246,190,5,195,110,133,210,223,233,135,117,113,58,
    47,78,45,218,103,233,208,161,67,7,101,122,194,147,216,212,
    175,0,52,181,189,207,153,178,165,221,116,56,218,173,153,116,
    145,74,24,165,177,63,212,166,206,186,167,227,189,161,247,80,
    15,147,116,252,48,9,117,179,58,153,149,100,27,35,223,244,
    92,249,204,6,30,195,145,17,119,73,172,205,2,43,221,40,
    14,189,97,18,238,13,180,153,135,47,175,27,13,180,231,201,
    224,253,225,40,73,205,102,154,38,169,11,72,197,56,72,252,
    233,23,0,52,24,36,153,110,98,53,89,198,133,123,131,217,
    221,145,120,68,0,18,42,62,14,117,22,164,209,200,240,78,
    229,30,49,27,222,154,216,35,17,217,14,139,214,94,198,251,
    57,242,3,221,10,91,97,183,27,101,61,157,182,54,239,110,
    222,188,126,179,117,239,254,214,157,47,188,199,238,163,7,155,
    119,191,42,140,215,56,17,127,208,122,182,23,13,194,214,246,
    135,55,90,163,177,233,37,113,107,120,189,21,197,70,167,24,
    60,1,211,6,79,57,139,5,95,68,59,94,36,169,122,61,
    61,24,233,20,145,102,175,33,24,85,87,139,170,172,108,213,
    84,53,214,74,252,216,106,221,90,80,91,17,146,13,0,0,
    120,102,79,152,245,27,201,30,50,5,118,45,74,215,193,155,
    62,255,43,108,52,179,167,141,49,75,198,190,4,74,185,181,
    111,131,13,185,113,95,184,198,164,227,153,183,176,253,49,9,
    97,74,212,47,83,78,36,230,95,206,172,116,12,201,211,225,
    198,98,231,14,101,191,30,247,16,215,137,119,129,171,143,77,
    107,188,212,143,194,205,118,19,129,111,9,71,76,47,202,146,
    23,177,236,4,116,169,166,54,99,242,120,252,232,89,95,7,
    38,187,204,134,167,201,94,35,240,227,56,49,13,63,12,27,
    190,49,105,244,108,207,232,172,97,146,198,149,172,89,193,214,
    47,79,104,54,245,55,30,77,104,5,10,48,173,242,151,48,
    10,12,191,172,200,139,224,159,105,195,20,233,37,97,198,118,
    184,216,209,198,69,144,230,12,139,59,147,229,132,139,205,242,
    132,57,153,30,116,77,85,72,232,103,153,39,203,193,46,124,
    195,215,207,253,193,158,54,152,159,25,223,240,170,80,243,133,
    94,17,227,46,32,231,73,202,128,209,139,147,56,28,115,196,
    81,240,22,130,185,32,188,91,36,48,111,149,89,55,199,178,
    76,53,102,97,221,10,144,156,83,112,78,248,182,6,40,72,
    56,160,138,126,194,220,59,228,174,211,180,164,109,72,150,82,
    152,13,104,248,216,5,181,221,75,16,235,16,175,79,128,56,
    125,52,106,39,209,120,15,17,88,2,65,96,23,201,78,139,
    107,235,88,113,93,60,42,46,238,151,109,20,137,133,82,58,
    42,18,27,112,164,183,139,138,64,249,49,41,120,120,166,14,
    4,36,23,93,84,88,37,20,118,193,203,89,114,238,204,144,
    211,197,254,8,51,221,139,255,6,232,229,255,3,160,59,57,
    160,239,35,130,197,130,83,53,225,82,85,5,32,132,85,192,
    43,208,126,198,202,248,60,160,157,5,245,60,159,133,79,226,
    154,28,106,114,48,202,1,158,247,151,28,235,92,113,192,190,
    174,77,107,197,97,149,161,29,140,210,228,251,113,35,233,54,
    12,77,98,184,117,37,219,184,146,125,204,13,163,113,91,90,
    80,222,50,242,166,144,234,81,202,197,95,145,151,188,160,61,
    41,110,175,56,110,24,252,85,128,106,77,32,151,254,149,153,
    20,109,235,21,225,93,157,226,141,240,63,194,242,85,1,219,
    166,243,252,84,149,196,232,37,210,73,229,34,34,163,252,124,
    10,216,145,185,38,92,230,220,118,158,129,36,135,52,221,183,
    143,177,232,212,83,115,175,34,200,73,57,150,105,202,25,60,
    54,130,71,133,252,204,231,188,2,109,126,34,240,131,105,80,
    212,148,84,47,30,108,243,10,166,127,75,210,164,254,225,104,
    180,242,218,180,138,54,198,165,155,221,148,169,249,73,249,128,
    126,153,233,112,135,54,41,156,106,118,113,45,155,61,213,156,
    105,53,11,177,254,211,201,229,28,47,123,108,87,207,207,48,
    45,47,112,123,90,224,71,205,114,122,159,226,174,117,250,156,
    155,207,23,246,16,227,231,71,140,195,145,113,73,173,88,51,
    60,122,23,226,218,148,66,106,98,59,213,112,47,159,236,241,
    51,39,158,151,247,213,123,136,201,145,44,150,202,130,248,137,
    43,124,30,255,218,20,246,113,230,194,226,46,65,88,147,30,
    194,29,135,111,111,102,44,119,134,124,201,169,9,109,101,139,
    175,5,249,109,182,129,239,222,132,192,153,235,190,3,15,88,
    44,175,83,161,126,222,136,98,253,66,90,145,112,193,221,152,
    48,36,138,249,102,17,133,242,141,111,146,97,113,179,48,209,
    48,138,119,204,242,212,138,84,3,63,232,193,138,160,182,142,
    161,35,119,149,224,185,159,190,194,50,23,224,110,229,13,246,
    54,82,206,110,176,192,229,163,178,84,81,101,11,23,94,91,
    85,249,34,226,168,197,90,197,174,148,43,37,155,47,35,176,
    172,168,170,93,169,86,84,241,103,253,13,83,56,46,3,
};

EmbeddedPython embedded_m5_internal_enum_MemoryMode(
    "m5/internal/enum_MemoryMode.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/enum_MemoryMode.py",
    "m5.internal.enum_MemoryMode",
    data_m5_internal_enum_MemoryMode,
    1503,
    3766);

} // anonymous namespace
