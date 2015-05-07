#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86SMBiosSMBiosTable[] = {
    120,156,205,89,255,111,219,198,21,127,71,82,180,37,91,177,
    252,37,118,236,102,141,134,34,152,90,52,81,215,181,77,183,
    5,65,211,44,29,82,116,118,74,101,115,170,117,227,104,242,
    100,81,150,72,129,60,39,85,97,255,50,7,219,126,24,176,
    63,98,216,15,251,63,250,127,109,239,189,227,209,114,18,103,
    41,86,64,150,196,195,241,120,124,247,190,124,222,151,59,133,
    80,124,42,120,125,210,4,200,123,2,32,194,159,128,33,192,
    72,64,87,128,144,2,162,85,56,168,64,246,1,68,21,120,
    6,208,181,64,90,112,130,29,27,126,111,65,178,200,239,184,
    48,180,121,68,192,164,6,210,129,110,5,118,147,101,112,164,
    11,7,53,200,254,4,66,136,68,192,227,104,14,162,121,120,
    134,212,177,83,101,130,243,16,213,184,83,133,104,129,59,53,
    152,52,64,46,64,23,137,207,65,183,142,164,222,65,82,151,
    152,212,119,68,42,194,39,107,16,213,105,58,242,242,21,205,
    116,104,38,175,113,137,169,44,25,206,26,208,109,152,254,50,
    116,151,77,127,5,186,43,166,191,10,221,85,211,95,131,46,
    210,94,2,185,2,131,203,128,106,137,26,229,58,235,32,109,
    24,108,64,119,3,36,254,214,225,4,181,20,45,243,220,43,
    60,119,165,156,187,201,115,183,160,187,5,18,127,155,122,174,
    11,157,214,101,212,121,252,31,252,180,80,231,160,22,177,121,
    34,179,60,78,19,63,78,122,105,108,209,115,151,26,178,80,
    72,205,92,97,170,123,100,170,127,3,219,41,178,10,83,29,
    3,18,22,196,255,208,130,99,238,28,91,48,105,193,145,128,
    129,3,145,13,71,184,76,133,24,216,23,112,98,193,215,54,
    77,56,198,214,65,229,190,9,142,210,118,26,176,114,53,165,
    57,56,174,192,81,5,58,143,143,44,26,56,168,66,246,47,
    248,246,42,19,157,103,162,22,28,97,235,192,137,3,199,46,
    236,226,36,28,26,84,73,124,241,248,8,37,197,145,78,203,
    65,110,183,167,196,37,81,162,56,75,130,145,84,111,96,223,
    31,7,89,48,242,31,127,252,81,231,55,159,198,105,174,219,
    71,193,222,80,182,106,230,133,52,191,57,14,84,223,99,10,
    54,169,102,52,86,76,57,77,164,90,192,78,47,78,34,127,
    148,70,135,67,169,230,137,172,223,139,135,210,247,249,225,131,
    209,56,205,212,253,44,75,51,143,180,203,131,195,52,40,223,
    32,221,134,195,52,151,45,90,141,151,241,136,188,162,217,189,
    49,83,36,6,152,107,122,57,146,121,152,197,99,133,70,211,
    20,105,54,81,107,145,185,184,201,51,108,218,135,57,154,118,
    28,132,178,29,181,163,94,47,206,251,50,107,223,191,119,255,
    214,135,183,218,159,61,216,190,251,133,255,208,219,249,252,254,
    189,71,197,224,13,20,36,24,182,247,14,227,97,212,70,165,
    180,199,19,213,79,147,246,232,195,118,156,40,153,209,195,243,
    53,118,19,103,175,208,218,79,227,125,63,102,169,253,190,28,
    142,101,70,76,231,91,196,151,104,136,69,225,10,91,180,68,
    29,123,21,188,108,113,213,90,16,219,49,201,29,146,46,8,
    125,182,193,219,63,129,45,139,192,56,176,32,187,74,104,26,
    224,79,144,249,17,83,29,122,102,241,179,47,73,97,122,116,
    96,19,70,244,224,17,35,16,161,136,51,111,19,40,18,96,
    24,85,96,224,130,134,23,162,82,227,45,155,80,139,211,137,
    140,133,196,29,200,255,113,150,66,210,0,52,8,122,60,14,
    173,227,82,127,102,196,118,90,196,248,54,195,69,245,227,60,
    125,154,176,81,168,207,62,214,65,157,60,156,236,236,13,100,
    168,242,107,56,240,85,122,216,12,131,36,73,85,51,136,162,
    102,160,84,22,239,29,42,153,55,85,218,188,158,183,170,132,
    130,101,131,184,146,222,100,108,16,70,104,64,132,233,155,40,
    14,21,222,172,242,13,235,63,151,10,209,210,79,163,28,199,
    137,196,190,84,30,49,169,46,97,115,215,44,199,176,108,185,
    6,68,185,28,246,84,141,241,24,228,185,207,203,209,56,67,
    143,222,126,18,12,15,165,162,249,185,10,20,174,74,93,189,
    208,236,193,119,133,196,55,210,147,70,253,36,77,162,9,50,
    31,135,111,17,95,87,24,130,139,64,32,188,140,0,156,195,
    214,133,58,2,178,97,133,36,167,83,192,143,161,183,78,90,
    1,134,131,40,2,14,194,240,4,195,82,203,226,184,194,2,
    179,187,54,169,71,47,123,132,114,143,66,139,119,149,154,31,
    25,157,204,84,49,245,231,21,243,30,49,99,177,54,66,187,
    144,187,116,185,237,51,46,183,121,234,114,24,91,59,228,58,
    22,57,216,169,235,216,164,153,236,78,225,39,228,148,8,21,
    124,60,229,29,172,47,175,65,122,112,13,176,61,66,235,52,
    100,247,167,32,235,145,169,24,175,222,230,121,186,189,118,193,
    116,187,175,117,251,51,98,102,177,64,90,157,17,86,19,33,
    193,196,42,52,205,90,254,21,118,38,27,164,229,105,253,110,
    96,10,221,77,234,156,11,57,159,114,85,161,3,144,86,187,
    238,56,132,201,158,13,235,69,142,203,41,94,140,179,244,155,
    73,51,237,53,21,24,30,110,95,207,111,94,207,127,137,17,
    165,121,135,99,148,142,41,58,106,100,114,156,97,116,168,242,
    141,246,120,159,189,223,47,82,19,218,129,234,5,54,31,107,
    159,3,92,174,50,138,107,179,87,125,173,84,61,73,242,115,
    226,164,198,122,183,97,3,175,154,96,118,253,148,163,46,151,
    50,252,20,175,79,201,2,164,4,9,84,108,122,29,45,12,
    203,73,18,123,63,57,131,173,89,74,233,189,67,252,26,127,
    117,161,68,18,93,54,201,65,46,244,87,224,10,80,192,95,
    128,80,131,224,40,156,142,221,155,46,50,254,42,77,255,35,
    112,64,123,73,70,181,180,243,90,69,200,67,223,206,111,241,
    84,157,96,63,135,191,77,69,195,19,27,4,37,67,187,168,
    241,166,147,161,83,186,59,195,237,181,18,158,115,54,46,144,
    229,250,65,78,211,116,4,176,203,8,112,26,88,203,138,12,
    195,218,76,145,56,175,121,240,137,221,95,159,226,144,50,205,
    27,98,213,154,66,215,187,212,220,40,129,37,204,216,172,56,
    191,246,124,106,152,202,153,190,14,199,159,17,123,14,11,180,
    228,42,242,12,36,246,160,115,215,191,183,243,197,206,118,199,
    215,20,207,222,49,253,210,229,42,198,229,222,47,93,78,114,
    250,120,198,155,9,106,45,130,209,137,37,112,39,135,197,21,
    109,162,28,144,21,232,186,228,156,92,33,139,194,119,133,137,
    160,20,121,207,228,38,214,230,182,214,115,137,36,13,18,106,
    190,153,185,47,51,78,110,15,131,209,94,20,220,249,29,241,
    65,204,132,198,155,45,35,89,99,90,50,242,68,113,158,112,
    124,251,158,145,240,201,204,37,244,126,138,203,150,146,177,111,
    70,105,200,33,234,81,95,54,71,114,180,135,28,245,227,113,
    179,55,12,246,217,166,118,33,249,142,145,92,49,40,158,175,
    30,114,138,131,219,105,51,76,19,76,64,135,161,74,179,102,
    36,145,95,25,53,111,52,57,123,53,227,188,25,236,225,211,
    32,84,218,179,206,70,14,46,101,131,108,63,231,170,245,224,
    41,117,103,174,177,34,23,199,73,140,21,252,174,209,156,222,
    10,150,169,136,139,118,237,166,152,228,113,71,165,38,58,188,
    126,68,205,219,212,92,135,11,147,177,218,184,236,111,105,125,
    82,179,139,17,176,42,212,150,14,27,47,204,127,72,148,242,
    23,35,197,223,95,39,82,232,211,158,34,94,184,52,83,206,
    209,1,1,181,85,202,95,221,154,25,92,224,118,145,7,235,
    102,240,18,183,75,60,216,48,167,76,203,60,184,194,167,50,
    46,143,172,81,12,154,251,127,99,16,187,233,236,141,67,14,
    250,135,31,52,244,120,239,95,60,193,60,174,194,95,21,118,
    196,180,212,117,29,118,6,194,236,96,166,69,230,35,150,31,
    191,18,191,126,152,201,64,73,109,231,173,139,160,14,14,113,
    154,43,191,180,182,145,185,220,234,221,42,229,62,225,186,113,
    178,54,181,211,96,227,139,93,44,242,112,55,114,196,170,241,
    45,189,33,57,5,186,83,106,232,77,108,18,249,244,165,12,
    105,45,233,189,7,49,22,140,199,50,137,78,247,21,252,100,
    230,58,227,104,74,161,200,148,111,184,137,88,195,235,69,183,
    39,169,167,148,192,102,175,148,142,126,33,0,192,254,208,55,
    166,231,115,223,211,124,226,145,225,117,6,41,147,135,247,139,
    210,148,239,190,26,236,163,96,144,102,190,57,54,198,109,239,
    247,123,1,11,77,222,53,159,25,253,159,36,226,228,123,174,
    121,230,133,114,205,233,81,245,246,171,73,232,58,227,48,147,
    57,47,248,250,179,105,53,130,208,233,16,67,139,131,72,36,
    135,18,125,242,124,66,138,204,82,28,137,68,18,73,164,19,
    220,150,243,78,22,239,135,190,127,65,178,252,199,184,236,215,
    180,62,157,249,82,150,119,49,207,95,230,111,213,169,10,46,
    187,158,251,59,65,51,77,39,56,122,215,54,201,61,14,214,
    75,37,242,248,172,219,84,56,28,157,232,116,98,59,24,233,
    147,74,62,104,243,72,141,222,91,6,188,28,80,244,30,159,
    247,202,250,60,3,35,17,215,132,92,2,122,55,105,252,218,
    139,246,235,24,3,33,36,168,162,228,32,246,82,177,203,153,
    106,169,156,210,137,71,250,68,151,143,70,163,44,64,205,209,
    226,104,138,56,24,198,223,74,190,43,103,113,93,164,62,128,
    215,222,63,49,6,50,185,31,231,104,16,94,183,164,85,4,
    84,178,129,217,145,157,139,203,41,34,23,3,58,122,27,164,
    143,152,238,176,194,62,193,134,14,101,171,75,85,225,90,244,
    159,128,45,106,162,46,28,177,88,175,218,85,183,90,177,17,
    94,52,178,42,106,118,181,182,40,204,119,19,161,86,179,54,
    235,85,241,95,150,246,132,116,
};

EmbeddedPython embedded_m5_internal_param_X86SMBiosSMBiosTable(
    "m5/internal/param_X86SMBiosSMBiosTable.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_X86SMBiosSMBiosTable.py",
    "m5.internal.param_X86SMBiosSMBiosTable",
    data_m5_internal_param_X86SMBiosSMBiosTable,
    2216,
    7255);

} // anonymous namespace
