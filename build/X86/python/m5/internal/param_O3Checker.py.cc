#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_O3Checker[] = {
    120,156,205,88,109,115,219,198,17,222,3,72,74,164,37,139,
    122,177,108,217,178,69,199,81,204,56,177,152,38,141,157,182,
    30,79,101,217,233,56,99,203,42,232,214,14,218,41,10,1,
    71,17,20,8,176,0,36,135,25,233,75,229,105,251,173,63,
    34,211,15,253,31,253,95,237,238,30,14,164,228,36,147,78,
    59,102,36,242,102,121,119,216,219,151,103,95,14,30,228,127,
    101,252,254,178,1,144,254,214,0,240,241,35,32,4,232,11,
    176,5,8,41,192,95,132,253,50,36,63,5,191,12,175,1,
    108,3,164,1,39,72,152,240,59,3,162,25,126,166,2,161,
    201,51,2,134,53,144,37,176,203,240,34,154,135,146,172,192,
    126,13,146,63,130,16,34,18,240,210,159,2,127,26,94,35,
    119,36,170,204,112,26,252,26,19,85,240,207,49,81,131,97,
    29,228,57,176,145,249,20,216,179,200,234,22,178,58,207,172,
    254,69,172,124,92,89,2,127,150,182,163,44,95,210,206,18,
    237,228,51,206,51,151,57,45,89,29,236,186,166,231,193,158,
    215,244,2,216,11,154,94,4,123,81,211,75,96,47,105,250,
    2,216,23,52,189,12,246,178,166,47,130,125,81,211,151,192,
    190,164,233,21,176,87,52,125,25,236,203,154,190,2,246,21,
    77,175,130,189,170,233,171,96,95,213,244,53,176,175,105,122,
    13,236,53,77,55,192,110,104,250,58,216,215,53,253,14,216,
    239,104,250,6,216,55,52,253,46,216,239,106,122,29,236,117,
    77,191,7,246,123,154,190,9,246,77,77,55,193,110,130,63,
    7,178,14,189,247,161,131,46,175,23,118,189,5,210,132,222,
    7,96,127,0,18,63,183,224,4,81,225,207,243,222,15,121,
    239,66,177,247,54,239,221,0,123,3,36,126,110,171,189,21,
    104,55,47,32,198,130,127,227,95,83,32,149,205,224,112,40,
    147,52,136,35,39,136,58,113,96,208,122,133,6,66,164,71,
    195,84,14,205,45,130,230,63,129,113,233,27,57,52,143,1,
    25,11,146,63,52,224,152,137,99,3,134,77,56,18,208,43,
    129,111,194,17,30,83,38,1,246,4,156,24,240,123,147,54,
    28,227,88,66,48,93,131,82,166,112,217,99,48,41,78,83,
    112,92,134,163,50,180,95,30,25,52,177,95,133,228,31,240,
    245,42,51,157,102,166,6,28,225,88,130,147,18,28,87,224,
    5,110,194,169,94,149,212,23,47,143,80,83,156,105,55,75,
    40,237,246,152,186,164,138,31,36,145,219,151,89,29,105,103,
    224,38,110,223,121,246,201,86,87,122,251,50,105,214,244,174,
    56,221,24,184,89,215,226,199,76,178,71,127,144,49,187,56,
    146,217,57,36,58,65,228,59,253,216,63,8,101,54,77,188,
    156,78,16,74,199,225,197,199,253,65,156,100,143,146,36,78,
    44,50,41,79,134,177,91,60,65,6,245,194,56,149,77,58,
    141,143,177,136,125,70,187,59,3,230,72,2,176,168,244,176,
    47,83,47,9,6,25,122,74,113,164,221,196,173,73,62,226,
    33,221,195,161,117,144,162,63,7,174,39,91,126,203,239,116,
    130,180,43,147,214,163,173,71,119,63,189,219,250,252,241,246,
    230,19,103,199,122,246,197,163,173,231,249,228,109,84,196,13,
    91,187,7,65,232,183,94,126,118,167,53,24,102,221,56,106,
    245,63,109,5,81,38,19,90,60,99,166,13,220,178,64,7,
    190,10,246,156,128,85,117,186,50,28,200,132,36,77,47,147,
    48,162,46,102,68,69,152,162,41,102,145,42,227,215,20,171,
    198,57,177,29,144,178,30,25,128,112,102,106,100,125,3,236,
    67,132,192,190,1,201,42,225,166,135,31,65,142,70,244,180,
    105,205,224,181,95,147,149,212,108,207,36,52,168,201,35,198,
    26,130,14,119,222,35,247,71,192,128,41,67,175,2,10,72,
    136,63,133,172,100,72,35,110,39,54,6,50,47,65,250,247,
    211,28,162,58,160,23,48,151,225,212,50,30,245,103,198,102,
    187,73,130,111,51,70,178,110,144,198,175,34,246,4,209,28,
    77,109,180,201,206,240,217,110,79,122,89,186,134,19,95,198,
    7,13,207,141,162,56,107,184,190,223,112,179,44,9,118,15,
    50,153,54,178,184,177,158,54,171,228,250,121,13,179,130,223,
    112,160,97,69,16,64,88,169,31,126,224,101,248,99,145,127,
    176,253,83,153,33,68,186,177,159,226,60,177,216,147,153,69,
    66,102,231,113,216,212,199,49,22,155,21,141,156,84,134,157,
    172,198,32,116,211,212,225,227,104,158,241,70,79,31,186,225,
    129,204,104,127,154,185,25,158,74,164,58,104,66,136,187,68,
    58,107,149,201,140,78,20,71,254,16,37,14,188,27,36,204,
    37,198,221,12,16,242,46,32,234,166,112,172,192,44,162,176,
    110,120,164,92,41,199,28,227,109,153,76,1,140,1,145,231,
    19,196,222,9,102,157,166,193,105,131,181,228,192,108,16,69,
    15,91,4,109,235,10,13,171,52,92,213,134,120,251,214,152,
    61,107,141,143,72,2,131,77,224,153,185,178,69,112,109,159,
    10,174,149,81,112,97,190,108,83,144,24,20,74,163,32,49,
    201,28,201,253,60,34,40,252,16,20,184,60,22,7,108,36,
    139,178,40,163,138,33,108,17,46,199,193,185,55,6,78,139,
    252,195,200,180,86,190,203,160,107,63,6,131,238,41,131,126,
    66,18,204,228,152,154,101,44,213,132,71,128,48,114,243,178,
    105,31,34,49,188,72,166,29,55,234,69,172,133,47,162,89,
    46,106,92,24,185,29,82,249,69,217,90,17,37,66,95,199,
    132,229,188,88,165,148,14,6,73,252,213,176,17,119,26,25,
    104,25,238,173,167,27,235,233,47,48,97,52,238,115,10,82,
    41,67,37,133,68,14,18,12,254,42,255,80,1,237,112,112,
    59,121,185,65,227,83,225,103,159,177,201,57,127,165,89,66,
    105,107,66,246,174,21,246,38,241,127,70,199,215,216,216,38,
    92,196,111,77,176,140,78,204,153,148,27,17,94,197,239,3,
    50,59,105,46,129,90,99,171,173,52,96,229,72,77,235,230,
    41,20,189,117,213,172,91,36,164,14,199,10,20,152,161,175,
    73,194,83,132,252,21,184,105,19,240,23,32,124,32,12,242,
    152,226,232,165,47,185,121,145,182,255,1,56,73,125,75,105,
    52,84,108,26,121,26,195,208,77,239,242,86,85,41,191,128,
    191,141,101,184,19,19,4,85,53,51,111,203,198,171,90,169,
    136,102,6,214,15,170,92,165,211,97,79,238,234,186,41,109,
    83,1,110,22,1,62,74,150,69,63,133,89,235,237,99,110,
    90,29,236,144,140,191,26,33,142,74,198,21,177,104,140,225,
    232,67,26,110,23,16,18,122,238,173,138,187,118,54,199,143,
    85,60,71,229,213,207,73,166,18,107,49,87,225,12,80,112,
    40,98,166,172,99,230,227,34,102,36,103,250,215,220,203,211,
    104,16,36,78,12,129,23,71,236,120,232,206,86,2,89,6,
    187,66,209,197,189,170,200,131,79,232,188,71,249,242,84,25,
    97,35,109,43,243,21,168,80,14,167,225,171,9,229,25,242,
    249,189,208,237,239,250,238,253,30,29,78,18,120,58,28,13,
    173,78,125,92,29,10,37,241,93,26,241,207,143,180,90,135,
    19,202,49,63,1,22,86,169,195,17,229,199,30,39,150,231,
    93,217,232,203,254,46,138,209,13,6,141,78,232,238,177,247,
    204,92,221,103,90,221,140,221,127,182,164,167,148,189,182,227,
    134,23,71,88,32,14,188,44,78,26,190,68,33,165,223,184,
    221,224,234,210,8,210,134,187,139,171,174,151,169,208,56,29,
    239,220,73,186,201,94,202,77,227,254,43,34,39,232,125,7,
    175,182,1,118,205,251,218,92,234,206,85,148,10,110,148,85,
    156,97,229,197,91,76,54,84,153,240,14,13,239,211,176,14,
    147,173,40,45,80,55,242,148,12,90,193,100,85,21,217,220,
    120,176,239,208,51,233,155,33,255,244,135,132,188,122,75,148,
    7,126,69,191,94,154,2,57,77,87,106,187,70,239,38,104,
    230,28,101,131,169,255,53,27,112,236,76,48,106,254,244,127,
    77,2,214,199,63,18,109,44,238,87,191,47,1,136,113,85,
    103,85,2,232,9,221,224,143,235,201,47,24,150,223,196,151,
    227,37,210,205,164,114,227,229,137,41,206,105,69,137,146,22,
    206,212,218,21,119,158,187,133,134,39,220,97,13,151,198,186,
    111,246,173,120,129,237,16,118,232,71,108,4,199,80,77,250,
    8,188,165,194,22,100,214,72,190,114,206,216,67,53,225,36,
    141,59,24,200,200,31,53,216,188,50,33,88,220,81,138,23,
    221,13,118,211,75,248,125,51,104,73,191,49,117,217,171,229,
    34,76,39,231,95,6,246,80,123,182,73,247,159,81,182,182,
    200,175,42,63,23,169,217,250,57,232,116,93,64,215,151,161,
    204,228,89,143,169,215,126,42,217,251,18,75,88,60,196,187,
    18,223,52,240,119,232,56,147,204,242,159,225,89,3,200,111,
    124,148,229,43,152,231,171,165,170,224,210,122,230,221,172,146,
    145,10,131,234,167,135,169,197,105,96,174,176,2,191,67,212,
    5,141,163,129,250,195,109,183,175,94,6,241,107,13,235,58,
    13,55,180,53,25,203,234,202,197,183,24,117,167,68,228,115,
    221,231,50,111,109,208,60,153,81,105,144,203,191,181,243,27,
    190,66,171,201,7,110,42,105,102,166,152,65,43,60,127,242,
    128,95,226,20,19,59,46,93,181,119,67,249,194,13,145,197,
    216,238,246,48,205,100,159,75,156,140,14,250,206,83,217,143,
    147,225,211,216,87,239,109,55,125,63,177,220,104,79,58,135,
    146,26,148,140,208,177,153,119,36,106,175,94,89,42,120,158,
    94,103,222,106,1,39,212,251,58,14,243,92,171,48,70,173,
    252,124,126,254,244,252,195,184,239,162,31,71,28,218,129,230,
    64,225,227,39,180,74,150,67,216,4,110,24,124,45,207,152,
    134,44,177,48,110,137,39,177,231,134,155,131,192,27,147,23,
    55,6,222,78,16,63,148,135,129,39,199,78,27,205,17,87,
    124,250,113,123,83,171,123,202,224,56,207,189,205,86,124,64,
    168,211,123,70,190,123,140,45,222,115,180,9,218,158,246,237,
    36,177,39,211,84,239,27,201,156,47,240,157,125,228,111,238,
    74,78,151,9,14,172,68,238,5,232,62,117,208,104,123,158,
    50,9,228,217,42,188,89,91,198,31,157,96,20,170,11,131,
    122,111,114,159,157,216,197,129,222,41,86,231,170,162,98,208,
    123,108,83,212,196,172,40,137,153,217,170,89,173,84,203,38,
    70,42,205,44,138,154,89,173,205,136,255,246,127,5,99,188,
    102,172,212,170,226,63,83,116,47,229,
};

EmbeddedPython embedded_m5_internal_param_O3Checker(
    "m5/internal/param_O3Checker.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_O3Checker.py",
    "m5.internal.param_O3Checker",
    data_m5_internal_param_O3Checker,
    2362,
    7181);

} // anonymous namespace