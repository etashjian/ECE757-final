#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPIOIntAssignment[] = {
    120,156,205,89,109,115,219,198,17,222,3,72,202,164,68,235,
    253,93,137,153,201,184,101,211,218,76,156,198,78,90,143,167,
    142,170,116,156,73,36,21,244,140,100,182,83,20,34,142,20,
    36,18,96,129,163,29,102,164,126,168,60,109,191,245,71,116,
    250,161,255,163,63,164,255,164,221,221,195,65,164,20,71,178,
    219,25,83,34,111,14,139,187,189,125,121,118,247,238,216,132,
    244,47,143,223,95,84,0,146,63,10,0,31,63,2,58,0,
    93,1,13,1,66,10,240,231,225,56,15,241,79,193,207,195,
    75,128,134,5,210,130,51,236,216,240,27,11,194,41,158,83,
    128,142,205,20,1,131,18,200,28,52,242,176,23,206,66,78,
    22,224,184,4,241,239,65,8,17,10,216,247,39,192,191,1,
    47,145,59,118,138,204,240,6,248,37,238,20,193,159,228,78,
    9,6,51,32,39,161,129,204,39,160,81,70,86,31,32,171,
    155,204,234,95,196,202,199,55,11,224,151,105,56,202,242,140,
    70,230,104,36,175,113,147,185,76,27,201,102,160,49,99,250,
    179,208,152,53,253,57,104,204,153,254,60,52,230,77,127,1,
    26,11,166,191,8,141,69,211,95,130,198,18,248,211,32,231,
    225,104,25,90,104,154,153,108,253,21,144,54,28,173,66,99,
    21,36,126,86,224,12,173,231,207,242,216,53,30,59,151,141,
    93,231,177,27,208,216,0,137,159,117,61,182,0,245,234,34,
    250,34,248,15,254,85,209,23,160,166,176,121,46,227,36,136,
    66,55,8,91,81,96,209,251,2,53,228,185,38,53,19,169,
    11,55,201,133,255,4,246,159,111,165,46,60,5,100,44,72,
    254,142,5,167,220,57,181,96,80,133,19,1,71,57,240,109,
    56,193,101,242,36,64,91,192,153,5,191,181,105,192,41,182,
    57,52,250,187,144,83,218,127,71,108,116,205,105,2,78,243,
    112,146,135,250,254,137,69,132,227,34,196,255,128,111,55,152,
    233,13,102,106,193,9,182,57,56,203,193,105,1,246,112,16,
    146,142,138,164,190,216,63,65,77,145,82,175,230,80,218,237,
    33,117,73,21,63,136,67,175,43,21,106,3,110,207,139,189,
    174,187,255,233,253,39,161,146,157,175,119,159,236,96,231,113,
    146,4,237,176,43,67,85,45,153,89,81,114,183,231,169,67,
    135,217,216,100,159,110,79,49,251,40,148,106,18,59,173,32,
    244,221,110,228,247,59,82,221,32,222,110,43,232,72,215,229,
    151,79,186,189,40,86,91,113,28,197,14,153,152,137,157,200,
    203,102,144,129,155,157,40,145,85,90,141,151,113,136,189,162,
    209,173,30,115,36,1,88,116,154,236,203,164,25,7,61,133,
    158,211,28,105,52,113,171,146,207,184,73,94,96,83,235,39,
    232,223,158,215,148,53,191,230,183,90,65,114,40,227,218,214,
    230,214,131,79,30,212,190,120,178,253,248,43,119,215,217,249,
    114,107,243,105,74,188,131,138,120,157,218,65,63,232,248,53,
    180,76,173,55,80,135,81,88,235,126,82,11,208,72,49,189,
    188,194,108,119,113,202,28,11,16,180,221,128,85,119,15,101,
    167,39,99,146,60,89,35,225,196,140,152,18,5,97,139,170,
    40,99,47,143,95,91,108,88,147,98,59,32,229,155,100,16,
    194,161,109,144,247,119,96,31,35,68,142,45,136,55,8,87,
    71,248,17,4,4,68,87,157,222,89,252,238,215,100,53,77,
    61,178,9,45,154,120,194,88,68,80,226,200,135,4,143,16,
    24,80,121,56,42,128,6,26,226,83,35,47,30,80,139,195,
    137,141,133,204,115,144,252,109,148,67,56,3,232,21,204,9,
    72,90,194,165,254,196,216,173,87,73,240,109,198,140,58,12,
    146,232,69,200,158,161,62,71,91,29,109,178,59,216,57,56,
    146,77,149,220,66,194,179,168,95,105,122,97,24,169,138,231,
    251,21,79,169,56,56,232,43,153,84,84,84,185,157,84,139,
    4,133,89,3,187,140,223,160,103,96,70,144,64,152,233,7,
    63,104,42,124,152,231,7,182,127,34,21,66,230,48,242,19,
    164,19,139,182,84,14,9,169,110,98,243,216,44,199,216,172,
    22,12,146,18,217,105,169,18,131,210,75,18,151,151,35,58,
    227,143,102,63,247,58,125,169,104,124,162,60,133,171,82,87,
    47,52,38,8,92,33,27,24,19,144,89,221,48,10,253,1,
    106,16,52,223,39,225,86,24,135,83,64,72,92,68,20,78,
    96,91,128,50,162,114,198,106,146,178,185,20,131,140,191,37,
    50,13,48,38,68,154,127,16,139,103,152,165,170,22,167,25,
    214,154,3,151,82,11,231,30,135,160,238,172,83,179,65,205,
    59,198,48,111,223,58,229,139,214,249,144,36,178,216,36,77,
    59,85,62,11,190,237,145,224,91,61,15,62,204,183,117,10,
    34,139,66,237,60,136,108,50,79,252,40,141,24,10,79,4,
    13,190,30,138,19,54,154,51,67,198,40,24,136,59,132,219,
    97,240,182,135,192,235,144,191,24,185,206,234,171,12,124,107,
    28,13,220,214,6,254,152,36,154,74,49,87,102,172,149,68,
    147,0,99,165,230,102,83,255,18,59,131,101,50,245,176,145,
    151,177,182,238,133,101,46,146,92,104,121,27,162,243,145,182,
    189,238,228,8,157,45,27,150,210,226,151,80,250,232,197,209,
    55,131,74,212,170,40,48,50,60,188,157,220,189,157,252,28,
    19,76,229,17,167,44,157,98,116,18,137,101,47,198,100,81,
    228,7,157,0,92,78,6,110,90,174,208,25,180,145,96,31,
    178,11,56,223,37,42,166,52,55,38,246,47,101,246,39,117,
    62,35,113,74,108,124,27,150,241,91,18,44,179,27,113,38,
    230,141,14,191,197,239,231,228,6,178,132,4,218,162,58,117,
    173,17,43,75,106,59,63,28,65,217,91,87,213,249,128,132,
    54,225,91,128,12,83,244,181,73,25,138,168,191,0,111,18,
    5,252,25,8,63,8,147,52,6,57,218,233,75,48,152,167,
    225,191,3,78,114,223,81,106,45,29,203,86,154,6,49,212,
    147,7,60,84,87,222,47,225,175,67,25,242,204,6,65,85,
    210,78,183,129,195,85,50,151,69,63,3,239,90,149,48,55,
    154,38,200,125,135,94,66,195,116,66,176,179,132,112,158,108,
    179,253,26,102,185,183,238,40,14,47,20,196,37,153,127,117,
    142,72,42,65,235,98,222,26,194,217,79,168,185,147,65,76,
    24,218,91,21,255,214,197,154,49,84,81,93,157,167,191,32,
    25,115,172,213,116,65,145,196,196,177,254,216,221,220,249,106,
    103,187,238,166,204,179,199,209,69,178,48,204,155,48,188,151,
    133,161,228,226,242,146,143,31,212,90,132,170,51,75,224,153,
    16,55,97,116,28,203,129,204,67,163,64,1,203,219,105,145,
    198,179,48,169,149,82,242,72,229,98,187,110,107,139,103,192,
    210,152,161,230,155,241,136,111,134,205,195,142,215,61,240,189,
    71,251,36,12,73,212,52,17,110,25,245,102,134,213,163,232,
    20,175,210,144,31,63,52,106,62,31,15,53,157,143,8,45,
    70,61,14,90,63,106,114,238,122,122,40,43,93,217,61,64,
    177,14,131,94,165,213,241,218,236,93,59,85,127,199,168,175,
    24,30,23,119,25,9,37,200,237,168,210,140,66,172,81,253,
    166,138,226,138,47,81,104,233,87,238,84,184,192,85,130,164,
    226,29,224,91,175,169,116,180,141,166,20,222,252,122,113,59,
    225,125,238,241,11,234,142,135,217,210,154,29,132,1,110,252,
    159,25,243,233,99,100,86,173,120,175,175,67,23,55,3,120,
    16,83,3,157,124,239,83,243,35,106,110,195,120,21,181,26,
    174,189,71,66,144,193,11,152,31,139,130,19,208,43,39,237,
    18,207,228,114,10,249,247,117,82,136,190,80,74,19,73,129,
    70,202,9,186,107,160,182,72,117,174,81,50,196,73,110,167,
    152,88,54,196,155,220,78,51,113,198,16,103,185,157,99,226,
    188,33,46,112,187,200,196,37,67,92,230,118,133,137,171,134,
    184,198,237,58,19,55,204,229,216,59,76,124,23,26,183,232,
    198,136,40,21,74,120,19,255,107,194,227,116,48,38,174,167,
    68,224,254,95,243,156,115,111,76,181,115,248,84,240,125,57,
    78,12,171,94,214,57,238,72,152,99,213,176,222,124,13,244,
    131,171,67,196,109,198,210,83,82,187,125,109,108,12,195,153,
    85,139,230,101,206,55,218,103,39,209,7,153,5,206,120,31,
    59,88,24,58,3,49,22,196,30,110,58,241,156,116,194,70,
    114,45,125,84,58,7,127,46,179,21,221,2,132,242,197,171,
    165,210,246,210,71,35,146,206,235,245,100,232,159,31,123,248,
    205,120,88,143,51,57,221,65,152,61,37,158,113,22,240,123,
    57,41,144,254,67,230,96,20,228,179,52,48,62,120,224,64,
    9,13,18,170,239,193,112,65,115,8,7,186,132,101,213,203,
    249,89,230,217,143,175,17,5,190,76,148,27,68,174,215,195,
    221,107,224,211,49,253,141,230,225,94,88,77,3,223,200,14,
    211,213,253,215,230,21,170,32,100,49,222,112,42,73,50,119,
    73,18,122,165,238,93,131,35,251,38,238,247,20,95,247,177,
    32,111,48,141,132,160,221,198,40,57,59,10,124,31,167,94,
    212,241,226,64,13,120,233,215,154,64,139,242,21,121,74,80,
    31,93,99,118,18,245,227,166,116,15,250,137,113,255,235,207,
    162,133,41,41,143,80,175,101,182,225,25,241,31,174,109,237,
    11,211,140,181,71,201,234,199,215,224,132,167,235,118,91,198,
    188,242,235,140,167,37,249,122,91,63,115,226,225,178,227,203,
    142,84,242,170,108,170,40,104,211,235,61,2,106,28,13,92,
    87,223,197,224,115,199,117,199,105,19,250,41,174,77,183,33,
    252,155,5,109,66,11,184,13,93,28,249,47,230,138,130,207,
    9,23,126,59,211,26,208,37,132,190,127,24,36,14,23,252,
    233,44,73,49,96,205,110,156,235,26,221,184,109,123,93,125,
    25,207,215,200,14,167,189,247,77,158,227,42,164,175,172,248,
    214,71,223,209,97,13,227,67,12,159,89,156,187,68,167,27,
    16,25,246,71,212,51,1,249,148,226,113,249,242,128,93,19,
    60,107,151,223,61,213,206,254,58,242,37,239,194,47,218,238,
    115,47,145,155,81,216,10,218,91,161,138,7,156,16,245,152,
    122,208,213,191,118,240,207,6,126,236,161,253,73,106,116,104,
    224,117,130,111,229,213,183,4,23,152,243,209,64,125,118,213,
    172,11,238,100,196,197,178,29,36,104,134,11,39,137,11,11,
    164,101,159,156,127,173,52,52,204,121,140,208,171,239,13,244,
    141,237,35,54,57,221,45,211,175,29,197,233,162,40,88,244,
    139,155,45,74,162,44,114,98,170,92,180,139,133,98,222,70,
    132,19,101,94,148,236,98,105,74,12,255,175,34,210,75,214,
    234,108,81,252,23,79,74,185,182,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPIOIntAssignment(
    "m5/internal/param_X86IntelMPIOIntAssignment.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_X86IntelMPIOIntAssignment.py",
    "m5.internal.param_X86IntelMPIOIntAssignment",
    data_m5_internal_param_X86IntelMPIOIntAssignment,
    2393,
    8155);

} // anonymous namespace
