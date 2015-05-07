#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasePrefetcher[] = {
    120,156,205,89,109,111,220,198,17,158,37,239,78,186,147,206,
    122,127,181,28,177,8,140,94,131,218,151,166,77,156,162,134,
    81,199,113,138,4,137,236,82,1,236,48,105,89,138,220,147,
    120,186,35,15,228,202,202,5,210,151,202,104,251,173,63,162,
    232,135,126,233,143,40,250,191,154,153,89,46,117,103,235,37,
    64,139,158,173,227,98,57,220,157,157,151,103,102,103,215,33,
    20,255,170,248,252,218,1,200,255,41,0,34,252,9,232,1,
    244,5,120,2,132,20,16,45,193,97,21,178,95,64,84,133,
    151,0,158,5,210,130,51,236,216,240,181,5,201,44,207,169,
    65,207,102,138,128,97,3,100,5,188,42,60,75,22,160,34,
    107,112,216,128,236,15,32,132,72,4,60,143,166,32,154,134,
    151,200,29,59,117,102,56,13,81,131,59,117,136,102,184,211,
    128,225,60,200,25,240,144,249,20,120,77,100,245,14,178,186,
    193,172,254,77,172,34,252,178,12,81,147,134,163,44,95,209,
    200,10,141,228,53,110,48,151,57,35,217,60,120,243,166,191,
    0,222,130,233,47,130,183,104,250,75,224,45,153,254,50,120,
    203,166,191,2,222,138,233,175,130,183,106,250,107,224,173,153,
    254,58,120,235,166,191,1,222,134,233,111,130,183,9,209,28,
    200,85,232,222,132,14,154,114,190,148,119,11,164,13,221,91,
    224,221,2,137,191,45,56,67,107,71,11,60,246,45,30,187,
    88,142,221,230,177,14,120,14,72,252,109,235,177,53,216,109,
    173,160,239,226,255,224,191,22,250,14,212,44,54,47,100,150,
    199,105,226,199,73,39,141,45,250,94,163,134,60,29,82,51,
    85,184,252,17,185,252,31,192,254,142,172,194,229,167,128,140,
    5,201,223,179,224,148,59,167,22,12,91,112,34,160,91,129,
    200,134,19,92,166,74,2,236,11,56,179,224,27,155,6,156,
    98,91,65,39,189,5,21,165,253,221,101,39,105,78,83,112,
    90,133,147,42,236,62,63,177,136,112,88,135,236,239,240,221,
    22,51,157,102,166,22,156,96,91,129,179,10,156,214,224,25,
    14,66,82,183,78,234,139,231,39,168,41,82,118,91,21,148,
    118,103,68,93,82,37,138,179,36,232,75,69,150,240,7,65,
    22,244,253,143,130,92,62,205,100,71,170,240,64,102,173,134,
    25,154,230,119,7,129,58,112,121,174,77,70,233,15,20,243,
    76,19,169,102,176,211,137,147,200,239,167,209,81,79,170,105,
    98,232,119,226,158,244,125,254,248,105,127,144,102,234,113,150,
    165,153,75,118,101,98,47,13,202,25,100,213,176,151,230,178,
    69,171,241,50,46,177,87,52,186,51,96,142,36,0,203,75,
    147,35,153,135,89,60,80,232,46,205,145,70,19,183,22,57,
    138,155,28,253,2,237,163,28,157,58,8,66,217,142,218,81,
    167,19,231,168,87,251,241,163,199,247,222,191,215,254,228,211,
    157,135,159,251,79,221,39,159,61,126,244,101,65,188,131,138,
    4,189,246,222,81,220,139,218,207,63,252,160,61,24,170,131,
    52,105,247,223,111,199,137,146,25,125,188,200,86,119,113,220,
    34,173,122,28,239,251,49,235,235,31,200,222,64,102,36,110,
    190,73,18,137,121,49,43,106,194,22,45,209,196,94,21,31,
    91,108,89,51,98,39,38,141,67,178,2,33,206,54,24,251,
    27,176,55,17,12,135,22,100,91,132,160,46,254,4,185,28,
    113,180,75,223,44,254,246,91,50,149,166,118,109,194,133,38,
    158,48,234,16,126,56,242,62,1,33,1,134,78,21,186,53,
    208,144,66,36,106,140,101,67,106,113,56,177,177,144,121,5,
    242,191,142,115,72,230,1,93,129,217,2,73,171,184,212,31,
    25,165,187,45,18,124,135,129,162,14,226,60,61,78,216,29,
    212,231,184,218,69,155,60,29,62,217,235,202,80,229,219,72,
    248,42,61,114,194,32,73,82,229,4,81,228,4,74,101,241,
    222,145,146,185,163,82,231,118,222,170,147,255,23,12,214,74,
    126,195,129,193,22,225,0,177,165,95,162,56,84,248,178,196,
    47,108,255,92,42,196,201,65,26,229,72,39,22,251,82,185,
    36,164,186,129,205,67,179,28,3,178,85,51,240,201,101,175,
    163,26,140,196,32,207,125,94,142,232,12,58,154,253,34,232,
    29,73,69,227,115,21,40,92,149,186,122,161,73,194,110,157,
    20,55,122,147,45,253,36,77,162,33,138,29,135,111,147,68,
    235,12,190,89,32,248,173,32,244,166,176,173,65,19,161,56,
    111,133,164,97,165,0,30,131,110,149,236,1,12,4,81,164,
    23,4,224,25,38,161,150,197,89,132,85,229,16,117,168,71,
    147,93,194,183,123,147,154,45,106,110,25,107,76,200,36,205,
    87,77,242,46,137,97,177,29,66,187,208,184,12,179,157,177,
    48,219,56,15,51,204,161,187,20,46,22,5,213,121,184,216,
    100,147,236,65,17,27,20,136,8,15,252,60,18,17,108,41,
    119,158,44,80,51,96,118,9,161,163,48,221,31,129,169,75,
    78,98,140,186,27,151,89,117,251,141,177,234,190,182,234,207,
    73,140,217,2,93,77,70,85,67,132,4,13,171,176,49,219,
    247,99,236,12,215,200,190,163,150,93,195,77,242,89,210,228,
    221,142,119,76,174,63,116,186,209,6,215,157,10,225,176,99,
    195,106,177,139,229,148,29,6,89,250,237,208,73,59,142,2,
    35,195,253,219,249,221,219,249,175,48,127,56,15,56,35,233,
    12,162,115,68,38,7,25,230,130,58,191,232,248,246,57,214,
    253,98,11,66,15,208,62,200,142,99,187,115,58,203,85,70,
    89,108,146,70,111,148,70,39,29,126,73,50,52,216,226,54,
    172,225,211,16,44,168,159,114,118,229,50,133,191,226,243,17,
    217,158,212,151,64,5,169,187,171,213,96,13,73,87,247,199,
    99,120,154,140,126,238,59,36,169,137,206,26,148,232,161,199,
    38,13,40,96,254,12,92,215,9,248,19,16,82,16,16,69,
    136,113,48,211,67,14,95,162,225,191,7,78,92,23,236,153,
    150,14,85,171,72,109,24,201,249,61,30,170,183,208,207,224,
    47,35,89,239,204,6,65,219,157,93,84,110,163,219,93,165,
    12,110,134,216,15,218,210,42,227,89,128,124,118,16,228,52,
    76,199,187,93,198,251,121,2,45,171,45,76,98,19,66,223,
    180,94,221,39,65,127,115,142,61,218,75,110,138,37,107,4,
    81,63,165,230,78,9,38,97,104,255,127,153,183,95,77,254,
    35,251,161,175,19,238,39,36,88,133,85,153,171,113,81,48,
    206,166,140,163,170,137,163,247,202,56,146,188,15,188,228,234,
    159,90,139,16,114,102,9,60,194,97,101,68,167,167,10,200,
    42,120,53,138,56,46,108,69,17,144,194,36,68,74,164,99,
    155,12,155,107,71,27,178,4,137,246,63,53,223,78,50,1,
    17,4,238,247,130,254,94,20,60,248,134,36,32,49,66,19,
    162,150,209,105,126,84,39,10,47,113,153,90,252,250,174,209,
    237,197,36,147,207,207,112,193,82,39,14,181,40,13,57,227,
    124,121,32,157,190,236,239,161,44,7,241,192,233,244,130,125,
    246,163,93,232,252,196,232,172,24,8,175,110,253,57,165,181,
    157,212,9,211,4,247,144,163,80,165,153,19,73,148,84,70,
    206,29,135,55,32,39,206,157,96,15,191,6,161,210,225,50,
    158,8,184,246,12,178,253,156,203,204,195,99,234,78,26,7,
    62,158,141,99,44,182,127,103,108,166,207,107,229,110,194,161,
    164,99,15,119,104,60,252,168,161,206,147,31,80,243,19,106,
    110,195,27,176,233,180,113,193,175,105,101,50,109,13,83,89,
    93,168,229,215,178,192,83,154,157,191,158,11,254,245,67,114,
    129,190,200,193,1,178,6,221,41,110,167,105,207,241,234,134,
    216,224,118,134,137,179,134,216,228,246,6,19,231,12,113,158,
    219,5,38,46,26,226,18,183,203,76,92,49,196,85,110,215,
    152,184,110,242,209,6,19,55,193,187,105,46,162,182,40,55,
    213,254,219,220,196,65,60,233,240,13,255,167,41,201,125,239,
    77,82,201,229,2,251,170,116,100,193,200,57,230,158,78,71,
    218,111,88,38,13,151,71,138,105,86,95,60,195,154,6,11,
    238,19,46,197,125,75,215,220,231,78,230,42,133,239,83,232,
    56,146,200,99,255,162,136,208,133,53,193,39,24,12,100,18,
    157,23,205,252,101,146,230,163,60,115,8,231,117,10,86,200,
    203,248,188,14,115,210,116,68,113,134,115,181,4,246,230,27,
    128,130,65,153,99,111,141,229,88,151,220,172,179,106,153,80,
    181,207,156,75,50,152,159,38,126,20,168,128,142,109,215,15,
    194,162,73,223,249,233,247,43,39,196,184,187,93,203,149,7,
    141,112,165,247,43,39,244,99,60,158,93,199,149,7,141,112,
    165,247,43,39,100,50,136,174,229,202,131,70,184,210,187,250,
    209,21,19,142,179,88,73,102,123,253,40,226,59,173,249,50,
    65,109,93,54,37,31,106,3,92,57,128,216,241,233,96,152,
    51,238,21,221,20,68,178,39,113,169,139,38,41,194,76,113,
    245,16,73,44,60,210,33,30,130,249,244,136,239,61,223,159,
    248,182,252,33,46,184,7,197,29,20,109,203,53,177,50,242,
    87,175,212,5,215,71,175,92,206,107,145,201,254,238,231,212,
    112,234,156,43,195,130,47,143,77,53,194,57,146,174,1,118,
    130,190,190,0,228,91,44,151,103,191,109,130,138,147,155,62,
    82,243,1,85,95,28,96,62,228,202,141,11,53,247,46,20,
    255,109,160,181,217,29,230,74,246,21,45,43,147,163,190,255,
    133,236,167,217,240,139,52,146,108,247,135,81,148,185,65,178,
    47,253,23,146,170,65,190,117,127,88,148,127,122,172,249,178,
    92,242,28,255,206,188,245,7,36,232,235,84,190,78,210,180,
    71,189,52,60,148,81,65,95,24,167,127,156,246,3,52,255,
    57,135,221,216,112,160,172,23,101,244,149,148,68,111,199,65,
    47,254,78,242,109,207,24,79,174,154,24,100,227,158,99,68,
    101,114,63,70,3,100,44,208,216,180,98,207,32,223,94,30,
    35,163,44,38,13,67,125,226,209,215,66,15,216,38,132,42,
    186,60,173,207,213,69,205,162,91,123,91,52,68,83,84,196,
    108,179,110,215,107,245,170,141,80,37,202,146,104,216,245,198,
    172,184,232,111,3,225,219,176,54,144,199,247,105,157,134,10,
};

EmbeddedPython embedded_m5_internal_param_BasePrefetcher(
    "m5/internal/param_BasePrefetcher.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_BasePrefetcher.py",
    "m5.internal.param_BasePrefetcher",
    data_m5_internal_param_BasePrefetcher,
    2288,
    7233);

} // anonymous namespace