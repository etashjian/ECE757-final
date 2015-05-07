#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPAddrSpaceMapping[] = {
    120,156,205,89,109,115,219,198,17,222,3,64,202,164,68,139,
    122,183,28,55,70,39,245,132,77,99,51,73,155,56,77,61,
    158,184,170,210,113,38,145,92,208,173,28,54,45,10,1,71,
    18,20,8,112,128,147,109,102,164,47,149,167,237,183,254,134,
    78,39,31,250,63,250,191,218,221,61,0,162,148,216,150,167,
    157,49,37,242,230,112,184,219,219,151,103,95,238,232,67,254,
    87,193,239,167,54,64,214,19,0,1,126,4,68,0,35,1,
    93,1,66,10,8,86,224,160,2,233,207,32,168,192,51,128,
    174,1,210,128,19,236,152,240,123,3,226,5,94,83,133,200,
    228,17,1,147,58,72,11,186,21,216,139,151,192,146,85,56,
    168,67,250,39,16,66,196,2,30,5,115,16,92,130,103,72,
    29,59,53,38,120,9,130,58,119,106,16,204,115,167,14,147,
    38,200,121,232,34,241,57,232,54,144,212,59,72,234,50,147,
    250,55,145,10,240,205,42,4,13,154,142,188,124,69,51,45,
    154,201,123,92,102,42,139,5,103,77,232,54,139,254,18,116,
    151,138,254,50,116,151,139,254,10,116,87,138,254,42,116,145,
    246,34,200,37,24,174,1,170,37,104,150,251,172,131,52,97,
    184,1,221,13,144,248,89,135,19,212,82,176,196,115,175,240,
    220,229,114,238,38,207,189,10,221,171,32,241,179,169,231,86,
    161,211,90,67,157,135,255,193,191,22,234,28,212,2,54,143,
    101,154,133,73,236,134,113,47,9,13,122,95,165,134,44,228,
    83,51,151,155,106,139,76,245,47,96,59,5,70,110,170,99,
    64,194,130,248,143,12,56,230,206,177,1,147,22,28,9,24,
    90,16,152,112,132,219,84,136,129,190,128,19,3,190,54,105,
    194,49,182,22,42,247,77,176,148,182,211,144,149,171,41,205,
    193,113,5,142,42,208,121,116,100,208,192,65,13,210,111,225,
    155,107,76,244,18,19,53,224,8,91,11,78,44,56,174,194,
    30,78,194,161,97,141,196,23,143,142,80,82,28,233,180,44,
    228,118,103,74,92,18,37,8,211,216,27,73,245,67,236,187,
    99,47,245,70,238,163,143,63,186,31,43,25,125,249,224,94,
    16,164,157,177,231,203,47,189,241,56,140,251,173,122,177,44,
    201,110,141,61,53,112,152,142,73,10,26,141,21,211,79,98,
    169,230,177,211,11,227,192,29,37,193,97,36,213,37,34,238,
    246,194,72,186,46,191,188,63,26,39,169,218,78,211,36,117,
    72,199,60,24,37,94,185,130,52,236,71,73,38,91,180,27,
    111,227,16,121,69,179,123,99,166,72,12,48,239,180,56,144,
    153,159,134,99,133,166,211,20,105,54,81,107,145,209,184,201,
    158,98,211,62,204,208,192,36,83,59,104,7,189,94,152,13,
    100,218,222,222,218,190,253,225,237,246,103,247,119,238,125,225,
    62,112,118,63,223,222,122,152,15,222,68,65,188,168,189,127,
    24,70,65,27,85,211,30,79,212,32,137,219,163,15,219,33,
    106,41,165,151,47,211,219,45,92,179,76,28,60,9,251,110,
    200,178,187,3,25,141,101,74,172,103,87,137,59,209,20,11,
    162,42,76,209,18,13,236,85,240,107,138,107,198,188,216,9,
    73,122,159,52,66,72,52,11,236,253,19,216,202,8,146,3,
    3,210,107,132,172,33,126,4,65,1,241,213,161,119,6,191,
    251,13,169,77,143,14,77,194,139,30,60,98,52,34,44,113,
    230,29,2,72,12,12,169,10,12,171,160,161,134,8,213,216,
    75,39,212,226,116,34,99,32,113,11,178,191,159,165,16,55,
    1,205,130,222,143,67,235,184,213,159,25,189,157,22,49,190,
    195,160,81,131,48,75,158,196,108,26,234,179,191,117,80,39,
    15,38,187,251,67,233,171,236,58,14,124,149,28,218,190,23,
    199,137,178,189,32,176,61,165,210,112,255,80,201,204,86,137,
    125,35,107,213,8,11,75,5,238,74,122,147,113,129,51,194,
    4,226,76,63,4,161,175,240,97,133,31,88,255,153,84,136,
    153,65,18,100,56,78,36,250,82,57,196,164,186,140,205,189,
    98,59,6,103,171,90,64,41,147,81,79,213,25,149,94,150,
    185,188,29,141,51,0,105,245,99,47,58,148,138,230,103,202,
    83,184,43,117,245,70,179,2,193,43,164,132,66,7,164,87,
    55,78,226,96,130,34,132,254,91,196,221,21,6,226,2,16,
    20,215,16,134,115,216,86,161,129,176,108,26,62,73,107,229,
    32,100,0,174,147,110,128,65,33,242,16,132,96,60,193,64,
    213,50,56,210,176,216,236,186,54,245,104,177,67,88,119,222,
    160,230,26,53,63,40,52,51,3,234,105,156,87,207,123,196,
    146,193,58,241,205,92,250,210,253,118,206,184,223,230,169,251,
    97,204,237,144,27,25,228,108,167,110,100,146,126,210,187,185,
    207,144,131,34,108,240,245,148,167,176,214,156,38,105,163,90,
    128,220,33,228,78,195,183,63,5,95,135,12,198,216,117,54,
    159,167,225,235,51,169,225,190,214,240,79,137,165,133,28,117,
    13,70,91,93,248,4,25,35,215,55,235,250,87,216,153,108,
    144,174,167,181,188,129,9,118,47,110,112,166,228,108,203,53,
    135,14,73,90,249,186,99,17,62,123,38,172,231,25,48,163,
    8,50,78,147,167,19,59,233,217,10,10,30,238,220,200,110,
    221,200,126,129,49,198,190,203,81,75,71,25,29,71,82,57,
    78,49,94,212,248,65,199,0,151,227,129,155,167,44,180,6,
    85,19,108,68,182,1,135,188,76,165,20,233,102,197,0,245,
    210,0,36,207,207,137,159,58,107,223,132,13,252,214,5,51,
    237,38,28,141,185,220,225,183,248,253,37,217,129,84,33,129,
    10,82,167,163,69,98,105,73,110,231,237,51,56,123,253,178,
    58,239,16,215,133,7,87,161,68,21,125,77,146,134,156,234,
    175,192,181,162,128,191,0,33,8,129,146,187,33,59,60,125,
    9,8,43,52,253,143,192,129,238,123,242,173,161,221,217,200,
    67,33,122,123,118,155,167,234,244,251,57,252,109,42,74,158,
    152,32,40,85,154,121,53,56,157,42,173,50,0,48,244,46,
    148,14,173,179,145,130,236,55,240,50,154,166,99,130,89,198,
    132,211,128,91,86,109,24,232,94,191,165,216,195,144,19,151,
    152,254,245,41,38,41,15,189,33,86,140,41,164,189,75,205,
    205,18,100,162,24,123,189,252,95,63,159,56,166,242,170,171,
    131,245,103,196,164,197,98,45,86,21,73,64,36,59,247,220,
    173,221,47,118,119,58,110,78,189,120,60,191,75,233,138,149,
    194,21,63,40,93,81,114,138,121,198,7,17,106,13,2,214,
    137,33,240,20,136,197,24,29,192,44,144,21,232,86,201,105,
    185,174,22,185,79,139,34,190,82,92,62,147,191,88,179,59,
    90,231,37,182,52,108,168,121,58,35,62,206,200,185,19,121,
    163,253,192,187,251,59,226,134,88,242,11,47,55,10,249,154,
    211,242,145,135,138,231,137,200,143,239,21,114,62,158,17,57,
    157,247,113,243,82,62,246,220,32,241,57,128,61,28,72,123,
    36,71,251,200,215,32,28,219,189,200,235,179,125,205,92,254,
    221,66,126,197,0,57,95,109,100,20,37,119,18,219,79,98,
    76,85,135,190,74,82,59,144,200,181,12,236,155,54,231,57,
    59,204,108,111,31,223,122,190,210,30,119,54,174,112,25,236,
    165,253,140,43,222,131,39,212,157,17,189,229,185,59,140,67,
    60,3,236,21,250,211,71,202,50,105,113,217,175,221,23,139,
    2,60,147,169,137,14,193,31,81,243,99,106,110,192,140,229,
    182,54,110,254,91,226,130,84,94,197,40,89,19,202,206,131,
    202,247,175,122,64,84,179,239,198,145,127,92,36,142,232,123,
    164,60,154,84,105,166,156,163,171,7,106,107,148,239,186,245,
    98,112,158,219,5,30,108,20,131,151,185,93,228,193,102,49,
    184,196,237,50,15,174,20,151,90,171,60,184,6,221,117,186,
    1,162,145,13,10,91,115,255,107,216,98,159,158,21,235,145,
    55,255,225,255,26,173,156,15,102,85,60,135,75,252,23,69,
    42,49,45,123,67,71,170,161,40,14,73,211,130,243,189,206,
    219,23,128,185,235,167,210,83,82,91,254,234,236,168,134,35,
    164,230,205,45,237,95,200,95,158,44,111,151,58,56,225,162,
    116,178,58,117,164,97,56,136,61,172,32,241,216,115,196,106,
    114,13,125,242,57,117,0,171,212,214,143,176,137,229,147,23,
    176,165,53,166,143,58,196,30,142,202,56,56,61,198,240,155,
    25,209,31,135,228,0,78,43,68,60,179,172,226,247,187,161,
    193,210,19,11,133,48,16,42,101,48,152,33,72,176,183,132,
    5,24,90,124,160,47,83,147,67,80,208,201,168,204,67,206,
    39,165,113,223,189,136,43,224,161,33,149,120,90,197,19,247,
    171,45,192,90,150,79,19,249,179,122,255,85,22,211,253,24,
    111,249,234,171,104,223,133,211,125,245,85,219,79,46,66,102,
    255,48,115,195,128,183,125,149,249,180,33,33,95,63,94,108,
    105,36,227,190,26,92,124,171,124,126,177,149,126,100,56,115,
    64,11,100,36,49,38,188,140,140,34,40,228,247,64,129,196,
    146,44,153,184,174,62,178,227,115,228,186,51,85,164,124,140,
    155,127,77,92,172,130,46,82,170,88,166,172,229,255,53,171,
    38,184,134,60,247,27,139,102,158,174,175,244,1,117,146,57,
    156,70,22,75,212,243,213,127,81,168,113,172,164,75,153,29,
    111,164,175,108,249,174,209,161,159,51,156,183,10,199,97,157,
    235,75,13,190,22,208,215,56,24,23,185,192,229,122,214,185,
    69,227,20,24,100,124,120,94,50,132,225,67,66,225,155,180,
    245,57,201,183,159,170,173,36,238,133,253,237,88,165,19,181,
    88,78,233,132,35,125,171,205,215,195,65,234,161,242,104,95,
    180,70,232,69,225,55,167,160,126,238,49,240,44,109,174,250,
    212,39,47,91,116,222,20,12,151,84,246,195,12,109,199,34,
    60,143,249,60,21,144,221,202,35,234,11,81,61,77,121,150,
    160,167,207,133,250,94,238,46,235,252,83,108,232,86,187,182,
    88,19,85,131,126,90,49,69,93,52,132,37,22,26,53,179,
    86,173,85,76,132,39,141,172,136,186,89,171,47,136,226,127,
    19,129,90,55,54,47,215,196,127,1,242,139,1,126,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPAddrSpaceMapping(
    "m5/internal/param_X86IntelMPAddrSpaceMapping.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_X86IntelMPAddrSpaceMapping.py",
    "m5.internal.param_X86IntelMPAddrSpaceMapping",
    data_m5_internal_param_X86IntelMPAddrSpaceMapping,
    2270,
    7594);

} // anonymous namespace