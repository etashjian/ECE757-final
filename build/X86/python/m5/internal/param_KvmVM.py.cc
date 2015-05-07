#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_KvmVM[] = {
    120,156,205,88,91,115,219,198,21,62,11,144,148,72,137,214,
    253,102,203,17,58,25,79,217,76,108,166,105,19,167,173,199,
    83,215,113,50,78,35,217,5,51,181,131,36,69,33,96,41,
    130,2,1,14,0,73,97,70,122,169,60,109,223,250,35,58,
    125,232,75,127,69,255,87,115,206,89,44,72,42,113,146,153,
    118,204,74,196,206,98,119,113,246,92,190,115,217,245,161,248,
    171,226,243,107,11,32,251,151,0,8,240,39,32,2,24,8,
    112,4,8,41,32,88,131,227,42,164,63,135,160,10,47,0,
    28,3,164,1,151,216,49,225,51,3,226,69,254,166,6,145,
    201,35,2,70,13,144,21,112,170,240,44,94,129,138,172,193,
    113,3,210,63,130,16,34,22,240,60,152,131,96,30,94,32,
    117,236,212,153,224,60,4,13,238,212,33,88,224,78,3,70,
    203,32,23,192,65,226,115,224,52,145,212,27,72,234,26,147,
    250,55,145,10,112,102,29,130,38,45,71,94,62,165,149,21,
    90,201,123,92,99,42,75,154,179,101,112,150,117,127,5,156,
    21,221,95,5,103,85,247,215,192,89,211,253,117,112,214,117,
    127,3,156,13,221,223,4,103,83,247,183,192,217,210,253,109,
    112,182,117,127,7,156,29,221,191,14,206,117,8,150,64,110,
    67,255,6,116,81,149,203,37,191,187,32,77,232,223,4,231,
    38,72,252,237,194,37,106,59,88,225,181,175,241,218,213,114,
    237,30,175,181,192,177,64,226,111,79,173,173,65,167,181,129,
    182,11,255,131,127,45,180,29,228,139,216,156,202,52,11,147,
    216,13,227,110,18,26,52,95,163,134,44,237,83,51,87,152,
    252,33,153,252,159,192,246,14,140,194,228,23,128,132,5,241,
    31,25,112,193,157,11,3,70,45,56,23,208,175,64,96,194,
    57,110,83,37,6,142,4,92,26,240,185,73,11,46,176,173,
    160,145,94,131,74,174,236,221,103,35,41,74,115,112,81,133,
    243,42,116,158,159,27,52,112,92,135,244,31,240,213,46,19,
    157,103,162,6,156,99,91,129,203,10,92,212,224,25,46,194,
    161,126,157,196,23,207,207,81,82,28,233,180,42,200,237,193,
    132,184,36,74,16,166,177,55,144,44,186,59,244,82,111,224,
    254,246,116,240,251,253,86,67,175,72,178,59,67,47,239,217,
    252,137,73,186,24,12,115,38,149,196,50,95,192,78,55,140,
    3,119,144,4,39,145,204,231,137,142,219,13,35,233,186,60,
    249,120,48,76,210,252,81,154,38,169,77,234,228,193,40,241,
    202,47,72,153,126,148,100,178,69,187,241,54,54,145,207,105,
    117,119,200,20,137,1,102,147,62,14,100,230,167,225,48,71,
    43,41,138,180,154,168,181,200,62,220,100,100,170,246,73,134,
    182,28,122,190,108,7,237,160,219,13,179,158,76,219,143,30,
    62,186,251,206,221,246,7,143,15,30,124,236,62,181,159,124,
    244,232,225,39,197,224,109,20,196,139,218,135,39,97,20,180,
    159,191,247,110,123,56,202,123,73,220,30,188,211,14,227,92,
    166,52,57,161,162,59,56,189,74,155,157,133,71,110,200,98,
    186,61,25,13,101,74,92,102,215,137,17,177,44,22,69,77,
    152,162,37,154,216,171,226,99,138,93,99,65,28,132,36,168,
    79,194,19,190,76,141,168,191,3,219,14,77,127,108,64,186,
    75,120,233,227,79,144,129,17,53,29,154,51,120,238,119,164,
    33,53,218,55,9,5,106,240,156,49,134,96,195,149,247,200,
    236,49,48,80,170,208,175,129,2,16,226,78,33,42,29,81,
    139,203,137,140,129,196,43,144,253,109,154,66,188,12,104,1,
    140,13,56,180,137,91,253,137,49,217,105,17,227,7,140,143,
    188,23,102,201,89,204,86,160,62,67,169,131,58,121,58,122,
    114,216,151,126,158,237,225,192,167,201,137,229,123,113,156,228,
    150,23,4,150,151,231,105,120,120,146,203,204,202,19,235,86,
    214,170,147,217,87,52,196,74,122,163,161,134,20,153,31,33,
    165,94,130,208,207,241,101,141,95,88,255,153,204,17,30,189,
    36,200,112,156,72,28,201,220,38,38,243,107,216,60,208,219,
    49,14,91,53,141,154,76,70,221,188,193,0,244,178,204,229,
    237,104,156,177,70,95,159,122,209,137,204,105,125,150,123,57,
    238,74,93,181,209,12,208,182,77,242,106,113,73,133,110,156,
    196,193,8,185,13,253,215,137,145,109,198,220,34,16,234,54,
    16,113,115,216,214,160,137,8,92,54,124,18,172,82,224,141,
    177,182,73,106,0,182,191,40,98,8,226,238,18,35,77,203,
    224,80,193,18,178,67,90,212,163,143,109,130,181,125,131,154,
    93,106,110,106,37,188,90,77,52,175,106,226,45,218,221,96,
    241,125,179,16,180,116,170,131,41,167,218,25,59,21,198,199,
    14,57,135,65,46,52,118,14,147,84,145,222,47,60,129,220,
    14,193,128,211,19,248,103,5,217,203,36,120,77,67,215,38,
    60,78,130,242,104,2,148,54,217,134,17,105,239,188,76,153,
    123,179,86,230,145,82,230,207,104,247,197,2,75,77,198,80,
    67,248,4,4,163,80,45,171,245,125,236,140,182,72,173,147,
    10,221,194,188,247,44,110,114,2,227,36,200,37,133,138,41,
    74,207,170,83,33,212,117,77,216,44,18,83,70,33,96,152,
    38,95,142,172,164,107,229,160,121,184,119,43,187,115,43,251,
    21,6,9,235,62,135,29,21,38,84,32,72,229,48,69,135,
    175,243,139,114,98,151,29,218,45,210,11,42,158,146,60,219,
    139,213,205,49,43,203,83,10,85,51,208,117,163,212,53,177,
    254,11,218,186,193,138,54,97,11,159,134,96,254,220,132,35,
    39,23,28,60,139,207,111,72,229,36,181,4,42,45,237,142,
    226,158,5,35,17,237,31,79,161,231,149,138,101,191,65,12,
    106,23,172,65,137,21,122,76,98,156,188,226,47,192,133,153,
    128,63,3,225,2,205,95,248,17,123,44,61,100,222,53,90,
    254,7,224,160,244,45,105,208,80,254,104,20,97,11,221,53,
    187,203,75,85,86,252,8,254,58,17,209,46,77,16,148,193,
    204,162,244,154,204,96,149,210,131,25,80,63,40,75,85,166,
    93,157,76,213,243,50,90,166,156,218,44,157,122,28,28,203,
    186,9,35,213,171,197,218,188,218,212,37,254,62,28,35,141,
    210,195,13,177,102,76,224,231,77,106,110,151,208,17,122,236,
    149,177,186,119,53,158,79,100,54,87,197,208,15,136,159,10,
    75,176,84,227,228,204,95,151,62,82,213,62,242,118,233,35,
    146,35,250,11,174,209,169,53,8,6,151,134,192,131,22,86,
    52,116,198,169,128,172,130,83,35,111,226,58,84,20,206,38,
    116,140,163,216,56,149,46,88,57,7,74,109,37,18,148,145,
    169,249,114,6,49,133,236,124,47,242,6,135,129,119,255,115,
    218,152,118,247,181,251,25,90,148,229,73,81,200,117,196,203,
    164,225,215,183,180,72,167,51,136,39,63,197,125,74,81,216,
    123,130,196,231,32,242,73,79,90,3,57,56,68,22,122,225,
    208,234,70,222,17,91,205,44,68,125,162,69,205,217,236,87,
    83,118,70,145,234,32,177,252,36,198,36,112,226,231,73,106,
    5,18,25,148,129,117,219,226,12,98,133,153,229,29,226,172,
    231,231,202,21,166,125,155,43,68,47,61,202,184,24,60,62,
    163,238,140,172,238,226,49,53,196,74,248,11,173,42,117,134,
    42,211,1,23,191,202,175,48,179,226,201,36,31,169,136,247,
    46,53,63,161,230,22,204,46,107,180,113,159,207,104,67,82,
    100,13,131,82,93,240,9,143,23,60,165,181,217,55,221,251,
    236,135,184,183,186,65,41,156,188,70,43,229,28,29,150,169,
    173,83,210,112,26,122,112,129,219,69,30,108,234,75,154,107,
    60,184,196,23,31,53,30,89,161,24,49,247,223,198,8,246,
    170,25,249,147,255,63,13,13,246,219,255,7,146,216,92,169,
    126,87,88,16,147,98,54,85,88,232,11,93,214,79,202,200,
    87,9,171,211,232,115,253,84,122,185,84,166,187,62,19,129,
    57,200,40,54,100,105,64,45,85,121,194,185,91,74,118,201,
    181,213,104,125,162,222,102,123,138,103,88,8,97,77,126,206,
    194,187,134,42,203,199,96,173,148,58,88,194,38,150,103,238,
    132,30,84,201,77,156,120,195,161,140,131,113,57,205,51,51,
    128,1,5,176,30,140,107,26,172,157,215,241,249,166,115,146,
    92,19,98,178,37,171,165,59,206,198,166,12,226,129,182,102,
    139,64,55,142,217,54,217,82,69,233,50,64,219,191,44,173,
    115,243,42,66,19,47,146,153,47,131,253,253,199,79,232,0,
    247,61,43,176,190,226,3,223,212,104,190,121,229,155,108,148,
    229,114,192,228,94,50,69,116,248,94,132,95,217,30,236,61,
    129,140,100,46,39,193,147,147,44,197,137,56,144,152,87,147,
    17,30,210,248,152,131,239,145,235,206,42,253,188,135,251,28,
    66,17,254,40,253,212,48,1,109,224,127,189,82,23,156,239,
    175,92,0,43,30,127,4,186,160,31,101,54,71,161,165,210,
    58,124,89,169,51,45,59,37,29,77,15,188,129,186,121,226,
    123,20,155,8,216,175,107,3,179,22,213,121,143,143,81,234,
    48,139,14,200,197,8,215,30,246,29,26,39,46,31,4,65,
    106,123,241,145,116,79,37,213,46,124,217,166,196,234,176,33,
    216,123,101,124,50,112,247,229,32,73,71,251,73,32,115,194,
    214,131,162,162,81,195,250,243,245,242,243,233,121,38,163,38,
    112,64,221,227,241,205,134,26,123,24,37,254,177,12,138,241,
    149,233,241,247,147,129,135,42,31,83,232,132,154,2,57,94,
    144,210,44,9,137,22,14,189,40,252,74,242,91,185,138,203,
    130,113,36,102,224,164,242,40,68,241,82,166,90,174,44,130,
    19,217,145,239,198,166,96,58,241,213,140,0,166,10,115,117,
    15,113,159,5,254,24,27,186,155,171,47,213,69,205,160,187,
    96,83,52,68,83,84,196,98,179,110,214,107,245,170,137,32,
    164,145,53,209,48,235,141,69,241,109,255,59,8,207,134,177,
    179,88,23,95,3,133,46,206,181,
};

EmbeddedPython embedded_m5_internal_param_KvmVM(
    "m5/internal/param_KvmVM.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_KvmVM.py",
    "m5.internal.param_KvmVM",
    data_m5_internal_param_KvmVM,
    2233,
    6789);

} // anonymous namespace
