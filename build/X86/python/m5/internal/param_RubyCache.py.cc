#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyCache[] = {
    120,156,205,89,95,115,219,198,17,223,3,72,202,164,69,139,
    250,111,217,114,204,196,81,194,184,177,153,166,73,156,182,30,
    79,29,215,233,36,147,202,46,232,142,29,166,45,10,1,71,
    9,18,8,112,128,147,109,102,164,151,202,211,246,173,31,162,
    211,135,126,143,126,175,118,119,15,7,81,20,229,106,166,29,
    51,18,121,115,216,91,236,221,238,254,118,247,238,232,67,254,
    87,198,239,47,154,0,217,166,0,8,240,35,32,2,232,11,
    232,10,16,82,64,176,8,123,101,72,63,129,160,12,175,0,
    186,22,72,11,142,176,99,195,119,22,196,179,252,78,5,34,
    155,41,2,134,53,144,37,232,150,225,105,60,15,37,89,129,
    189,26,164,127,4,33,68,44,224,89,48,3,193,5,120,133,
    210,177,83,101,129,23,32,168,113,167,10,193,69,238,212,96,
    216,0,121,17,186,40,124,6,186,117,20,117,19,69,93,98,
    81,255,34,81,1,142,44,65,80,39,118,92,203,183,196,89,
    34,78,158,227,18,75,153,51,43,107,64,183,97,250,243,208,
    157,55,253,5,232,46,64,48,7,178,1,187,139,208,67,85,
    27,133,188,37,144,54,236,46,67,119,25,36,126,150,224,8,
    173,17,204,51,239,10,243,46,20,188,171,204,123,25,186,151,
    65,226,103,85,243,86,160,211,90,70,219,134,255,198,191,22,
    218,22,212,44,54,207,101,154,133,73,236,134,113,47,9,45,
    26,175,80,67,158,240,169,153,201,93,242,128,92,242,79,96,
    127,4,86,238,146,67,64,193,130,214,31,89,112,200,157,67,
    11,134,45,56,16,176,91,130,192,134,3,156,166,76,11,216,
    22,112,100,193,239,108,98,56,196,182,132,70,124,11,74,74,
    251,99,151,141,168,37,205,192,97,25,14,202,208,121,118,96,
    17,97,175,10,233,63,224,251,117,22,122,129,133,90,112,128,
    109,9,142,74,112,88,129,167,200,132,164,221,42,169,47,158,
    29,160,166,72,233,180,74,184,218,205,17,117,73,149,32,76,
    99,175,47,85,3,251,238,192,75,189,190,235,236,111,13,31,
    120,254,142,108,213,12,87,146,221,30,120,106,199,225,215,108,
    178,71,127,160,88,92,18,75,117,17,59,189,48,14,220,126,
    18,236,71,82,93,32,89,110,47,140,164,235,242,224,87,253,
    65,146,170,135,105,154,164,14,153,148,137,81,226,21,111,144,
    65,253,40,201,100,139,102,227,105,28,18,175,136,187,55,96,
    137,180,0,94,42,189,28,200,204,79,195,129,66,79,105,137,
    196,77,210,90,228,35,110,178,109,108,218,251,25,250,115,224,
    249,178,29,180,131,94,47,204,118,100,218,126,248,224,225,157,
    79,239,180,191,252,106,243,254,55,238,99,231,209,215,15,31,
    60,201,137,183,80,17,47,106,111,237,135,81,208,126,246,249,
    103,237,193,80,237,36,113,187,255,105,59,140,149,76,105,112,
    204,76,183,145,101,129,38,124,17,110,187,33,171,234,238,200,
    104,32,83,90,105,118,133,22,35,26,98,86,84,132,45,90,
    162,142,189,50,126,109,177,110,93,20,155,33,41,235,147,1,
    8,103,182,65,214,223,129,125,136,16,216,179,32,93,39,220,
    236,226,71,144,163,17,61,29,26,179,120,236,55,100,37,77,
    221,181,9,13,154,120,192,88,67,208,33,231,93,114,127,12,
    12,152,50,236,86,64,3,9,241,167,145,149,14,169,69,118,
    18,99,161,240,18,100,127,59,41,33,110,0,122,1,99,24,
    73,43,56,213,159,24,155,157,22,45,124,147,49,162,118,194,
    44,121,17,179,39,168,207,209,212,65,155,60,30,62,218,218,
    149,190,202,174,35,225,219,100,191,233,123,113,156,168,166,23,
    4,77,79,169,52,220,218,87,50,107,170,164,185,145,181,170,
    228,250,121,3,179,66,222,112,96,96,69,16,64,88,233,135,
    32,244,21,62,44,242,3,219,63,147,10,33,178,147,4,25,
    210,73,196,182,84,14,45,82,93,194,230,190,153,142,177,216,
    170,24,228,100,50,234,169,26,131,208,203,50,151,167,35,58,
    227,141,222,126,238,69,251,82,17,127,166,60,133,179,82,87,
    79,52,37,196,93,38,157,141,202,100,70,55,78,226,96,136,
    43,14,253,27,180,152,203,140,187,89,32,228,45,35,234,102,
    176,173,64,29,81,216,176,124,82,174,148,99,142,241,182,66,
    166,0,198,128,200,243,9,98,239,8,179,78,203,226,180,193,
    90,114,96,54,169,71,47,59,4,109,231,42,53,235,212,92,
    51,134,120,243,214,168,143,91,227,35,90,129,197,38,240,237,
    92,217,34,184,54,79,4,215,218,113,112,97,190,236,80,144,
    88,20,74,199,65,98,147,57,210,123,121,68,80,248,33,40,
    112,120,36,14,216,72,14,101,81,70,21,67,216,33,92,142,
    130,115,123,4,156,14,249,135,145,233,172,157,101,208,235,63,
    4,131,110,107,131,254,132,86,48,155,99,170,206,88,170,9,
    159,0,97,229,230,101,211,254,18,59,195,85,50,237,168,81,
    87,177,22,62,141,235,92,212,184,48,242,54,64,231,23,109,
    107,221,41,17,250,122,54,172,228,197,42,163,116,48,72,147,
    151,195,102,210,107,42,48,107,184,187,145,221,222,200,126,142,
    9,163,121,143,83,144,78,25,58,41,164,114,144,98,240,87,
    249,65,7,180,203,193,237,230,229,6,141,79,133,159,125,198,
    38,231,252,149,169,148,210,214,148,236,93,43,236,77,203,255,
    41,77,95,99,99,219,176,138,223,154,224,53,186,9,103,82,
    222,136,240,40,126,191,32,179,147,230,18,104,75,232,116,180,
    6,172,28,169,233,188,127,2,69,111,92,53,231,38,45,210,
    132,99,5,10,204,208,215,166,197,83,132,252,5,120,211,38,
    224,207,64,248,64,24,228,49,197,209,75,95,114,243,34,177,
    255,1,56,73,77,40,141,150,142,77,43,79,99,24,186,217,
    29,102,213,149,242,107,248,235,72,134,59,178,65,80,85,179,
    243,109,217,104,85,43,21,209,204,192,58,87,229,42,157,12,
    123,114,215,142,151,17,155,14,112,187,8,240,227,100,89,236,
    167,48,107,189,121,204,93,208,19,187,180,198,95,29,35,142,
    74,198,85,177,104,141,224,232,67,106,110,21,16,18,134,246,
    70,151,123,125,60,199,143,84,60,87,231,213,47,105,77,37,
    214,98,174,194,27,69,126,251,215,178,159,164,195,34,106,202,
    38,106,62,46,162,70,114,174,127,197,187,121,106,45,2,197,
    145,37,240,200,132,123,30,58,173,148,64,150,161,91,161,248,
    226,221,170,200,195,79,152,204,71,25,243,68,33,97,51,109,
    106,3,22,184,208,46,167,230,229,148,50,13,121,253,110,228,
    245,183,2,239,222,19,154,156,86,224,155,128,180,140,58,141,
    81,117,40,152,196,89,26,241,227,71,70,173,231,83,202,50,
    63,198,185,10,117,56,166,130,196,231,212,242,100,71,54,251,
    178,191,133,203,216,9,7,205,94,228,109,179,247,236,92,221,
    71,70,93,197,238,31,47,234,25,229,175,205,164,233,39,49,
    150,136,125,95,37,105,51,144,184,72,25,52,111,53,185,190,
    52,195,172,233,109,225,168,231,43,29,28,39,35,158,247,146,
    94,186,157,241,182,113,239,5,117,167,232,125,23,15,183,33,
    238,155,127,107,204,165,79,93,69,177,224,173,178,142,52,172,
    189,120,142,81,67,157,11,63,163,230,3,106,54,96,186,53,
    165,141,115,117,104,82,50,104,5,211,85,85,168,57,90,152,
    97,122,76,239,100,167,67,254,19,113,142,144,215,247,35,121,
    224,87,136,83,206,208,81,155,218,42,149,149,110,205,16,47,
    114,59,203,196,186,33,94,226,118,142,137,13,67,156,231,118,
    129,137,139,134,184,196,237,50,19,87,12,113,149,219,203,76,
    92,51,196,43,220,94,101,226,186,33,94,227,246,45,38,94,
    55,196,38,183,111,51,241,29,67,188,193,237,187,76,220,48,
    196,247,184,125,159,137,45,115,127,244,1,19,111,66,247,71,
    116,9,67,148,15,41,233,205,252,175,73,143,83,196,20,147,
    195,119,255,215,92,231,124,252,3,209,198,225,141,249,235,242,
    156,24,85,181,174,243,220,174,48,39,153,81,61,249,38,101,
    229,116,24,185,126,42,61,37,181,27,175,76,77,113,206,158,
    122,41,191,47,156,105,180,43,14,119,119,10,13,143,120,43,
    57,92,26,57,102,176,111,197,83,220,247,225,81,228,128,141,
    224,90,250,52,114,12,222,82,97,11,50,107,44,95,184,99,
    246,208,167,13,90,141,55,24,200,56,56,62,73,240,200,148,
    96,65,217,153,142,233,102,27,135,199,134,37,252,158,14,90,
    210,111,68,93,246,106,185,8,211,233,249,151,129,29,27,207,
    182,104,191,121,92,148,28,242,171,46,67,69,5,114,126,86,
    120,106,109,2,106,177,50,39,62,157,95,95,51,138,91,73,
    190,224,225,39,181,49,129,47,240,148,119,223,247,101,150,125,
    131,192,139,253,33,75,60,31,39,73,39,68,156,26,81,239,
    156,245,126,154,122,195,47,188,120,47,227,105,206,193,70,115,
    92,50,115,20,100,117,109,194,155,33,126,124,122,102,217,175,
    231,32,177,116,132,46,40,234,234,4,254,104,196,36,175,27,
    39,105,84,65,242,103,245,222,4,94,60,248,70,8,177,190,
    140,149,59,72,162,48,23,123,78,86,154,129,110,97,79,15,
    77,52,98,42,179,100,63,245,101,71,121,81,116,182,173,199,
    216,140,173,79,146,249,46,110,252,205,44,252,94,155,249,204,
    65,18,198,151,143,248,160,110,76,226,82,94,170,112,175,22,
    200,151,238,22,110,216,72,218,121,248,72,48,109,134,198,232,
    234,221,9,239,42,111,251,52,184,207,197,72,179,240,174,121,
    108,64,189,125,198,219,39,145,253,223,185,104,130,122,62,65,
    65,229,44,199,53,42,144,145,84,114,60,53,235,31,50,244,
    230,53,144,184,37,79,134,174,171,239,78,240,57,114,221,105,
    238,90,63,199,185,186,52,41,65,141,118,173,21,220,183,46,
    79,252,175,150,170,130,15,16,99,191,65,233,149,83,62,211,
    247,6,195,204,33,138,51,87,100,66,254,173,196,108,219,185,
    24,82,24,111,122,125,125,233,205,215,183,14,91,255,134,73,
    166,92,202,244,213,18,223,214,232,187,51,44,124,124,186,225,
    195,140,115,155,232,52,139,214,171,19,246,245,173,62,103,207,
    32,245,80,111,122,11,13,25,122,17,33,154,158,10,46,222,
    176,115,40,140,28,200,217,75,169,220,14,51,52,25,203,46,
    248,243,58,75,6,83,235,147,32,63,242,230,20,61,170,15,
    211,250,86,241,30,171,127,23,27,186,113,175,206,85,69,197,
    162,95,121,108,81,19,117,81,18,179,245,170,93,173,84,203,
    54,122,157,40,139,162,102,87,107,179,130,254,215,208,219,53,
    107,109,185,42,254,3,166,105,0,1,
};

EmbeddedPython embedded_m5_internal_param_RubyCache(
    "m5/internal/param_RubyCache.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_RubyCache.py",
    "m5.internal.param_RubyCache",
    data_m5_internal_param_RubyCache,
    2394,
    7671);

} // anonymous namespace
