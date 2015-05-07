#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherLink[] = {
    120,156,205,89,109,115,219,198,17,222,3,64,74,164,68,139,
    122,183,100,57,102,38,227,9,155,169,77,39,109,226,180,245,
    120,146,58,74,38,153,140,236,66,73,228,176,105,81,8,56,
    74,160,72,128,3,156,236,48,35,125,169,60,109,191,245,71,
    116,250,161,255,163,223,250,163,218,221,61,28,4,189,121,146,
    105,198,140,69,220,28,238,22,123,251,242,236,222,222,57,128,
    252,95,5,159,15,90,0,89,79,0,132,248,19,48,0,24,
    10,232,10,16,82,64,184,8,7,21,72,127,9,97,5,94,
    0,116,45,144,22,156,96,199,134,223,91,16,207,242,55,85,
    24,216,60,34,96,92,7,233,64,183,2,59,241,60,56,178,
    10,7,117,72,255,4,66,136,88,192,211,112,10,194,105,120,
    129,220,177,83,99,134,211,16,214,185,83,131,112,134,59,117,
    24,55,65,206,64,23,153,79,65,183,129,172,222,66,86,215,
    152,213,191,137,85,136,51,75,16,54,136,28,101,249,154,40,
    29,162,228,53,174,49,151,57,35,89,19,186,77,211,159,135,
    238,188,233,47,64,119,193,244,23,161,187,104,250,75,208,69,
    222,115,32,151,160,191,12,104,150,176,89,172,179,2,210,134,
    254,42,116,87,65,226,111,5,78,208,74,225,60,211,94,103,
    218,133,130,118,141,105,215,161,187,14,18,127,107,154,182,10,
    219,237,101,180,121,244,95,252,215,70,155,131,154,197,230,153,
    76,179,40,137,189,40,238,37,145,69,243,85,106,200,67,1,
    53,83,185,171,30,145,171,254,5,236,167,208,202,93,117,12,
    200,88,144,252,3,11,142,185,115,108,193,184,13,71,2,250,
    14,132,54,28,225,50,21,18,96,79,192,137,5,223,216,68,
    112,140,173,131,198,125,13,28,165,253,212,103,227,106,78,83,
    112,92,129,163,10,108,63,61,178,104,224,160,6,233,63,225,
    187,13,102,58,205,76,45,56,194,214,129,19,7,142,171,176,
    131,68,56,212,175,145,250,226,233,17,106,138,35,219,109,7,
    165,221,42,169,75,170,132,81,26,251,67,169,154,216,247,70,
    126,234,15,189,77,181,47,211,207,163,248,160,93,55,84,73,
    118,119,228,171,125,151,63,179,201,30,195,145,98,118,73,44,
    213,12,118,122,81,28,122,195,36,60,28,72,53,77,188,188,
    94,52,144,158,199,147,159,14,71,73,170,54,211,52,73,93,
    50,41,15,14,18,191,248,130,12,26,12,146,76,182,105,53,
    94,198,37,246,138,168,123,35,230,72,2,176,168,244,113,40,
    179,32,141,70,10,61,165,57,18,53,113,107,147,143,184,201,
    246,176,233,28,102,232,207,145,31,200,78,216,9,123,189,40,
    67,221,58,155,143,54,239,191,123,191,243,241,167,91,31,126,
    238,61,113,31,127,182,249,232,139,124,240,14,42,226,15,58,
    187,135,209,32,236,60,125,255,189,206,104,172,246,147,184,51,
    124,183,19,197,74,166,52,121,206,76,119,145,100,129,22,124,
    30,237,121,17,171,234,237,203,193,72,166,36,105,182,78,194,
    136,166,152,21,85,97,139,182,104,96,175,130,143,45,54,172,
    25,177,21,145,178,1,25,128,112,102,27,100,253,3,216,135,
    8,129,3,11,210,13,194,77,31,127,130,28,141,232,217,166,
    57,139,231,126,71,86,210,163,125,155,208,160,7,143,24,107,
    8,58,164,124,64,238,143,129,1,83,129,126,21,52,144,16,
    127,26,89,233,152,90,36,39,54,22,50,119,32,251,251,89,
    14,113,19,208,11,24,219,56,180,130,75,253,153,177,185,221,
    38,193,183,24,35,106,63,202,146,231,49,123,130,250,28,77,
    219,104,147,39,227,199,187,125,25,168,236,22,14,124,157,28,
    182,2,63,142,19,213,242,195,176,229,43,149,70,187,135,74,
    102,45,149,180,110,103,237,26,185,126,222,192,172,224,55,30,
    25,88,17,4,16,86,250,37,140,2,133,47,139,252,194,246,
    207,164,66,136,236,39,97,134,227,196,98,79,42,151,132,84,
    215,176,249,208,44,199,88,108,87,13,114,50,57,232,169,58,
    131,208,207,50,143,151,163,113,198,27,125,253,204,31,28,74,
    69,244,153,242,21,174,74,93,189,208,132,16,119,157,116,54,
    42,147,25,189,56,137,195,49,74,28,5,111,144,48,215,25,
    119,179,64,200,91,70,212,77,97,91,133,6,162,176,105,5,
    164,156,147,99,142,241,182,66,166,0,198,128,200,243,9,98,
    239,4,179,78,219,226,180,193,90,114,96,182,168,71,31,187,
    4,109,247,6,53,27,212,220,52,134,120,245,214,104,156,183,
    198,61,146,192,98,19,4,118,174,108,17,92,91,103,130,107,
    237,52,184,48,95,110,83,144,88,20,74,167,65,98,147,57,
    210,135,121,68,80,248,33,40,112,186,20,7,108,36,151,178,
    40,163,138,33,236,18,46,203,224,220,43,129,211,37,255,48,
    50,221,181,171,12,122,235,167,96,208,61,109,208,95,144,4,
    179,57,166,26,140,165,186,8,8,16,86,110,94,54,237,71,
    216,25,175,146,105,203,70,93,197,189,112,39,110,240,166,198,
    27,35,151,7,58,191,104,91,235,142,67,232,235,217,176,146,
    111,86,25,165,131,81,154,124,59,110,37,189,150,2,35,195,
    131,219,217,221,219,217,111,48,97,180,30,114,10,210,41,67,
    39,133,84,142,82,12,254,26,191,232,128,246,56,184,189,124,
    187,65,227,211,198,207,62,99,147,115,254,202,84,74,105,107,
    66,246,174,23,246,38,241,127,69,203,215,217,216,54,172,226,
    83,23,44,163,151,112,38,229,66,132,103,241,249,45,153,157,
    52,151,64,165,162,187,173,53,96,229,72,77,247,205,51,40,
    122,229,170,185,111,145,144,38,28,171,80,96,134,30,155,132,
    167,8,249,43,112,209,38,224,47,64,248,64,24,228,49,197,
    209,75,15,185,121,145,200,255,8,156,164,46,217,26,45,29,
    155,86,158,198,48,116,179,251,76,170,119,202,207,224,111,165,
    12,119,98,131,160,93,205,206,203,178,242,174,230,20,209,204,
    192,250,94,59,151,115,54,236,201,93,251,126,70,100,58,192,
    237,34,192,79,147,101,81,79,97,214,122,245,152,155,214,11,
    123,36,227,39,167,136,163,45,227,134,88,180,74,56,250,57,
    53,119,10,8,9,51,246,74,197,189,117,62,199,151,118,60,
    79,231,213,143,73,38,135,181,152,171,114,6,40,56,20,49,
    83,49,49,243,78,17,51,146,51,253,11,174,229,169,181,8,
    18,39,150,192,131,20,86,60,116,134,113,64,86,160,91,165,
    232,226,90,85,228,193,39,76,222,163,124,121,102,27,97,35,
    109,105,243,21,168,208,14,167,230,219,9,229,25,242,249,131,
    129,63,220,13,253,135,95,209,226,36,65,96,194,209,50,234,
    52,203,234,80,40,137,171,52,226,215,123,70,173,103,19,202,
    49,111,227,90,133,58,28,81,97,18,112,98,249,98,95,182,
    134,114,184,139,98,236,71,163,86,111,224,239,177,247,236,92,
    221,199,70,93,197,238,63,191,165,103,148,189,182,146,86,144,
    196,184,65,28,6,42,73,91,161,68,33,101,216,186,211,226,
    221,165,21,101,45,127,23,103,253,64,233,208,56,27,239,92,
    73,250,233,94,198,69,227,193,115,234,78,208,251,30,30,109,
    35,172,154,119,140,185,244,153,171,216,42,184,80,214,113,134,
    59,47,158,98,212,88,103,194,247,168,249,25,53,183,97,178,
    59,74,7,215,250,146,22,37,131,86,49,89,213,132,154,43,
    7,251,19,250,38,187,24,242,255,249,62,33,175,111,77,242,
    192,175,18,165,156,162,131,54,181,53,218,84,186,117,51,56,
    195,237,44,15,54,204,224,53,110,231,120,176,105,6,231,185,
    93,224,193,69,51,184,196,237,50,15,174,152,193,85,110,175,
    243,224,154,185,236,89,231,193,27,208,221,160,155,17,26,185,
    73,185,104,234,255,205,69,28,185,19,140,217,63,252,168,41,
    200,125,231,39,162,141,203,213,242,203,210,143,40,171,218,208,
    233,167,47,204,241,162,172,39,95,111,172,92,68,183,23,164,
    210,87,82,187,113,125,98,138,115,82,211,162,120,133,51,141,
    118,197,137,235,126,161,225,9,215,119,227,165,82,237,207,190,
    21,59,88,140,225,249,224,136,141,224,89,250,136,112,10,94,
    167,176,5,153,53,150,207,189,115,246,208,71,0,146,198,31,
    141,100,28,158,150,247,60,51,33,88,80,210,236,193,105,109,
    133,181,252,18,62,23,131,150,244,43,169,203,94,173,20,97,
    58,57,255,50,176,15,140,103,219,175,65,121,175,112,201,175,
    122,119,40,54,6,247,215,133,167,214,46,65,109,40,7,254,
    152,14,149,47,153,197,250,142,111,93,248,77,221,188,146,238,
    153,159,50,167,151,83,16,183,154,225,70,35,124,119,114,129,
    254,112,56,98,102,87,78,18,31,246,18,190,92,42,124,54,
    146,50,188,82,53,61,107,84,227,55,117,247,18,58,190,63,
    68,135,188,237,97,205,17,227,105,143,110,163,131,228,48,86,
    204,250,7,126,66,235,17,120,174,38,121,41,199,123,63,92,
    136,75,62,57,47,196,69,18,142,19,206,114,232,37,137,169,
    228,28,119,125,63,173,171,146,80,98,173,149,140,241,80,207,
    71,98,242,180,231,77,178,28,121,31,215,250,6,242,43,55,
    42,71,170,88,144,44,151,254,106,78,77,112,61,120,238,63,
    20,180,188,116,223,163,15,129,227,204,229,221,99,174,136,32,
    190,248,54,85,24,39,81,66,242,150,63,212,55,152,124,23,
    231,190,78,205,27,38,8,57,5,234,123,2,62,122,235,139,
    16,76,152,92,172,114,109,234,146,255,184,98,42,105,243,17,
    193,250,116,108,59,26,234,107,91,29,137,169,143,22,32,78,
    104,210,200,31,68,223,73,53,127,246,251,156,122,198,64,67,
    191,115,173,118,118,251,98,47,166,114,47,202,208,164,204,165,
    68,159,231,114,50,169,218,184,44,138,74,223,78,208,231,250,
    28,165,175,147,30,178,89,62,192,134,174,90,107,115,53,81,
    181,232,122,223,22,117,209,16,142,152,109,212,236,90,181,86,
    177,17,23,52,178,40,234,118,173,62,43,204,223,26,162,163,
    110,173,53,107,226,127,241,235,103,200,
};

EmbeddedPython embedded_m5_internal_param_EtherLink(
    "m5/internal/param_EtherLink.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_EtherLink.py",
    "m5.internal.param_EtherLink",
    data_m5_internal_param_EtherLink,
    2250,
    7180);

} // anonymous namespace