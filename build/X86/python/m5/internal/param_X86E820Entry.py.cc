#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86E820Entry[] = {
    120,156,205,88,255,111,219,198,21,127,71,82,180,37,91,177,
    252,45,142,155,108,225,208,5,211,138,37,74,211,181,201,218,
    32,88,150,186,67,138,66,206,168,12,73,213,109,28,77,158,
    36,202,18,41,144,231,164,42,236,95,230,96,237,15,3,246,
    71,12,251,97,255,199,254,175,246,189,119,36,37,39,78,86,
    96,195,84,219,60,31,239,142,239,222,151,207,251,114,23,64,
    254,83,193,231,215,14,64,214,22,0,33,254,9,24,1,140,
    5,116,5,8,41,32,220,132,195,10,164,191,132,176,2,47,
    0,186,6,72,3,78,177,99,194,23,6,196,171,252,141,13,
    35,147,71,4,76,107,32,45,232,86,224,73,188,14,150,180,
    225,176,6,233,159,65,8,17,11,120,26,46,65,184,12,47,
    144,58,118,170,76,112,25,194,26,119,170,16,174,112,167,6,
    211,6,200,21,232,34,241,37,232,214,145,212,59,72,234,2,
    147,250,55,145,10,113,102,11,194,58,45,71,94,62,167,149,
    22,173,228,61,46,48,149,181,130,179,6,116,27,69,127,29,
    186,235,69,127,3,186,27,16,174,129,108,192,112,19,122,40,
    106,163,164,183,5,210,132,225,54,116,183,65,226,223,22,156,
    162,54,194,117,94,123,145,215,110,148,107,119,120,237,37,232,
    94,2,137,127,59,122,173,13,157,230,54,234,54,250,22,127,
    154,168,91,80,171,216,60,147,105,22,37,177,23,197,189,36,
    50,104,222,166,134,44,17,80,179,148,155,228,1,153,228,95,
    192,246,8,141,220,36,39,128,132,5,241,63,50,224,132,59,
    39,6,76,155,112,44,96,104,65,104,194,49,110,83,33,6,
    250,2,78,13,248,131,73,11,78,176,181,80,137,63,6,75,
    105,123,12,89,137,154,210,18,156,84,224,184,2,157,167,199,
    6,13,28,86,33,253,39,124,117,133,137,46,51,81,3,142,
    177,181,224,212,130,19,27,158,224,34,28,26,86,73,124,241,
    244,24,37,197,145,78,211,66,110,219,115,226,146,40,97,148,
    198,254,88,170,77,236,123,19,63,245,199,222,211,59,31,236,
    221,185,117,115,47,86,233,180,89,43,22,38,217,141,137,175,
    6,46,127,105,146,74,198,19,197,20,147,88,170,21,236,244,
    162,56,244,198,73,120,52,146,106,153,200,121,189,104,36,61,
    143,39,31,142,39,73,170,246,210,52,73,93,210,42,15,142,
    18,191,252,130,116,26,140,146,76,54,105,55,222,198,37,242,
    138,86,247,38,76,145,24,96,110,233,227,80,102,65,26,77,
    20,26,75,83,164,213,68,173,73,102,226,38,27,98,211,58,
    202,208,164,19,63,144,173,176,21,246,122,81,54,144,105,107,
    239,193,222,237,247,111,183,62,121,216,190,255,153,247,200,221,
    255,116,239,193,227,124,240,58,10,226,143,90,7,71,209,40,
    108,161,50,90,147,169,26,36,113,107,252,126,43,138,149,76,
    105,242,85,77,221,192,85,27,180,231,243,168,239,69,44,173,
    55,144,163,137,76,137,217,236,45,226,71,52,196,170,176,133,
    41,154,162,142,189,10,62,166,184,98,172,136,118,68,242,6,
    164,3,66,155,89,224,235,31,192,150,68,32,28,26,144,94,
    33,244,160,72,67,65,230,70,12,117,104,206,224,185,223,145,
    162,244,232,208,36,76,232,193,99,70,28,66,15,87,222,37,
    16,196,192,176,169,192,208,6,13,39,68,161,198,87,58,165,
    22,151,19,25,3,137,91,144,253,253,44,133,184,1,104,8,
    244,100,28,186,136,91,253,133,17,218,105,18,227,109,134,137,
    26,68,89,242,60,102,99,80,159,125,170,131,58,121,52,221,
    63,24,202,64,101,87,113,224,243,228,200,9,252,56,78,148,
    227,135,161,227,43,149,70,7,71,74,102,142,74,156,107,89,
    179,74,214,95,47,144,86,210,155,78,10,100,17,10,16,89,
    250,37,140,2,133,47,12,97,143,245,159,73,133,40,25,36,
    97,134,227,68,162,47,149,75,76,170,11,216,220,47,182,99,
    56,54,237,2,60,153,28,245,84,141,113,232,103,153,199,219,
    209,56,67,142,190,126,230,143,142,164,162,245,153,242,21,238,
    74,93,189,209,226,64,119,137,196,46,164,38,77,122,113,18,
    135,83,100,58,10,222,38,126,46,49,244,86,129,192,183,141,
    192,91,194,214,134,58,2,177,97,4,36,159,149,195,142,33,
    119,145,180,1,12,3,145,7,22,132,223,41,134,159,166,193,
    241,131,5,101,247,116,168,71,31,187,132,110,247,50,53,87,
    168,249,81,161,139,133,40,164,254,178,66,110,18,19,6,107,
    33,48,115,121,75,23,107,159,113,177,221,153,139,97,236,236,
    144,171,24,228,80,51,87,49,73,35,233,189,220,47,200,9,
    17,26,56,61,231,13,172,39,183,65,242,219,5,144,93,66,
    231,60,68,251,115,16,117,201,68,140,79,119,247,117,58,189,
    250,3,209,105,95,235,244,61,98,98,53,71,86,157,17,85,
    19,1,193,194,200,53,204,218,253,24,59,211,29,210,238,188,
    94,119,48,53,62,137,235,156,227,56,79,114,85,160,3,141,
    86,183,238,88,132,193,158,9,23,243,220,149,81,92,152,164,
    201,151,83,39,233,57,10,10,30,238,94,203,110,92,203,62,
    194,200,225,220,227,88,164,99,135,142,14,169,156,164,24,5,
    170,252,162,61,219,99,47,247,242,212,131,250,167,58,128,205,
    198,90,231,64,150,169,148,226,215,226,84,94,43,85,78,18,
    252,138,56,168,177,190,77,216,193,167,38,152,77,47,225,168,
    202,165,9,207,226,243,27,210,60,9,47,129,138,68,183,163,
    133,96,249,72,82,247,103,103,176,180,8,233,220,119,136,207,
    194,47,109,40,145,67,143,73,252,147,171,124,13,92,201,9,
    248,43,16,74,16,12,185,115,177,27,211,67,198,222,164,229,
    127,2,14,88,231,100,74,67,59,169,145,135,52,244,225,236,
    54,47,213,137,243,83,248,102,46,218,157,154,32,40,201,153,
    121,173,54,159,228,172,210,173,25,94,223,43,145,89,103,253,
    159,44,54,240,51,90,166,61,221,44,61,125,22,56,203,10,
    11,195,215,66,144,183,172,247,246,136,205,223,206,112,71,25,
    228,178,216,52,230,208,244,11,106,174,151,64,18,197,216,255,
    155,227,171,47,135,252,185,28,232,233,48,251,9,177,101,177,
    32,107,182,218,193,255,72,228,97,231,190,247,96,255,179,253,
    118,199,43,233,149,174,84,41,92,233,86,233,74,146,211,192,
    11,46,250,169,53,8,38,167,134,192,147,21,22,69,116,168,
    177,64,86,160,107,147,211,113,69,43,114,159,20,69,68,164,
    72,122,38,199,176,214,218,90,159,37,82,52,8,168,249,114,
    113,17,136,112,112,119,228,143,15,66,255,222,99,218,159,152,
    8,10,47,53,10,137,26,243,18,145,135,137,215,9,197,175,
    55,11,201,158,45,46,250,188,139,219,149,18,177,175,133,73,
    192,33,231,241,64,58,99,57,62,64,78,6,209,196,233,141,
    252,62,219,208,204,37,222,47,36,86,12,130,151,179,126,70,
    113,173,157,56,65,18,99,2,57,10,84,146,58,161,68,62,
    101,232,92,119,56,251,56,81,230,248,7,56,235,7,74,123,
    204,217,72,192,37,167,159,246,51,174,46,15,159,83,119,177,
    24,240,240,48,28,97,133,253,251,66,99,250,136,86,166,18,
    46,170,181,251,97,114,198,19,143,154,234,48,249,1,53,63,
    167,230,26,44,60,227,180,112,187,14,237,75,106,181,49,146,
    85,5,31,216,230,215,61,162,47,179,87,35,192,223,190,79,
    4,208,183,42,121,28,176,105,165,92,162,3,58,181,85,202,
    59,221,90,49,184,194,237,42,15,214,139,193,11,220,174,241,
    96,163,184,205,89,231,193,13,232,110,210,149,8,141,108,81,
    108,89,250,111,99,11,187,225,98,29,240,139,255,105,72,113,
    111,253,112,4,114,185,58,126,83,56,17,243,210,214,117,56,
    25,138,226,68,49,47,42,95,109,236,158,139,83,47,72,165,
    175,164,182,231,91,139,20,159,67,149,230,230,143,165,85,11,
    25,203,163,214,237,82,206,83,174,231,166,91,115,21,63,27,
    89,60,193,226,11,79,5,199,172,10,207,208,7,131,25,144,
    173,82,35,116,76,141,229,115,239,85,173,232,218,159,24,242,
    39,19,25,135,179,186,158,103,22,7,17,138,134,62,204,202,
    41,44,226,183,240,121,213,141,73,202,57,161,217,188,149,210,
    113,23,106,104,198,121,175,48,49,223,159,206,242,128,75,6,
    214,145,191,12,250,238,135,165,201,46,159,15,98,172,155,83,
    58,85,190,113,30,203,58,157,23,241,69,253,228,252,133,169,
    31,247,37,223,218,48,185,255,188,138,136,146,45,102,67,175,
    227,33,139,190,146,111,226,145,231,11,30,233,133,141,205,110,
    27,202,145,84,242,28,156,42,82,84,126,25,16,74,172,7,
    146,41,30,76,249,76,135,239,35,207,91,112,190,188,131,219,
    117,105,95,74,146,148,47,109,204,152,219,252,91,181,170,130,
    11,150,151,46,200,53,179,36,181,62,191,76,51,151,195,225,
    90,137,1,190,197,45,106,4,142,7,116,46,111,251,99,125,
    23,199,87,74,46,89,206,125,187,128,17,187,178,62,229,242,
    169,81,159,228,209,247,185,154,226,226,201,189,65,227,180,139,
    22,165,19,141,245,101,35,223,218,133,169,143,162,210,87,168,
    187,200,31,161,121,248,173,92,197,165,129,250,41,188,246,72,
    192,70,74,101,63,202,80,99,188,79,249,109,30,115,72,89,
    124,10,57,15,28,115,31,47,214,166,186,162,215,183,30,247,
    88,33,119,177,161,123,193,234,90,85,216,6,93,71,155,162,
    38,234,194,18,171,245,170,89,181,171,21,19,237,78,35,155,
    162,102,86,107,171,130,126,119,209,254,53,99,183,94,21,223,
    1,97,103,220,143,
};

EmbeddedPython embedded_m5_internal_param_X86E820Entry(
    "m5/internal/param_X86E820Entry.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_X86E820Entry.py",
    "m5.internal.param_X86E820Entry",
    data_m5_internal_param_X86E820Entry,
    2165,
    6822);

} // anonymous namespace
