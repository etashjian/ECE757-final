#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseSimpleCPU[] = {
    120,156,205,88,255,115,211,200,21,127,43,217,78,108,18,146,
    144,64,8,4,16,112,57,124,220,17,95,175,61,184,78,25,
    166,33,112,29,110,184,144,202,180,128,218,169,170,72,235,88,
    142,44,185,146,2,231,155,228,151,134,105,251,91,255,136,206,
    253,208,255,163,255,87,251,222,91,173,108,115,208,161,211,78,
    125,137,181,243,180,251,180,251,190,124,222,219,183,235,67,241,
    87,197,231,231,22,64,246,107,3,32,192,159,128,8,160,47,
    192,17,32,164,128,96,25,14,170,144,254,4,130,42,188,6,
    112,12,144,6,156,32,97,194,111,12,136,231,248,155,26,68,
    38,247,8,24,54,64,86,192,169,194,179,120,9,42,178,6,
    7,13,72,127,15,66,136,88,192,243,96,6,130,89,120,141,
    179,35,81,231,9,103,33,104,48,81,135,224,20,19,13,24,
    46,130,60,5,14,78,62,3,206,60,78,117,19,167,58,205,
    83,253,131,166,10,112,100,5,130,121,98,71,89,94,16,103,
    133,56,121,141,211,60,203,130,150,108,17,156,69,77,47,129,
    179,164,233,51,224,156,209,244,50,56,203,154,94,1,103,69,
    211,103,193,57,171,233,115,224,156,211,244,42,56,171,154,62,
    15,206,121,77,175,129,179,166,233,11,224,92,208,244,69,112,
    46,106,122,29,156,117,77,95,2,231,146,166,47,131,115,89,
    211,87,192,185,162,105,11,28,75,211,87,193,185,170,233,107,
    224,92,211,244,117,112,174,107,250,3,112,62,208,244,6,56,
    27,154,254,16,156,15,53,125,3,156,27,154,110,130,211,132,
    96,1,228,10,244,62,130,14,186,124,177,180,235,77,144,38,
    244,62,6,231,99,144,248,187,9,39,136,138,96,137,121,63,
    97,222,51,37,239,45,230,221,4,103,19,36,254,110,41,222,
    26,180,155,103,17,99,225,63,241,175,41,144,202,231,176,121,
    41,211,44,76,98,55,140,59,73,104,208,120,141,26,66,164,
    79,205,76,1,205,109,130,230,223,129,113,25,24,5,52,143,
    1,39,22,36,127,100,192,49,19,199,6,12,155,112,36,160,
    87,129,192,132,35,92,166,74,2,236,11,56,49,224,183,38,
    49,28,99,91,65,48,93,134,74,174,112,217,99,48,169,153,
    102,224,184,10,71,85,104,63,63,50,168,227,160,14,233,119,
    240,237,58,79,58,203,147,26,112,132,109,5,78,42,112,92,
    131,103,200,132,93,189,58,169,47,158,31,161,166,216,211,110,
    86,80,218,157,49,117,73,149,32,76,99,175,47,243,21,164,
    221,129,151,122,125,247,190,151,201,118,216,31,68,114,123,247,
    87,205,134,230,76,178,205,129,151,119,109,254,212,36,155,244,
    7,57,79,153,196,50,63,133,68,39,140,3,183,159,4,135,
    145,204,103,105,62,183,19,70,210,117,121,240,81,127,144,164,
    249,195,52,77,82,155,204,202,157,81,226,149,95,144,81,253,
    40,201,100,147,86,227,101,108,154,62,39,238,206,128,103,36,
    1,88,92,250,56,144,153,159,134,131,28,189,165,102,36,110,
    154,173,73,126,226,38,59,192,166,117,152,161,79,7,158,47,
    91,65,43,232,116,194,172,43,211,214,195,237,135,119,62,191,
    211,250,242,209,206,214,99,119,215,126,242,213,195,237,167,69,
    231,45,84,196,139,90,123,135,97,20,180,158,127,113,187,53,
    24,230,221,36,110,245,63,111,133,113,46,83,26,124,139,169,
    54,145,237,12,45,250,42,220,119,67,86,215,237,202,104,32,
    83,146,54,187,64,2,137,69,49,39,106,194,20,77,49,143,
    84,21,31,83,172,27,167,196,78,72,10,251,100,4,194,155,
    169,17,246,55,96,95,34,20,14,12,72,215,9,63,61,252,
    9,114,56,162,168,77,99,6,143,253,146,44,165,122,123,38,
    161,66,117,30,49,230,16,124,200,121,151,96,16,3,3,167,
    10,189,26,40,64,33,14,21,194,210,33,181,200,78,211,24,
    56,121,5,178,191,78,206,16,47,2,122,2,115,26,118,157,
    195,165,254,200,24,109,55,73,240,29,198,73,222,13,179,228,
    85,204,222,32,154,163,170,141,54,217,29,62,217,235,73,63,
    207,174,96,199,139,228,208,242,189,56,78,114,203,11,2,203,
    203,243,52,220,59,204,101,102,229,137,181,145,53,235,228,254,
    37,13,181,114,190,225,64,67,139,96,128,208,82,47,65,232,
    231,248,178,204,47,108,255,76,230,8,147,110,18,100,216,79,
    83,236,203,220,38,33,243,211,216,108,233,229,24,143,205,154,
    70,79,38,163,78,222,96,32,122,89,230,242,114,212,207,152,
    163,175,95,122,209,161,204,137,63,203,189,28,87,37,82,45,
    52,69,212,157,39,189,181,218,100,74,55,78,226,96,136,82,
    135,254,117,18,232,60,99,111,14,8,125,103,17,121,51,216,
    214,96,30,145,184,104,248,164,96,165,192,29,99,238,28,153,
    3,24,7,162,200,45,136,191,19,204,64,77,131,83,8,107,
    202,1,106,17,69,31,219,4,111,251,34,53,235,212,92,210,
    198,152,142,69,230,223,180,200,167,36,133,193,102,240,205,66,
    225,50,200,118,38,130,108,109,20,100,152,63,219,20,44,6,
    133,212,40,88,76,50,73,122,175,136,12,10,67,4,7,14,
    143,197,3,27,202,94,36,3,212,52,148,109,194,231,56,72,
    247,199,64,106,147,143,24,161,246,218,187,140,122,229,135,98,
    212,125,101,212,31,147,20,115,5,182,230,25,83,13,225,19,
    48,140,194,196,108,222,7,72,12,87,201,188,227,134,93,197,
    253,241,89,60,207,27,29,111,150,92,34,169,92,163,236,173,
    136,10,161,176,99,194,185,98,3,203,40,53,12,210,228,155,
    161,149,116,172,28,180,12,119,55,178,205,141,236,103,152,60,
    172,123,156,142,84,250,80,9,34,149,131,20,19,65,157,95,
    84,112,187,28,232,110,177,253,160,3,168,24,96,191,177,217,
    57,151,101,121,74,41,108,138,54,111,148,54,39,21,126,74,
    34,52,216,224,38,172,226,211,16,44,167,155,112,102,229,2,
    133,71,241,185,79,166,39,237,37,80,201,108,183,149,22,172,
    32,169,106,223,152,64,211,84,212,179,111,146,160,58,52,107,
    80,98,135,30,147,20,160,104,249,51,112,65,39,224,79,64,
    56,65,56,20,241,197,145,76,15,185,123,153,216,127,7,156,
    180,222,178,93,26,42,78,141,34,173,97,24,103,119,152,85,
    237,158,95,193,95,198,50,222,137,9,130,118,58,179,40,217,
    198,119,186,74,25,217,12,176,247,218,205,42,147,41,128,92,
    214,245,50,98,83,193,110,150,193,62,74,158,101,157,133,25,
    108,58,216,155,85,139,187,36,231,47,70,200,163,109,228,162,
    88,54,198,240,244,9,53,183,74,40,9,221,247,127,23,249,
    202,155,121,127,108,39,116,85,174,253,146,228,170,176,38,11,
    53,206,105,19,179,148,49,84,213,49,244,89,25,67,146,119,
    128,215,92,243,83,107,16,60,78,12,129,7,76,172,136,232,
    108,87,1,89,5,167,70,209,198,245,172,40,130,81,232,92,
    72,235,77,108,47,108,172,29,101,198,18,33,202,249,212,124,
    51,197,220,67,254,191,27,121,253,189,192,187,215,35,1,72,
    10,95,135,167,161,85,90,28,87,137,66,75,188,75,43,126,
    253,84,171,246,114,138,121,231,71,192,2,43,149,56,202,130,
    196,231,100,243,180,43,173,190,236,239,161,40,221,112,96,117,
    34,111,159,189,104,22,42,63,209,42,231,12,131,55,183,252,
    140,50,218,78,98,249,73,140,155,199,161,159,39,169,21,72,
    20,84,6,214,45,139,119,30,43,204,44,111,15,71,61,63,
    87,161,50,153,3,184,226,244,210,253,140,139,203,131,87,68,
    78,25,5,46,30,135,67,172,176,15,180,201,212,25,173,220,
    70,184,168,86,113,135,59,51,158,120,242,161,202,144,183,169,
    249,136,154,13,152,254,110,211,2,117,146,207,200,176,53,76,
    98,117,193,229,216,4,227,46,125,155,125,63,13,188,120,159,
    52,160,110,152,144,65,214,160,55,195,237,44,237,53,116,135,
    84,41,238,144,168,83,221,33,169,139,171,121,202,22,181,255,
    54,91,112,92,77,57,162,254,240,63,77,18,246,103,63,32,
    141,108,174,117,255,93,130,48,96,236,68,113,71,37,8,229,
    53,172,89,134,43,99,117,45,107,47,158,97,129,129,181,239,
    17,87,197,174,161,202,223,145,139,185,100,224,107,141,85,108,
    98,249,202,125,11,74,85,137,75,216,241,6,3,25,7,163,
    242,149,71,166,104,188,219,202,0,101,205,128,181,234,10,62,
    223,135,56,233,57,166,54,67,185,90,130,250,194,244,33,48,
    44,115,222,233,137,156,103,147,143,85,150,43,19,156,114,216,
    181,183,167,20,119,47,245,98,191,187,155,202,128,14,80,239,
    195,134,69,12,159,0,70,93,202,176,100,150,64,70,50,151,
    111,67,69,78,66,21,71,204,64,226,70,147,12,241,180,195,
    231,4,124,143,92,119,218,121,248,11,92,111,0,197,185,141,
    242,112,13,207,142,245,74,93,240,38,248,198,173,171,146,147,
    82,183,170,134,135,153,205,1,185,80,218,155,111,6,245,182,
    195,145,71,231,188,29,175,175,174,119,248,146,194,190,74,205,
    117,237,45,142,25,117,104,226,51,136,58,25,98,148,241,14,
    205,27,178,189,73,253,228,238,66,139,210,7,33,237,234,249,
    66,57,130,186,169,155,45,190,34,10,82,15,245,167,249,208,
    160,161,23,133,223,74,174,50,71,182,64,43,240,165,152,234,
    65,211,61,125,124,159,239,112,202,142,93,143,78,216,123,145,
    124,230,69,7,168,214,136,187,61,204,114,217,231,197,101,124,
    216,119,191,150,253,36,29,126,157,4,146,189,190,21,4,169,
    237,197,251,210,125,41,89,74,146,127,171,40,54,20,175,30,
    89,41,231,156,28,31,83,12,59,10,197,150,203,190,237,40,
    241,15,100,80,244,47,77,246,63,72,250,164,252,164,186,164,
    221,153,113,237,30,39,190,23,109,13,208,140,43,227,140,161,
    191,27,38,15,228,203,208,151,99,50,140,250,104,86,252,250,
    81,123,75,171,48,97,68,236,231,50,100,59,57,36,248,105,
    158,197,146,231,17,86,100,79,81,79,180,39,241,237,166,137,
    47,179,76,243,141,100,46,6,56,96,10,119,113,229,192,81,
    55,129,101,14,177,84,238,135,232,147,180,60,74,140,178,51,
    225,60,183,222,17,230,227,223,78,57,32,85,165,175,46,66,
    238,49,114,187,216,208,101,97,125,161,46,106,6,93,82,155,
    162,33,230,69,69,204,205,215,205,122,173,94,53,49,104,169,
    103,89,52,204,122,99,78,252,167,255,107,24,238,13,99,173,
    81,23,255,2,173,231,67,86,
};

EmbeddedPython embedded_m5_internal_param_BaseSimpleCPU(
    "m5/internal/param_BaseSimpleCPU.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_BaseSimpleCPU.py",
    "m5.internal.param_BaseSimpleCPU",
    data_m5_internal_param_BaseSimpleCPU,
    2360,
    7154);

} // anonymous namespace