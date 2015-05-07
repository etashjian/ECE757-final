#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPIOAPIC[] = {
    120,156,205,89,109,111,219,214,21,62,151,164,104,75,182,108,
    249,61,110,211,69,91,17,76,43,154,40,235,214,166,219,2,
    99,169,231,14,46,58,217,163,186,37,85,139,114,52,121,37,
    81,150,72,129,188,78,170,194,254,50,7,219,190,237,55,12,
    195,62,236,127,244,127,109,231,156,75,210,178,19,39,1,54,
    64,137,197,139,203,203,203,195,243,242,156,183,27,31,178,127,
    37,188,126,93,7,72,59,2,32,192,159,128,33,192,72,0,
    222,11,41,32,88,131,227,18,36,63,135,160,4,207,0,58,
    6,72,3,206,113,98,194,87,6,68,139,252,142,13,67,147,
    87,4,76,42,32,45,232,148,224,81,180,2,150,180,225,184,
    2,201,159,64,8,17,9,120,28,204,65,48,15,207,144,58,
    78,202,76,112,30,130,10,79,202,16,44,240,164,2,147,26,
    200,5,232,32,241,57,232,84,145,212,123,72,106,137,73,125,
    79,164,2,124,178,14,65,149,182,35,47,95,210,78,139,118,
    242,55,150,152,202,114,206,89,13,58,181,124,190,2,157,149,
    124,190,10,157,213,124,190,6,157,53,8,150,65,214,96,176,
    14,93,20,187,86,208,222,0,105,194,96,19,58,155,32,241,
    183,1,231,168,153,96,133,247,110,241,222,213,98,239,13,222,
    187,13,157,109,144,248,187,161,247,218,208,110,108,160,158,195,
    255,224,191,6,234,25,212,34,14,79,100,146,134,113,228,134,
    81,55,14,13,122,110,211,64,86,241,105,152,203,204,179,75,
    230,249,55,176,109,2,35,51,207,25,32,97,65,252,15,13,
    56,227,201,153,1,147,6,156,10,24,88,16,152,112,138,159,
    41,17,3,61,1,231,6,124,109,210,134,51,28,45,84,232,
    15,192,82,218,54,3,86,168,166,52,7,103,37,56,45,65,
    251,241,169,65,11,199,101,72,254,5,223,221,100,162,243,76,
    212,128,83,28,45,56,183,224,204,134,71,184,9,151,6,101,
    18,95,60,62,69,73,113,165,221,176,144,219,214,148,184,36,
    74,16,38,145,55,146,106,11,231,238,216,75,188,145,251,248,
    227,143,246,35,37,135,191,59,220,63,120,120,184,191,219,168,
    228,155,227,244,238,216,83,125,135,223,54,73,45,163,177,98,
    170,113,36,213,2,78,186,97,20,184,163,56,56,25,74,53,
    79,36,221,110,56,148,174,203,15,247,71,227,56,81,123,73,
    18,39,14,105,150,23,135,177,87,188,65,122,245,135,113,42,
    27,244,53,254,140,67,228,21,237,238,142,153,34,49,192,28,
    211,203,129,76,253,36,28,43,52,152,166,72,187,137,90,131,
    76,197,67,26,225,208,60,73,209,172,99,207,151,205,160,25,
    116,187,97,218,151,73,115,111,119,239,254,135,247,155,159,238,
    183,30,126,238,30,58,7,159,237,237,126,145,45,222,65,65,
    188,97,243,232,36,28,6,77,84,72,115,60,81,253,56,106,
    142,62,108,134,168,155,132,30,190,88,91,119,113,231,42,125,
    247,105,216,115,67,150,216,237,203,225,88,38,196,112,250,22,
    241,36,106,98,81,216,194,20,13,81,197,89,9,47,83,220,
    52,22,68,43,36,153,125,210,3,161,206,204,113,246,79,96,
    139,34,32,142,13,72,110,18,138,6,248,19,100,118,196,82,
    155,158,25,252,236,247,164,44,189,58,48,9,27,122,241,148,
    145,135,16,196,157,15,8,12,168,21,130,79,9,6,54,104,
    88,33,26,53,206,146,9,141,184,157,200,24,72,220,130,244,
    239,151,41,68,53,64,99,160,119,227,210,38,126,234,207,140,
    212,118,131,24,111,49,84,84,63,76,227,167,17,27,132,230,
    236,91,109,212,201,225,228,224,104,32,125,149,222,194,133,47,
    227,147,186,239,69,81,172,234,94,16,212,61,165,146,240,232,
    68,201,180,174,226,250,237,180,81,38,4,172,228,104,43,232,
    77,198,57,186,8,9,136,46,125,19,132,190,194,155,53,190,
    97,253,167,82,33,82,250,113,144,226,58,145,232,73,229,16,
    147,106,9,135,135,249,231,24,146,13,59,7,80,42,135,93,
    85,97,44,122,105,234,242,231,104,157,97,71,111,63,241,134,
    39,82,209,254,84,121,10,191,74,83,253,161,217,2,239,6,
    137,158,75,78,218,116,163,56,10,38,200,120,232,191,75,60,
    221,96,248,45,2,1,112,3,193,55,135,163,13,85,4,99,
    205,240,73,70,43,131,30,195,110,147,52,2,12,5,145,5,
    25,132,224,57,134,162,134,193,177,132,133,101,55,173,211,140,
    94,118,8,225,206,219,52,220,164,225,157,92,31,51,83,74,
    245,170,82,238,17,35,6,107,194,55,51,153,11,87,107,93,
    114,181,237,11,87,195,88,218,38,151,49,200,177,46,92,198,
    36,173,36,59,153,127,144,51,34,68,240,241,148,87,176,174,
    156,26,233,192,206,1,237,16,74,167,161,218,155,130,170,67,
    102,98,156,58,219,215,233,245,214,27,164,215,158,214,235,207,
    136,145,197,12,97,85,70,86,69,248,4,15,35,211,50,107,
    248,55,56,153,108,145,134,167,117,187,133,233,242,81,84,229,
    188,199,185,147,171,6,29,116,180,202,245,196,34,44,118,77,
    216,204,242,89,74,49,98,156,196,223,78,234,113,183,174,32,
    231,225,193,237,244,238,237,244,87,24,69,234,59,28,151,116,
    28,209,145,34,145,227,4,35,66,153,111,180,151,187,236,241,
    110,150,138,208,6,84,27,176,233,88,243,28,212,82,149,80,
    44,155,173,218,43,133,218,73,138,95,16,23,21,214,185,9,
    91,120,85,4,179,234,198,28,101,185,100,225,167,120,125,66,
    218,39,5,72,160,66,210,105,107,65,88,70,146,214,249,241,
    37,76,205,74,66,231,61,226,53,247,81,27,10,4,209,101,
    146,12,228,54,127,5,174,242,4,252,5,8,45,8,138,204,
    209,216,165,233,34,163,175,209,246,111,128,3,216,11,178,167,
    161,29,214,200,66,28,250,115,122,159,183,234,100,250,25,252,
    109,42,250,157,155,32,40,241,153,89,29,55,157,248,172,194,
    197,25,102,175,149,220,172,203,177,128,172,214,247,82,218,166,
    189,222,44,188,254,34,144,22,149,23,134,178,153,33,112,94,
    127,223,37,86,127,123,129,63,202,42,111,139,53,99,10,85,
    239,211,112,167,0,148,200,215,102,193,245,173,171,105,96,42,
    55,186,58,244,126,74,172,89,44,204,178,173,40,97,18,161,
    246,67,119,247,224,243,131,86,219,205,104,22,183,76,187,112,
    177,82,238,98,31,20,46,38,57,77,60,227,38,129,70,131,
    160,115,110,8,236,202,176,120,162,134,200,2,89,130,142,77,
    206,200,213,175,200,124,85,228,209,146,162,236,165,28,196,90,
    108,105,253,22,232,209,192,160,225,219,217,70,39,194,198,131,
    161,55,58,10,188,157,63,16,15,196,136,159,123,175,145,75,
    85,155,150,138,60,79,92,39,24,223,222,203,165,123,50,219,
    200,244,83,252,100,33,21,251,97,16,251,28,142,190,232,203,
    250,72,142,142,144,155,126,56,174,119,135,94,143,109,105,102,
    82,31,228,82,43,6,195,213,234,32,165,152,215,138,235,126,
    28,97,146,57,241,85,156,212,3,137,188,202,160,126,167,206,
    25,170,30,166,117,239,8,159,122,190,210,158,116,57,74,112,
    137,234,37,189,148,171,209,227,167,52,157,61,22,92,108,164,
    67,172,202,255,152,107,77,183,118,69,186,225,66,92,187,37,
    38,113,236,146,212,68,135,209,143,104,248,9,13,183,225,141,
    200,74,77,178,50,125,155,212,107,99,164,43,11,181,153,133,
    136,233,189,135,68,33,125,62,42,252,227,117,162,130,62,165,
    201,98,131,77,59,229,28,53,249,52,150,41,63,117,42,249,
    226,2,143,139,188,88,205,23,151,120,92,230,197,90,190,184,
    194,227,42,47,174,229,71,70,235,188,184,65,7,40,129,205,
    43,91,20,132,230,254,215,32,196,190,58,123,47,253,250,255,
    26,123,156,15,222,44,161,28,46,181,95,22,119,196,180,196,
    85,29,119,6,34,111,81,166,197,229,115,147,119,174,5,178,
    235,39,210,83,82,219,246,173,89,171,129,99,155,230,232,155,
    194,194,185,172,69,15,119,191,144,247,156,139,195,201,250,84,
    27,193,6,23,143,176,146,195,86,227,148,85,226,26,186,219,
    184,0,182,85,104,134,68,142,228,211,231,152,209,218,209,77,
    5,49,229,141,199,50,10,46,26,6,126,50,91,200,80,8,
    165,56,148,215,103,216,29,172,227,245,188,123,147,180,83,194,
    179,169,75,133,67,207,220,232,140,253,126,110,238,6,55,199,
    69,2,113,200,216,58,101,20,217,194,249,101,97,190,31,93,
    15,108,44,202,19,137,157,31,118,175,175,179,13,171,70,174,
    209,179,123,245,195,235,95,145,145,119,132,61,36,17,126,245,
    46,162,75,0,210,183,47,243,196,48,96,146,47,223,65,228,
    248,216,58,120,153,80,249,41,247,43,100,207,183,229,178,103,
    247,140,44,230,35,144,200,178,188,198,57,20,89,37,59,222,
    8,36,86,46,241,4,219,108,238,78,241,126,232,186,111,64,
    86,255,24,63,249,21,125,123,29,116,86,183,49,175,111,100,
    127,101,171,44,184,192,186,242,31,1,154,101,46,186,184,23,
    155,164,14,71,229,229,2,118,124,82,157,215,51,28,142,232,
    172,161,229,141,244,89,35,31,151,57,132,13,231,221,28,185,
    12,2,221,181,115,7,172,79,39,48,244,112,245,199,197,158,
    115,151,214,169,145,185,42,208,39,94,42,119,227,168,27,246,
    246,34,149,76,212,114,177,167,29,142,244,129,43,159,92,6,
    137,135,74,33,202,168,229,208,27,134,223,73,245,62,188,162,
    207,185,66,156,43,33,117,239,85,111,105,29,179,245,19,217,
    11,83,52,5,179,126,45,211,89,68,37,139,20,189,215,11,
    48,57,77,112,246,0,210,13,143,62,52,218,97,189,238,224,
    64,199,171,229,229,178,176,13,58,217,55,69,69,84,133,37,
    22,171,101,179,108,151,75,38,130,140,86,214,68,197,44,87,
    22,133,254,219,70,176,85,140,237,165,178,248,47,20,5,75,
    245,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPIOAPIC(
    "m5/internal/param_X86IntelMPIOAPIC.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_X86IntelMPIOAPIC.py",
    "m5.internal.param_X86IntelMPIOAPIC",
    data_m5_internal_param_X86IntelMPIOAPIC,
    2225,
    7175);

} // anonymous namespace