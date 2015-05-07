#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_I8237[] = {
    120,156,205,88,237,111,219,198,25,127,142,148,100,75,182,98,
    249,37,118,156,184,177,210,34,152,86,44,81,151,174,117,182,
    5,193,92,39,29,82,52,118,70,21,72,202,189,112,52,121,
    146,40,75,164,64,210,78,85,216,95,230,96,219,183,253,17,
    195,62,236,255,24,246,111,109,207,243,28,143,162,210,102,40,
    208,34,154,45,30,142,119,199,231,158,151,223,243,114,231,65,
    246,87,198,231,87,77,128,228,223,2,192,199,159,128,33,192,
    72,128,45,64,72,1,254,58,156,148,33,254,25,248,101,120,
    5,96,27,32,13,184,196,142,9,191,53,32,92,230,111,42,
    48,52,121,68,192,164,6,178,4,118,25,158,135,171,80,146,
    21,56,169,65,252,71,16,66,132,2,94,248,11,224,47,194,
    43,164,142,157,42,19,92,4,191,198,157,42,248,75,220,169,
    193,164,1,114,9,108,36,190,0,118,29,73,189,143,164,174,
    48,169,127,17,41,31,103,54,192,175,211,114,228,229,75,90,
    89,162,149,188,199,21,166,178,162,57,107,128,221,208,253,85,
    176,87,117,127,13,236,53,221,95,7,123,93,247,55,192,222,
    208,253,171,96,95,213,253,77,176,55,117,127,11,236,45,221,
    191,6,246,53,221,223,6,123,91,247,175,131,125,93,247,111,
    128,125,67,247,119,192,222,1,127,5,100,3,6,239,64,23,
    85,220,200,229,184,9,210,132,193,46,216,187,32,241,119,19,
    46,209,10,254,42,175,109,242,218,181,124,237,45,94,251,46,
    216,239,130,196,223,45,181,182,2,157,214,85,180,105,240,31,
    252,107,161,77,33,93,198,230,76,198,73,16,133,78,16,118,
    163,192,160,249,10,53,132,0,143,154,133,12,10,7,4,133,
    127,2,227,192,55,50,40,92,0,18,22,196,255,208,128,11,
    238,92,24,48,105,193,185,128,65,9,124,19,206,113,155,50,
    49,208,19,112,105,192,239,76,90,112,129,109,9,141,119,19,
    74,169,194,193,128,141,167,40,45,192,69,25,206,203,208,121,
    113,110,208,192,73,21,226,127,192,215,59,76,116,145,137,26,
    112,142,109,9,46,75,112,81,129,231,184,8,135,6,85,18,
    95,188,56,71,73,113,164,211,42,33,183,135,5,113,73,20,
    63,136,67,119,36,89,116,103,236,198,238,200,121,114,255,222,
    135,123,173,154,94,17,37,119,199,110,218,183,248,19,147,116,
    49,26,167,76,42,10,101,186,132,157,110,16,250,206,40,242,
    79,135,50,93,36,58,78,55,24,74,199,225,201,39,163,113,
    20,167,143,227,56,138,45,82,39,15,14,35,55,255,130,148,
    233,13,163,68,182,104,55,222,198,34,242,41,173,238,142,153,
    34,49,192,108,210,199,190,76,188,56,24,167,104,37,69,145,
    86,19,181,22,217,135,155,132,76,213,62,77,208,150,99,215,
    147,109,191,237,119,187,65,210,151,113,251,241,193,227,189,143,
    246,218,159,62,57,220,255,220,121,102,29,125,246,248,224,139,
    108,240,14,10,226,14,219,199,167,193,208,111,191,184,255,113,
    123,60,73,251,81,216,30,125,212,14,194,84,198,52,89,80,
    209,93,156,94,163,205,94,6,61,39,96,49,157,190,28,142,
    101,76,92,38,215,137,17,209,16,203,162,34,76,209,18,117,
    236,149,241,49,197,142,177,36,14,3,18,212,35,225,9,95,
    166,70,212,223,129,109,135,166,63,49,32,222,33,188,12,240,
    39,200,192,136,154,14,205,25,60,247,27,210,144,26,29,152,
    132,2,53,120,206,24,67,176,225,202,7,100,246,16,24,40,
    101,24,84,64,1,8,113,167,16,21,79,168,197,229,68,198,
    64,226,37,72,254,54,75,33,108,0,90,0,99,6,14,109,
    226,86,127,98,76,118,90,196,248,33,227,35,237,7,73,244,
    50,100,43,80,159,161,212,65,157,60,155,28,29,15,164,151,
    38,187,56,240,101,116,218,244,220,48,140,210,166,235,251,77,
    55,77,227,224,248,52,149,73,51,141,154,183,147,86,149,204,
    190,170,33,150,211,155,140,53,164,200,252,8,41,245,226,7,
    94,138,47,235,252,194,250,79,100,138,240,232,71,126,130,227,
    68,162,39,83,139,152,76,175,96,179,175,183,99,28,182,42,
    26,53,137,28,118,211,26,3,208,77,18,135,183,163,113,198,
    26,125,125,230,14,79,101,74,235,147,212,77,113,87,234,170,
    141,230,128,182,107,36,175,22,151,84,232,132,81,232,79,144,
    219,192,123,143,24,185,198,152,91,6,66,221,85,68,220,2,
    182,21,168,35,2,27,134,71,130,149,50,188,49,214,54,73,
    13,192,246,23,89,12,65,220,93,98,164,105,25,28,42,88,
    66,118,200,38,245,232,99,139,96,109,221,160,102,135,154,119,
    180,18,222,174,38,234,175,107,226,3,218,221,96,241,61,51,
    19,52,119,170,195,25,167,218,158,58,21,198,199,14,57,135,
    65,46,52,117,14,147,84,17,63,204,60,129,220,14,193,128,
    211,5,252,179,130,172,6,9,94,209,208,181,8,143,69,80,
    246,10,160,180,200,54,140,72,107,251,77,202,220,157,183,50,
    123,74,153,31,210,238,203,25,150,234,140,161,154,240,8,8,
    70,166,90,86,235,35,236,76,182,72,173,69,133,110,97,222,
    123,30,214,57,129,113,18,228,82,67,197,20,165,103,213,41,
    17,234,186,38,108,102,137,41,161,16,48,142,163,175,38,205,
    168,219,76,65,243,240,224,118,114,247,118,242,75,12,18,205,
    135,28,118,84,152,80,129,32,150,227,24,29,190,202,47,202,
    137,29,118,104,39,75,47,168,120,74,242,108,47,86,55,199,
    172,36,141,41,84,205,65,215,181,92,215,196,250,207,105,235,
    26,43,218,132,45,124,106,130,249,115,34,142,156,92,112,240,
    44,62,159,144,202,73,106,9,84,114,90,29,197,61,11,70,
    34,90,63,154,65,207,91,21,203,122,159,24,212,46,88,129,
    28,43,244,152,196,56,121,197,95,128,11,51,1,127,6,194,
    5,154,63,243,35,246,88,122,200,188,235,180,252,15,192,65,
    233,91,210,160,161,252,209,200,194,22,186,107,178,199,75,85,
    86,252,12,254,90,136,104,151,38,8,202,96,102,86,122,21,
    51,88,41,247,96,6,212,119,202,82,165,89,87,39,83,245,
    221,132,150,41,167,54,115,167,158,6,199,188,110,194,72,245,
    118,177,182,168,54,117,136,191,95,79,145,70,233,225,134,88,
    55,10,248,249,9,53,119,114,232,8,61,246,214,88,221,125,
    61,158,23,50,155,163,98,232,167,196,79,137,37,88,169,112,
    148,69,210,79,58,251,206,193,209,231,71,135,29,69,43,247,
    152,178,246,152,123,185,199,72,142,239,175,184,98,167,214,32,
    80,92,26,2,143,99,88,223,208,73,168,4,178,12,118,133,
    124,139,171,82,145,185,158,208,17,143,34,229,76,242,96,85,
    29,42,37,230,184,80,38,167,230,171,57,68,24,178,250,131,
    161,59,58,246,221,135,228,70,9,237,238,105,103,52,180,40,
    141,162,40,228,72,226,77,210,240,235,7,90,164,179,57,68,
    151,159,226,62,185,40,236,75,126,228,113,72,249,162,47,155,
    35,57,58,70,22,250,193,184,217,29,186,61,182,154,153,137,
    122,164,69,77,217,236,175,39,240,132,226,214,97,212,244,162,
    16,83,194,169,151,70,113,211,151,200,160,244,155,119,154,156,
    79,154,65,210,116,143,113,214,245,82,229,24,179,158,206,245,
    162,27,247,18,46,13,79,94,82,119,78,86,119,240,208,26,
    96,93,236,104,85,169,19,85,158,28,184,20,86,94,134,121,
    22,207,41,233,68,197,191,143,169,249,49,53,183,97,126,57,
    164,141,251,252,158,54,36,69,86,48,68,85,133,58,65,210,
    130,103,180,54,249,166,123,63,253,46,238,173,238,89,50,39,
    175,232,11,154,5,144,139,116,72,182,107,116,219,64,35,75,
    228,249,11,223,215,243,217,87,230,228,37,242,7,117,120,235,
    222,255,129,36,22,87,163,255,203,217,69,81,204,186,114,246,
    129,208,165,123,81,70,190,46,88,155,197,148,227,197,210,77,
    165,50,221,245,185,8,204,161,67,177,209,203,13,168,165,202,
    79,49,123,185,100,151,92,63,77,54,10,53,53,219,83,60,
    199,98,7,235,238,115,22,222,49,84,233,61,5,107,41,215,
    193,10,54,161,124,233,20,244,160,202,106,226,196,29,143,101,
    232,79,75,102,158,153,3,12,40,44,245,97,90,183,96,125,
    188,129,207,55,157,147,228,42,136,201,150,44,231,238,56,31,
    155,50,136,71,218,154,45,58,201,76,35,177,69,182,84,177,
    55,15,187,214,47,64,135,226,28,166,190,28,202,84,22,173,
    148,210,71,217,241,210,151,152,150,162,9,158,120,248,204,128,
    239,67,199,153,87,244,190,175,108,160,206,108,20,189,43,24,
    191,171,165,170,224,84,249,218,77,170,226,143,174,44,84,101,
    60,73,44,118,245,149,92,122,190,245,211,73,138,145,79,103,
    188,67,119,164,174,112,248,66,194,186,69,205,123,90,139,140,
    93,117,112,226,243,136,58,21,34,202,57,143,115,218,182,238,
    210,248,6,209,102,238,63,113,147,192,123,22,68,143,228,89,
    224,73,246,10,53,49,29,91,206,199,58,147,36,149,35,94,
    36,195,211,145,243,84,142,162,120,242,52,242,37,27,101,223,
    247,99,203,13,123,210,57,147,84,72,164,100,237,253,172,114,
    80,107,245,204,148,129,217,249,2,3,56,160,110,207,184,210,
    85,99,7,195,200,59,145,126,54,190,58,59,254,40,26,185,
    104,155,41,133,78,160,41,144,43,248,49,205,146,70,16,10,
    129,59,12,190,150,92,14,204,106,128,115,112,74,186,253,150,
    218,154,65,23,203,94,128,106,80,50,204,126,156,133,17,2,
    2,223,84,21,99,108,241,211,57,33,84,21,198,234,86,224,
    33,43,226,25,54,116,83,86,93,169,138,138,65,55,179,166,
    168,137,186,40,137,229,122,213,172,86,170,101,19,81,76,35,
    235,162,102,86,107,203,226,77,255,219,136,243,154,177,93,171,
    138,255,2,246,197,161,116,
};

EmbeddedPython embedded_m5_internal_param_I8237(
    "m5/internal/param_I8237.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_I8237.py",
    "m5.internal.param_I8237",
    data_m5_internal_param_I8237,
    2215,
    6703);

} // anonymous namespace
