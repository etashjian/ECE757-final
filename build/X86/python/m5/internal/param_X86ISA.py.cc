#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86ISA[] = {
    120,156,205,88,255,115,219,68,22,127,43,201,74,236,196,141,
    211,164,77,3,133,234,134,233,224,99,174,53,199,29,148,187,
    235,116,40,165,220,148,225,156,34,151,105,49,112,58,69,90,
    199,114,100,201,35,109,90,204,36,191,144,14,220,111,247,71,
    48,252,192,255,193,255,5,239,189,149,20,37,192,13,51,48,
    53,137,181,179,90,173,118,223,151,207,231,189,183,10,160,248,
    107,224,245,150,3,144,247,5,64,136,63,1,49,192,84,192,
    80,128,144,2,194,13,216,111,64,246,87,8,27,240,20,96,
    104,128,52,224,24,59,38,124,108,64,178,202,239,216,16,155,
    60,34,96,222,2,105,193,176,1,15,147,117,176,164,13,251,
    45,200,254,3,66,136,68,192,163,112,9,194,101,120,138,171,
    99,167,201,11,46,67,216,226,78,19,194,21,238,180,96,222,
    1,185,2,67,92,124,9,134,109,92,234,21,92,234,28,47,
    245,29,45,21,226,147,77,8,219,52,29,101,249,136,102,90,
    52,147,247,56,199,171,172,149,146,117,96,216,41,251,235,48,
    92,47,251,231,97,120,30,194,53,144,29,152,108,192,8,85,
    237,84,235,109,130,52,97,114,1,134,23,64,226,111,19,142,
    209,26,225,58,207,189,200,115,207,87,115,183,120,238,37,24,
    94,2,137,191,45,61,215,134,65,247,2,218,54,250,30,255,
    186,104,91,80,171,216,60,150,89,30,165,137,23,37,163,52,
    50,232,185,77,13,121,34,160,102,169,112,201,29,114,201,183,
    192,254,8,141,194,37,71,128,11,11,146,63,54,224,136,59,
    71,6,204,187,112,40,96,98,65,104,194,33,110,211,32,1,
    246,4,28,27,240,137,73,19,142,176,181,208,136,47,130,165,
    180,63,38,108,68,189,210,18,28,53,224,176,1,131,71,135,
    6,13,236,55,33,251,6,62,191,204,139,46,243,162,6,28,
    98,107,193,177,5,71,54,60,196,73,56,52,105,146,250,226,
    209,33,106,138,35,131,174,133,210,246,107,234,146,42,97,148,
    37,254,84,170,54,246,189,153,159,249,83,239,209,155,111,220,
    27,220,238,182,202,41,105,126,125,230,171,177,203,239,152,100,
    140,233,76,241,90,105,34,213,10,118,70,81,18,122,211,52,
    60,136,165,90,166,133,188,81,20,75,207,227,135,247,166,179,
    52,83,119,179,44,205,92,178,39,15,198,169,95,189,65,214,
    12,226,52,151,93,218,141,183,113,105,121,69,179,71,51,94,
    145,4,96,57,233,229,80,230,65,22,205,20,186,73,175,72,
    179,105,181,46,57,136,155,28,21,134,222,65,142,206,156,249,
    129,236,133,189,112,52,138,242,177,204,122,119,239,220,189,241,
    250,141,222,187,247,250,183,223,247,238,187,59,239,221,189,243,
    160,24,188,134,138,248,113,111,247,32,138,195,30,154,161,55,
    155,171,113,154,244,166,175,247,162,68,201,140,30,214,109,116,
    29,159,159,167,221,158,68,123,94,196,122,122,99,25,207,100,
    70,98,230,207,145,36,162,35,86,133,45,76,209,21,109,236,
    53,240,50,197,101,99,69,244,35,210,52,32,237,9,97,102,
    137,169,175,129,189,135,206,223,55,32,187,76,136,153,224,79,
    144,139,17,55,3,122,102,240,179,15,200,68,122,116,98,18,
    14,244,224,33,163,12,225,134,51,111,146,227,19,96,168,52,
    96,98,131,134,16,34,79,99,42,155,83,139,211,105,25,3,
    23,183,32,255,223,233,21,146,14,160,11,144,189,56,116,17,
    183,250,130,81,57,232,146,224,125,6,136,26,71,121,250,36,
    97,55,80,159,121,52,64,155,220,159,239,236,78,100,160,242,
    43,56,240,81,122,224,4,126,146,164,202,241,195,208,241,149,
    202,162,221,3,37,115,71,165,206,213,188,219,36,191,175,151,
    24,171,214,155,207,74,76,145,255,17,83,250,38,140,2,133,
    55,27,124,195,246,207,165,66,124,140,211,48,199,113,90,98,
    79,42,151,132,84,231,176,185,93,110,199,64,236,218,37,108,
    114,25,143,84,139,17,232,231,185,199,219,209,56,131,141,222,
    126,236,199,7,82,209,252,92,249,10,119,165,174,222,104,17,
    112,187,68,10,151,250,146,13,189,36,77,194,57,138,27,5,
    47,145,36,151,24,116,171,64,176,187,128,144,91,194,214,134,
    54,66,176,99,4,164,153,85,0,142,193,118,145,236,0,12,
    0,81,132,17,4,222,49,6,155,174,193,209,130,85,100,74,
    58,212,163,151,93,194,181,251,60,53,151,169,121,161,180,194,
    51,54,69,251,172,41,94,165,237,13,214,63,48,11,77,43,
    90,245,79,209,106,251,132,86,24,35,7,68,15,131,72,116,
    66,15,147,108,145,221,42,184,64,196,67,56,224,227,26,3,
    216,66,110,135,52,183,75,240,186,132,200,58,44,247,106,176,
    116,201,57,140,73,119,251,231,172,121,101,225,214,220,211,214,
    252,11,109,191,90,160,169,205,40,106,137,128,160,96,20,182,
    101,187,190,131,157,249,22,217,181,110,209,45,76,126,15,147,
    54,103,49,206,132,156,247,117,88,209,134,214,29,139,112,55,
    50,225,98,145,157,114,138,2,179,44,253,108,238,164,35,71,
    65,41,195,205,171,249,245,171,249,63,48,78,56,183,56,242,
    232,72,161,99,65,38,103,25,114,190,201,55,154,199,30,115,
    218,43,82,12,90,158,50,61,59,140,237,205,97,43,87,25,
    69,171,69,24,187,85,25,155,100,255,27,237,221,98,75,155,
    176,133,87,75,176,128,94,202,209,147,203,14,126,138,215,219,
    100,115,82,91,2,21,128,238,64,139,207,154,145,142,238,203,
    167,240,243,108,245,114,95,33,9,75,22,218,80,161,133,46,
    147,36,39,98,124,5,92,159,9,248,18,8,25,8,128,130,
    74,76,90,186,200,193,27,52,253,223,192,129,233,39,114,161,
    161,41,105,20,161,11,25,155,223,224,169,58,53,190,7,255,
    173,69,181,99,19,4,165,49,179,168,192,234,105,204,170,72,
    204,144,250,69,169,202,58,205,118,242,213,216,207,105,154,230,
    181,89,241,250,36,64,86,213,19,6,171,103,140,182,101,189,
    171,71,2,254,243,4,107,148,35,158,23,27,70,13,65,127,
    162,230,90,5,30,81,142,61,59,89,175,156,13,234,181,252,
    230,233,64,250,46,9,100,177,10,107,182,34,55,232,215,189,
    59,59,239,239,244,7,30,118,43,202,52,74,202,188,86,81,
    70,114,136,127,202,133,59,181,6,129,226,216,16,120,58,194,
    34,135,14,38,22,200,6,12,109,34,23,215,166,162,224,158,
    40,99,30,197,202,83,249,131,45,213,215,54,172,112,161,93,
    78,205,103,139,136,49,228,245,155,177,63,221,13,253,91,15,
    104,103,218,62,40,217,104,148,186,116,234,186,16,147,196,207,
    169,195,183,175,150,58,61,94,68,124,249,51,110,84,233,194,
    108,10,211,128,131,202,131,177,116,166,114,186,139,50,140,163,
    153,51,138,253,61,246,155,89,232,186,83,234,170,216,241,103,
    179,120,78,145,171,159,58,65,154,96,90,56,8,84,154,57,
    161,68,9,101,232,92,115,56,167,56,81,238,248,187,248,212,
    15,148,102,198,105,174,115,217,232,103,123,57,87,136,251,79,
    168,187,40,191,123,120,124,141,176,62,254,176,180,149,62,90,
    85,9,130,75,98,77,51,76,182,120,94,81,115,29,2,223,
    160,230,143,212,92,133,5,230,145,30,110,52,160,29,201,148,
    54,70,169,166,224,67,133,158,113,159,102,231,63,230,248,191,
    126,9,199,245,183,143,130,233,118,249,209,100,9,228,50,29,
    152,135,45,250,242,64,35,43,68,255,165,95,75,127,230,203,
    162,152,242,241,111,202,122,247,181,223,131,42,46,151,165,255,
    143,241,162,174,103,91,51,126,34,202,34,190,174,36,127,59,
    216,56,3,43,47,200,164,175,164,246,222,115,139,81,153,35,
    136,150,227,211,202,135,165,94,213,137,230,70,165,219,49,23,
    82,243,205,90,121,205,46,21,15,177,234,193,18,252,144,213,
    247,12,93,133,159,0,214,170,172,64,120,72,228,19,175,110,
    9,93,98,147,40,254,108,38,147,240,164,124,230,39,139,128,
    2,133,39,170,9,203,10,6,107,229,77,188,126,76,81,210,
    172,166,40,59,179,81,145,114,65,110,101,36,7,165,67,187,
    20,208,78,66,178,75,238,212,65,184,138,191,238,223,161,140,
    201,21,86,67,25,75,37,79,57,138,189,87,28,55,67,137,
    25,42,157,227,1,136,79,16,120,31,123,222,194,226,248,155,
    184,209,16,138,51,28,197,113,27,35,121,211,106,10,78,155,
    103,62,175,106,1,41,169,234,58,121,158,187,204,248,181,74,
    127,254,18,88,230,43,134,63,157,249,250,254,84,127,213,225,
    79,20,238,31,168,121,169,180,35,227,87,159,163,248,116,162,
    79,137,8,117,206,233,156,194,221,235,52,78,187,104,241,7,
    209,84,127,182,226,239,63,97,230,163,122,244,22,218,43,242,
    227,232,115,201,119,213,44,78,86,234,69,248,137,50,148,93,
    146,201,189,40,71,251,240,14,213,91,5,197,200,64,106,251,
    108,8,170,191,182,40,223,233,250,81,159,159,111,177,250,55,
    177,161,175,74,205,181,166,176,13,250,140,105,138,150,104,11,
    75,172,182,155,102,211,110,54,76,244,47,141,108,136,150,217,
    108,173,10,250,223,70,111,183,140,237,86,83,252,0,85,223,
    77,184,
};

EmbeddedPython embedded_m5_internal_param_X86ISA(
    "m5/internal/param_X86ISA.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_X86ISA.py",
    "m5.internal.param_X86ISA",
    data_m5_internal_param_X86ISA,
    2066,
    6354);

} // anonymous namespace