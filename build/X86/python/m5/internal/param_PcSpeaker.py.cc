#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_PcSpeaker[] = {
    120,156,205,88,235,114,219,198,21,62,11,144,148,72,137,150,
    100,221,44,91,182,225,56,158,178,153,218,76,221,56,118,91,
    143,167,138,236,116,156,73,36,5,244,140,29,180,83,4,2,
    150,20,40,18,224,0,43,57,204,72,127,42,79,219,127,125,
    136,78,127,244,61,250,28,125,149,246,156,179,0,72,202,151,
    201,76,51,102,36,98,231,96,119,177,123,46,223,185,236,250,
    144,253,149,241,249,157,5,144,254,71,0,4,248,19,208,3,
    232,11,112,4,8,41,32,88,134,195,50,36,159,64,80,134,
    87,0,142,1,210,128,51,36,76,248,131,1,209,60,127,83,
    129,158,201,61,2,134,53,144,37,112,202,240,60,90,130,146,
    172,192,97,13,146,111,65,8,17,9,120,17,204,64,48,11,
    175,112,117,36,170,188,224,44,4,53,38,170,16,204,49,81,
    131,225,34,200,57,112,112,241,25,112,234,184,212,71,184,212,
    5,94,234,223,180,84,128,35,43,16,212,105,58,242,242,13,
    205,44,209,76,222,227,2,175,178,144,115,182,8,206,98,78,
    47,129,179,148,211,23,193,185,152,211,203,224,44,231,244,10,
    56,43,57,189,10,206,106,78,175,129,179,150,211,235,224,172,
    231,244,37,112,46,229,244,6,56,27,57,125,25,156,203,57,
    125,5,156,43,57,189,9,206,102,78,95,5,231,106,78,95,
    3,231,26,4,11,32,87,161,123,29,218,168,250,197,66,62,
    11,164,9,221,27,224,220,0,137,63,11,206,208,58,193,18,
    207,253,128,231,94,44,230,222,228,185,31,130,243,33,72,252,
    221,212,115,43,208,106,172,162,173,195,255,226,95,3,109,13,
    106,30,155,99,153,164,97,28,185,97,212,142,67,131,198,43,
    212,16,50,124,106,102,50,136,108,19,68,254,5,140,143,192,
    200,32,114,10,184,176,32,254,123,6,156,50,113,106,192,176,
    1,39,2,186,37,8,76,56,193,109,202,196,64,71,192,153,
    1,127,52,105,194,41,182,37,52,234,53,40,41,141,143,46,
    27,85,175,52,3,167,101,56,41,67,235,197,137,65,29,135,
    85,72,254,9,223,111,242,162,179,188,168,1,39,216,150,224,
    172,4,167,21,120,142,147,176,171,91,37,241,197,139,19,148,
    20,123,90,141,18,114,187,51,38,46,137,18,132,73,228,245,
    165,90,68,218,29,120,137,215,119,247,252,214,64,122,135,50,
    105,212,242,89,113,122,103,224,169,3,155,63,51,73,31,253,
    129,226,229,226,72,170,57,36,218,97,20,184,253,56,56,234,
    73,53,75,107,185,237,176,39,93,151,7,159,246,7,113,162,
    158,36,73,156,216,164,82,238,236,197,94,241,5,41,212,239,
    197,169,108,208,110,188,141,77,203,43,154,221,30,240,138,196,
    0,179,74,31,7,50,245,147,112,160,208,82,122,69,154,77,
    171,53,200,70,220,164,29,108,154,71,41,218,115,224,249,178,
    25,52,131,118,59,76,15,100,210,124,178,253,228,254,189,251,
    205,207,159,238,108,125,233,238,217,187,95,60,217,126,150,117,
    222,70,65,188,94,115,255,40,236,5,205,23,15,62,109,14,
    134,234,32,142,154,253,123,205,48,82,50,161,193,115,106,186,
    131,83,46,210,134,47,195,142,27,178,168,238,129,236,13,100,
    66,156,166,151,137,25,177,40,230,69,69,152,162,33,234,72,
    149,241,49,197,166,49,39,118,66,18,214,39,5,16,206,204,
    28,89,255,0,182,33,66,224,208,128,100,147,112,211,197,159,
    32,67,35,122,90,52,102,240,216,215,164,37,221,219,53,9,
    13,186,243,132,177,134,160,195,153,15,201,252,17,48,96,202,
    208,173,128,6,18,226,79,35,43,25,82,139,211,105,25,3,
    23,47,65,250,247,201,21,162,69,64,43,96,76,193,174,53,
    220,234,207,140,205,86,131,24,223,97,140,168,131,48,141,95,
    70,108,9,162,217,155,90,168,147,189,225,238,126,87,250,42,
    189,142,29,223,196,71,150,239,69,81,172,44,47,8,44,79,
    169,36,220,63,82,50,181,84,108,221,74,27,85,50,253,82,
    14,179,98,189,225,32,135,21,65,0,97,165,95,130,208,87,
    248,178,204,47,172,255,84,42,132,200,65,28,164,216,79,75,
    116,164,178,137,73,117,1,155,173,124,59,198,98,163,146,35,
    39,149,189,182,170,49,8,189,52,117,121,59,234,103,188,209,
    215,199,94,239,72,42,154,159,42,79,225,174,68,234,141,166,
    132,184,75,36,115,46,50,169,209,141,226,40,24,34,199,161,
    127,147,152,185,196,184,155,7,66,222,42,162,110,6,219,10,
    212,17,133,139,134,79,194,149,50,204,49,222,214,72,21,192,
    24,16,89,60,65,236,157,97,212,105,24,28,54,88,74,118,
    76,139,40,250,216,38,104,219,87,168,217,164,230,106,174,136,
    247,175,141,250,121,109,124,76,28,24,172,2,223,204,132,45,
    156,107,103,194,185,54,70,206,133,241,178,69,78,98,144,43,
    141,156,196,36,117,36,143,50,143,32,247,67,80,224,240,152,
    31,176,146,108,138,162,140,42,134,176,77,184,28,7,103,103,
    12,156,54,217,135,145,105,111,188,77,161,215,127,10,10,237,
    104,133,254,138,56,152,207,48,85,103,44,213,132,79,128,48,
    50,245,178,106,31,35,49,92,39,213,142,43,117,29,115,225,
    243,168,206,73,141,19,35,151,37,58,190,104,93,107,162,68,
    232,107,155,176,150,37,171,148,194,193,32,137,191,27,90,113,
    219,82,144,243,240,240,86,122,231,86,250,91,12,24,214,35,
    14,65,58,100,232,160,144,200,65,130,206,95,229,23,237,208,
    46,59,183,155,165,27,84,62,37,126,182,25,171,156,227,87,
    170,18,10,91,83,210,119,173,208,55,177,255,107,218,190,198,
    202,54,97,29,159,154,96,30,221,152,35,41,23,34,60,138,
    207,103,164,118,146,92,2,149,168,118,75,75,192,194,145,152,
    246,207,38,80,244,222,69,179,63,34,38,115,119,172,64,129,
    25,122,76,98,158,60,228,175,192,69,155,128,191,0,225,3,
    97,144,249,20,123,47,61,100,230,101,154,254,39,224,32,245,
    134,212,104,104,223,52,178,48,134,174,155,222,231,169,58,83,
    126,1,127,27,139,112,103,38,8,202,106,102,86,150,141,103,
    181,82,225,205,12,172,31,148,185,74,147,110,79,230,58,240,
    82,154,166,29,220,44,28,124,20,44,139,122,10,163,214,251,
    199,220,172,222,216,37,30,127,63,66,28,165,140,43,98,217,
    24,195,209,47,168,185,93,64,72,228,125,239,149,221,235,231,
    99,252,88,198,115,117,92,253,156,120,42,177,20,11,21,69,
    232,199,229,159,182,182,220,237,221,47,119,119,90,110,182,90,
    225,63,229,220,127,238,22,254,35,57,234,191,226,186,158,90,
    131,224,113,102,8,60,204,97,245,67,231,168,18,200,50,56,
    21,242,52,174,91,69,230,136,34,143,129,20,59,39,82,10,
    43,108,71,171,178,64,136,54,62,53,223,77,41,230,144,253,
    31,246,188,254,126,224,61,250,150,54,39,14,252,220,53,141,
    92,156,197,113,113,200,173,196,219,36,226,215,143,115,177,142,
    167,20,111,126,137,123,21,226,176,119,5,177,207,65,230,217,
    129,180,250,178,191,143,108,28,132,3,171,221,243,58,108,61,
    51,19,119,55,23,87,177,249,207,167,247,148,34,217,78,108,
    249,113,132,201,226,200,87,113,98,5,18,153,148,129,117,219,
    226,76,99,133,169,229,237,227,168,231,43,237,38,147,190,207,
    85,165,151,116,82,46,32,15,95,18,57,69,235,187,120,204,
    13,177,130,246,114,117,233,243,87,145,54,184,104,214,62,135,
    89,24,79,52,106,168,163,226,167,212,252,156,154,91,48,221,
    236,210,36,14,105,83,82,104,5,3,87,85,168,5,36,139,
    73,123,244,77,250,186,203,239,255,16,151,215,55,55,153,227,
    87,104,166,156,161,67,55,181,85,74,48,78,45,191,7,154,
    227,206,121,186,116,9,42,220,115,129,66,196,204,255,27,34,
    216,161,166,232,74,157,31,53,50,216,119,127,34,210,216,92,
    208,190,43,42,136,113,81,235,58,42,116,69,126,2,24,151,
    147,111,32,214,94,7,157,235,39,210,83,82,155,241,242,212,
    4,231,88,163,89,9,11,99,230,210,21,135,162,251,133,132,
    103,92,130,13,87,198,202,115,182,173,120,142,245,18,150,240,
    39,172,4,215,208,85,252,8,188,165,66,23,164,214,72,190,
    116,207,233,67,87,233,196,141,55,24,200,40,24,85,224,60,
    50,37,88,80,44,59,132,81,249,131,229,246,10,62,175,59,
    45,201,55,38,46,91,181,92,184,233,244,236,203,192,30,228,
    150,109,80,244,27,133,112,155,236,170,131,118,17,175,237,223,
    20,150,218,120,3,106,195,7,119,239,125,66,231,190,119,140,
    98,9,198,23,35,252,198,42,100,7,8,100,79,42,121,222,
    238,250,118,81,231,145,64,98,118,140,135,120,36,227,3,13,
    190,247,92,119,154,9,228,1,238,213,166,77,41,215,81,2,
    169,96,10,89,21,213,82,85,112,222,62,119,9,172,185,36,
    45,234,194,125,152,218,28,78,22,10,149,242,101,101,158,45,
    217,171,232,40,186,227,245,245,173,19,223,159,216,55,168,185,
    153,91,133,125,66,159,237,248,184,164,15,175,232,65,92,84,
    112,13,97,223,129,236,226,84,203,240,148,20,207,37,174,126,
    167,66,55,82,173,248,40,241,229,30,202,187,80,140,180,194,
    190,190,128,99,131,5,137,135,163,180,62,170,55,244,122,225,
    247,82,173,20,115,63,243,210,208,223,11,227,199,242,56,244,
    229,216,34,163,190,249,209,194,195,84,201,62,79,146,209,81,
    223,253,74,246,227,100,248,85,28,232,235,228,173,32,72,108,
    47,234,72,247,88,82,173,196,204,110,101,197,145,158,155,143,
    140,24,152,28,31,99,0,59,50,41,150,139,190,237,94,236,
    31,202,32,235,95,154,236,127,28,247,73,82,178,234,164,84,
    92,50,168,15,224,45,135,3,134,105,34,59,33,10,167,57,
    155,252,60,11,101,4,27,181,249,6,255,24,255,124,138,184,
    214,213,189,190,240,120,196,230,126,134,13,93,6,86,23,170,
    162,98,208,5,180,41,106,162,46,74,98,190,94,53,171,149,
    106,217,68,236,83,207,178,168,153,213,218,188,120,215,255,6,
    250,71,205,216,152,171,138,255,1,112,46,9,184,
};

EmbeddedPython embedded_m5_internal_param_PcSpeaker(
    "m5/internal/param_PcSpeaker.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_PcSpeaker.py",
    "m5.internal.param_PcSpeaker",
    data_m5_internal_param_PcSpeaker,
    2285,
    6970);

} // anonymous namespace