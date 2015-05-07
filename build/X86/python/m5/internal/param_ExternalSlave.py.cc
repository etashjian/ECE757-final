#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ExternalSlave[] = {
    120,156,205,88,109,115,219,198,17,222,3,64,72,164,68,137,
    122,183,100,181,102,199,227,9,155,169,205,196,105,226,180,245,
    120,234,58,74,39,153,86,118,192,204,72,102,59,69,33,224,
    40,129,2,1,14,112,178,205,140,212,15,149,167,237,183,254,
    134,78,167,31,250,63,250,191,154,221,61,0,34,109,201,241,
    36,157,50,18,113,115,88,220,237,237,203,179,123,123,231,67,
    254,87,193,231,151,77,128,236,79,2,32,192,159,128,8,96,
    32,160,43,64,72,1,193,10,28,87,32,253,41,4,21,120,
    9,208,53,64,26,112,142,29,19,126,103,64,60,207,115,108,
    136,76,166,8,24,213,64,90,208,173,192,94,188,4,150,180,
    225,184,6,233,31,65,8,17,11,216,15,102,32,152,133,151,
    200,29,59,85,102,56,11,65,141,59,85,8,230,184,83,131,
    81,3,228,28,116,145,249,12,116,235,200,234,93,100,181,192,
    172,254,67,172,2,252,178,10,65,157,134,163,44,79,105,164,
    69,35,121,141,5,230,178,88,72,214,128,110,163,232,47,65,
    119,169,232,47,67,119,185,232,175,64,119,165,232,175,66,119,
    181,232,175,65,119,173,232,175,67,119,29,130,69,144,75,208,
    223,128,30,154,166,81,174,127,13,164,9,253,77,232,110,130,
    196,223,53,56,71,235,5,75,60,118,139,199,46,151,99,175,
    243,216,109,232,110,131,196,223,117,61,214,134,78,107,13,125,
    17,254,23,255,90,232,11,80,243,216,60,147,105,22,38,177,
    27,198,189,36,52,232,187,77,13,121,206,167,102,38,119,225,
    35,114,225,191,129,253,23,24,185,11,207,0,25,11,146,63,
    50,224,140,59,103,6,140,90,112,42,160,111,65,96,194,41,
    46,83,33,1,14,5,156,27,240,123,147,6,156,97,107,161,
    209,127,8,150,210,254,235,179,209,53,167,25,56,171,192,105,
    5,58,251,167,6,17,142,171,144,254,11,190,218,102,166,179,
    204,212,128,83,108,45,56,183,224,204,134,61,28,132,164,126,
    149,212,23,251,167,168,41,82,58,45,11,165,221,29,83,151,
    84,9,194,52,246,6,82,173,98,223,29,122,169,55,112,119,
    94,40,137,196,168,19,121,207,100,171,86,140,76,178,59,67,
    79,29,57,60,213,36,155,12,134,138,89,38,177,84,115,216,
    233,133,113,224,14,146,224,36,146,106,150,248,185,189,48,146,
    174,203,31,63,27,12,147,84,237,164,105,146,58,100,86,38,
    70,137,87,206,32,163,250,81,146,201,22,173,198,203,56,196,
    94,209,232,222,144,57,146,0,44,46,77,14,100,230,167,225,
    80,161,183,52,71,26,77,220,90,228,39,110,178,99,108,218,
    39,25,250,116,232,249,178,29,180,131,94,47,204,142,100,218,
    222,121,180,115,239,195,123,237,79,63,219,125,248,27,247,137,
    243,248,243,157,71,95,230,196,219,168,136,23,181,15,78,194,
    40,104,239,127,252,81,123,56,82,71,73,220,30,124,216,14,
    99,109,155,246,37,166,186,131,195,150,105,209,231,225,161,27,
    178,186,238,145,140,134,50,37,105,179,45,18,72,52,196,188,
    176,133,41,90,162,142,189,10,62,166,216,54,230,196,110,72,
    10,251,100,4,194,155,89,32,236,159,192,190,68,40,28,27,
    144,110,19,126,250,248,19,228,112,68,81,135,190,25,252,237,
    11,178,148,166,246,77,66,133,38,158,50,230,16,124,56,242,
    62,193,32,6,6,78,5,250,54,104,64,33,14,53,194,210,
    17,181,56,156,216,24,200,220,130,236,239,147,28,226,6,160,
    39,48,246,145,180,142,75,253,153,49,218,105,145,224,187,140,
    19,117,20,102,201,243,152,189,65,125,142,170,14,218,228,201,
    232,241,65,95,250,42,187,129,132,167,201,73,211,247,226,56,
    81,77,47,8,154,158,82,105,120,112,162,100,214,84,73,243,
    86,214,170,146,251,151,10,168,149,252,70,195,2,90,4,3,
    132,150,126,9,66,95,225,203,10,191,176,253,51,169,16,38,
    71,73,144,33,157,88,28,74,229,144,144,106,1,155,135,197,
    114,140,199,150,93,160,39,147,81,79,213,24,136,94,150,185,
    188,28,209,25,115,52,251,153,23,157,72,69,227,51,229,41,
    92,149,186,122,161,41,162,238,26,233,93,168,77,166,116,227,
    36,14,70,40,117,232,223,36,129,174,49,246,230,129,208,183,
    134,200,155,193,214,134,58,34,177,97,248,164,160,149,227,142,
    49,183,78,230,0,198,129,200,115,11,226,239,28,51,80,203,
    224,20,194,154,114,128,54,169,71,147,29,130,183,115,157,154,
    109,106,126,80,24,99,58,22,169,191,106,145,247,72,10,131,
    205,224,155,185,194,101,144,237,78,4,217,230,69,144,97,254,
    236,80,176,24,20,82,23,193,98,146,73,210,7,121,100,80,
    24,34,56,240,243,88,60,176,161,156,6,25,192,46,160,236,
    16,62,199,65,122,56,6,82,135,124,196,8,117,54,175,50,
    234,141,239,139,81,15,181,81,63,32,41,230,115,108,213,25,
    83,53,225,19,48,140,220,196,108,222,79,176,51,218,32,243,
    142,27,118,3,247,199,189,184,206,27,29,111,150,92,74,232,
    92,163,237,173,59,22,161,176,103,194,122,190,129,101,148,26,
    134,105,242,98,212,76,122,77,5,133,12,247,111,101,119,110,
    101,191,192,228,209,124,192,233,72,167,15,157,32,82,57,76,
    49,17,84,249,69,7,183,203,129,238,230,219,15,58,128,138,
    1,246,27,155,157,115,89,166,82,74,97,83,180,121,173,180,
    57,169,240,51,18,161,198,6,55,97,3,159,154,96,57,221,
    132,51,43,23,40,252,21,159,95,145,233,73,123,9,84,90,
    58,29,173,5,43,72,170,58,239,76,160,105,42,234,57,239,
    146,160,69,104,218,80,98,135,30,147,20,160,104,249,43,112,
    65,39,224,47,64,56,65,56,228,241,197,145,76,15,185,123,
    133,134,255,1,56,105,93,178,93,26,58,78,141,60,173,97,
    24,103,247,120,168,222,61,63,135,191,141,101,188,115,19,4,
    237,116,102,94,178,141,239,116,86,25,217,12,176,183,218,205,
    172,201,20,64,46,59,242,50,26,166,131,221,44,131,253,34,
    121,150,117,22,102,176,233,96,111,86,47,238,146,156,191,190,
    64,30,109,35,215,197,138,49,134,167,159,80,115,187,132,146,
    40,104,255,119,145,111,188,154,247,199,118,66,87,231,218,79,
    73,46,139,53,89,180,57,167,77,112,41,99,168,82,196,208,
    221,50,134,36,239,0,47,185,230,167,214,32,120,156,27,2,
    15,98,88,17,209,25,200,2,89,129,174,77,209,198,245,172,
    200,131,81,20,185,144,214,155,216,94,216,88,187,218,140,37,
    66,180,243,169,121,49,197,220,67,254,191,31,121,131,131,192,
    123,176,79,2,144,20,126,17,158,70,161,82,99,92,37,10,
    45,113,149,86,252,250,94,161,218,179,41,230,157,247,113,189,
    82,37,142,178,32,241,57,217,124,121,36,155,3,57,56,64,
    81,142,194,97,179,23,121,135,236,69,51,87,249,113,161,178,
    98,24,188,186,229,103,148,209,118,147,166,159,196,184,121,156,
    248,42,73,155,129,68,65,101,208,188,221,228,157,167,25,102,
    77,239,0,191,122,190,210,161,50,153,3,184,226,244,210,195,
    140,139,203,227,231,212,157,50,10,92,60,14,135,88,97,63,
    45,76,166,207,104,229,54,194,69,181,142,59,220,153,241,196,
    163,70,58,67,126,68,205,143,169,185,5,211,223,109,218,184,
    222,30,45,76,134,181,49,137,85,5,151,99,19,3,159,208,
    220,236,245,52,240,143,183,73,3,250,38,38,79,6,54,141,
    148,51,116,72,167,182,74,155,78,183,86,16,231,184,157,103,
    98,189,32,46,112,187,200,196,70,65,92,226,118,153,137,43,
    197,181,208,42,19,215,248,138,196,102,202,6,101,157,153,239,
    154,117,56,62,167,28,153,238,255,52,217,56,119,191,71,26,
    57,92,51,191,41,209,136,113,117,235,58,209,244,69,113,208,
    24,215,149,47,61,182,46,199,175,235,167,210,83,82,187,116,
    107,170,6,224,52,166,197,241,74,199,22,90,150,103,176,123,
    165,166,231,92,229,141,86,199,78,2,236,103,177,135,37,25,
    158,22,78,217,24,174,161,15,12,23,96,182,74,155,108,96,
    19,203,231,238,37,118,209,135,2,146,200,27,14,101,28,92,
    20,252,252,101,138,48,161,84,217,131,139,42,11,171,251,85,
    124,94,15,102,210,115,76,109,246,112,165,12,223,233,250,154,
    193,126,92,120,185,197,103,218,114,151,112,200,199,122,95,40,
    183,4,231,231,165,215,110,94,129,100,172,168,83,55,245,226,
    67,153,209,193,243,173,198,97,245,199,119,132,99,52,245,163,
    43,230,241,69,93,224,41,143,185,127,243,40,226,205,103,208,
    130,242,230,57,116,137,244,205,156,121,212,4,103,190,124,186,
    251,166,57,220,96,161,17,227,209,143,174,172,253,228,36,86,
    188,212,183,152,70,107,111,21,107,95,58,132,17,202,99,2,
    25,73,37,47,11,47,69,222,205,111,55,2,180,121,154,140,
    240,160,205,71,84,124,143,92,119,218,37,192,199,184,30,29,
    18,51,186,240,166,18,192,198,34,96,45,255,175,90,85,193,
    117,216,43,23,255,90,94,58,149,233,3,217,40,115,56,151,
    47,150,216,229,203,233,162,242,225,84,70,126,220,245,6,250,
    134,145,239,201,28,2,128,115,179,128,63,39,33,125,110,231,
    99,176,190,156,192,180,197,69,34,215,132,206,29,162,147,73,
    31,34,142,29,130,177,139,39,20,172,41,21,45,173,85,252,
    173,28,232,123,85,46,101,52,237,81,148,248,199,50,200,233,
    75,147,244,79,146,129,135,102,186,224,208,9,11,14,148,70,
    130,148,190,146,48,232,149,208,139,194,175,36,191,149,235,112,
    25,245,250,190,195,78,79,229,97,152,33,145,185,151,51,242,
    212,75,182,87,205,43,160,57,62,123,202,32,209,7,31,125,
    47,244,128,13,65,55,88,116,119,90,93,172,10,219,160,59,
    123,83,212,68,93,88,98,190,94,53,171,118,181,98,34,144,
    136,178,34,106,102,181,54,47,198,255,55,17,86,53,99,115,
    161,42,190,6,102,182,115,231,
};

EmbeddedPython embedded_m5_internal_param_ExternalSlave(
    "m5/internal/param_ExternalSlave.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_ExternalSlave.py",
    "m5.internal.param_ExternalSlave",
    data_m5_internal_param_ExternalSlave,
    2248,
    7173);

} // anonymous namespace
