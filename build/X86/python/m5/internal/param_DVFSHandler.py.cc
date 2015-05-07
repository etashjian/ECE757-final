#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DVFSHandler[] = {
    120,156,205,88,91,115,219,198,21,62,11,144,148,72,137,18,
    117,151,109,217,102,39,241,148,205,212,102,154,54,113,218,122,
    60,77,125,105,146,233,200,46,152,137,29,164,83,4,2,150,
    34,40,16,224,0,43,59,204,72,47,149,167,237,91,223,250,
    222,233,244,161,255,35,255,171,61,231,44,22,162,46,73,61,
    147,78,25,91,220,89,44,14,206,158,203,119,46,187,1,20,
    255,170,248,251,85,27,32,255,155,0,8,241,79,64,12,48,
    18,224,10,16,82,64,184,6,7,85,200,126,6,97,21,94,
    1,184,22,72,11,78,112,98,195,231,22,36,139,252,77,13,
    98,155,87,4,76,26,32,43,224,86,225,89,178,2,21,89,
    131,131,6,100,95,128,16,34,17,240,60,156,131,112,30,94,
    33,119,156,212,153,225,60,132,13,158,212,33,92,224,73,3,
    38,45,144,11,224,34,243,57,112,155,200,234,45,100,181,196,
    172,190,38,86,33,190,89,135,176,73,228,40,203,103,68,89,
    33,74,222,99,137,185,44,27,201,90,224,182,204,124,5,220,
    21,51,95,5,119,213,204,215,192,93,51,243,117,112,215,205,
    124,3,220,13,51,223,4,119,211,204,183,192,221,50,243,109,
    112,183,33,92,6,185,1,195,43,208,71,147,181,74,185,174,
    130,180,97,120,13,220,107,32,241,239,42,156,160,85,195,21,
    166,221,97,218,213,146,246,58,211,222,0,247,6,72,252,187,
    174,105,107,208,235,108,160,143,162,127,227,191,14,250,8,212,
    34,14,47,100,150,71,105,226,69,73,63,141,44,122,95,163,
    129,60,26,208,48,87,184,246,1,185,246,95,192,126,13,173,
    194,181,199,128,140,5,201,31,91,112,204,147,99,11,38,29,
    56,18,48,172,64,104,195,17,110,83,37,1,246,5,156,88,
    240,123,155,8,142,113,172,160,51,110,64,69,105,191,14,217,
    25,154,211,28,28,87,225,168,10,189,231,71,22,45,28,212,
    33,251,39,124,181,195,76,231,153,169,5,71,56,86,224,164,
    2,199,53,120,134,68,184,52,172,147,250,226,249,17,106,138,
    43,189,78,5,165,221,157,82,151,84,9,163,44,241,71,82,
    173,226,220,27,251,153,63,242,30,126,250,184,247,161,159,132,
    177,204,58,13,67,151,230,119,198,190,26,56,252,161,77,22,
    25,141,21,51,76,19,169,22,112,210,143,146,208,27,165,225,
    97,44,213,60,113,243,250,81,44,61,143,95,126,52,26,167,
    153,122,148,101,105,230,144,81,121,49,78,253,242,11,50,105,
    16,167,185,236,208,110,188,141,67,236,21,81,247,199,204,145,
    4,96,97,233,227,80,230,65,22,141,21,250,74,115,36,106,
    226,214,33,47,241,144,147,215,186,135,57,122,116,236,7,178,
    27,118,195,126,63,202,7,50,235,62,122,240,232,238,187,119,
    187,143,63,218,253,224,183,222,83,231,201,199,143,30,124,82,
    44,222,70,69,252,184,187,119,24,197,97,247,249,251,239,117,
    199,19,53,72,147,238,232,221,110,148,40,153,209,203,11,134,
    186,131,68,100,194,252,101,180,239,69,172,172,55,144,241,88,
    102,36,107,126,149,196,17,45,177,40,106,194,22,29,209,196,
    89,21,127,182,216,177,22,196,110,68,234,6,100,2,194,154,
    109,208,245,15,96,63,34,12,14,44,200,118,8,59,67,252,
    19,228,108,68,80,143,222,89,252,238,119,100,39,189,58,180,
    9,17,122,241,136,241,134,192,67,202,123,4,129,4,24,52,
    85,24,214,64,131,9,49,168,209,149,77,104,68,114,98,99,
    33,243,10,228,127,61,203,33,105,1,250,1,243,1,46,109,
    226,86,127,100,124,246,58,36,248,46,163,68,13,162,60,125,
    153,176,47,104,206,17,213,67,155,60,157,60,217,27,202,64,
    229,55,113,225,179,244,176,29,248,73,146,170,182,31,134,109,
    95,169,44,218,59,84,50,111,171,180,125,43,239,212,201,249,
    43,6,104,37,191,201,216,0,139,64,128,192,210,15,97,20,
    40,124,88,227,7,182,127,46,21,130,100,144,134,57,174,19,
    139,125,169,28,18,82,45,225,240,129,217,142,209,216,169,25,
    236,228,50,238,171,6,195,208,207,115,143,183,163,117,70,28,
    125,253,194,143,15,165,34,250,92,249,10,119,165,169,222,104,
    102,152,219,38,173,141,210,100,72,47,73,147,112,130,50,71,
    193,27,36,206,54,35,111,17,8,123,27,136,187,57,28,107,
    208,68,28,182,172,128,212,171,20,168,99,196,109,146,49,128,
    81,32,138,172,130,232,59,193,220,211,177,56,121,176,158,28,
    156,109,154,209,199,14,129,219,185,70,195,14,13,215,141,41,
    102,97,143,230,121,123,188,77,50,88,108,132,192,46,212,45,
    3,108,247,76,128,93,57,13,48,204,155,61,10,20,139,194,
    233,52,80,108,50,72,118,191,136,10,10,65,4,6,190,158,
    138,5,54,147,211,34,245,107,6,198,14,97,115,26,160,251,
    83,0,117,200,67,140,78,231,202,55,153,244,230,247,195,164,
    251,218,164,63,37,25,22,11,92,53,25,79,13,17,16,40,
    172,194,192,108,220,135,56,153,108,145,113,167,205,186,133,85,
    241,89,210,228,242,198,37,146,27,11,157,101,180,181,245,164,
    66,8,236,219,176,89,148,173,156,146,194,56,75,191,156,180,
    211,126,91,129,145,225,222,173,252,206,173,252,151,152,54,218,
    247,57,17,233,196,161,83,67,38,199,25,166,128,58,63,232,
    176,246,56,196,189,162,236,160,249,169,5,96,175,177,209,57,
    139,229,42,163,228,53,51,139,55,74,139,147,2,63,39,1,
    26,108,110,27,182,240,215,16,44,165,151,114,70,229,166,132,
    223,226,239,215,100,120,210,93,2,181,153,78,79,235,192,234,
    145,162,206,15,207,32,105,6,202,57,111,145,152,38,40,107,
    80,226,134,126,54,137,79,113,242,103,224,22,78,192,159,128,
    48,130,80,40,34,139,99,152,126,228,234,53,34,255,3,112,
    178,186,164,72,90,58,66,173,34,157,97,0,231,119,153,84,
    215,204,143,225,47,83,153,238,196,6,65,245,205,46,154,180,
    233,250,86,41,99,154,193,245,90,53,172,114,54,248,201,97,
    3,63,39,50,29,230,118,25,230,167,73,179,236,173,48,119,
    205,2,119,243,122,107,143,164,252,205,41,234,168,120,92,19,
    107,214,20,150,126,76,195,237,18,70,194,172,253,159,5,190,
    121,62,219,79,85,63,79,103,216,199,36,85,133,245,88,174,
    113,227,56,197,163,140,157,170,137,157,119,202,216,145,156,245,
    95,113,127,79,163,69,192,56,177,4,30,198,176,3,162,115,
    80,5,100,21,220,26,69,25,119,175,162,8,66,97,50,32,
    101,206,51,37,133,13,181,171,77,88,98,67,187,157,134,47,
    103,150,113,200,243,247,98,127,180,23,250,247,93,218,158,100,
    8,76,88,90,70,161,214,180,66,20,82,226,155,116,226,199,
    183,141,98,47,102,150,109,126,130,187,149,10,113,108,133,105,
    192,41,230,147,129,108,143,228,104,15,5,25,68,227,118,63,
    246,247,217,131,118,161,240,19,163,176,98,8,156,47,241,57,
    229,177,221,180,29,164,9,150,139,195,64,165,89,59,148,40,
    166,12,219,183,219,92,107,218,81,222,246,247,240,173,31,40,
    29,34,103,35,159,187,75,63,219,207,185,145,60,120,73,211,
    153,34,192,195,67,111,132,189,244,231,198,96,250,44,86,22,
    14,110,159,117,188,97,37,198,179,141,154,232,172,248,30,13,
    63,162,225,22,204,186,190,116,41,57,211,182,100,212,26,38,
    174,186,80,43,103,195,254,41,125,151,95,12,254,191,191,78,
    240,235,59,152,34,5,212,136,82,206,209,49,156,198,58,21,
    25,183,97,22,23,120,92,228,197,166,89,92,226,113,153,23,
    91,102,113,133,199,85,94,92,51,23,66,235,188,184,193,151,
    35,53,94,217,162,92,51,247,93,115,13,199,229,76,35,210,
    255,159,166,24,231,157,239,141,62,14,247,198,223,150,94,196,
    180,178,77,157,94,134,194,28,39,166,53,229,75,141,237,203,
    144,235,5,153,244,149,212,206,188,58,67,229,57,113,105,97,
    130,210,165,70,195,242,148,117,183,212,242,132,187,185,201,250,
    84,183,207,30,22,207,176,245,194,19,193,17,27,194,179,244,
    161,224,20,196,149,210,30,148,139,18,249,210,187,96,19,221,
    246,147,60,254,120,44,147,240,180,165,231,55,51,131,7,165,
    198,1,156,246,82,216,191,175,227,239,98,0,147,142,83,42,
    179,111,171,101,200,206,210,203,12,241,145,241,111,135,207,171,
    101,77,112,200,187,186,10,148,5,192,249,69,233,175,235,151,
    226,55,76,71,126,148,228,116,160,252,47,20,216,215,233,107,
    74,253,172,118,46,165,150,137,191,135,135,57,98,247,173,4,
    196,141,32,162,31,213,155,151,210,230,19,12,176,248,160,16,
    129,153,190,22,33,49,167,2,121,118,153,27,249,139,223,98,
    83,144,228,17,93,94,122,49,70,79,18,76,120,163,215,38,
    166,205,232,190,241,226,43,70,28,231,141,80,162,142,242,98,
    168,40,242,86,113,19,17,74,236,79,210,9,30,139,249,72,
    137,207,177,231,205,182,128,191,143,187,125,65,219,174,131,46,
    224,53,44,225,27,197,255,122,165,46,184,131,58,119,53,175,
    165,165,243,128,62,64,77,114,135,243,241,114,137,68,190,64,
    54,93,11,167,36,186,22,216,245,71,250,30,144,239,179,156,
    31,208,240,134,1,51,99,69,159,178,249,216,170,47,18,48,
    253,112,123,199,221,156,115,199,100,165,94,22,60,136,211,224,
    224,161,70,195,11,73,45,161,34,29,180,150,103,223,243,197,
    40,63,27,202,181,146,242,211,52,86,254,190,44,8,9,82,
    197,138,33,93,62,101,26,141,244,189,42,95,80,134,25,125,
    64,66,162,175,34,63,142,190,146,220,250,104,218,233,221,137,
    166,252,150,91,166,243,149,134,225,145,201,253,40,71,95,241,
    142,37,125,145,112,201,79,234,198,229,145,49,245,237,76,193,
    164,15,54,250,174,231,62,27,230,67,28,232,46,180,190,92,
    23,53,139,110,224,109,209,16,77,81,17,139,205,186,93,175,
    213,171,54,2,142,86,214,68,195,174,55,22,197,249,255,87,
    16,130,13,235,202,82,93,252,7,231,138,76,159,
};

EmbeddedPython embedded_m5_internal_param_DVFSHandler(
    "m5/internal/param_DVFSHandler.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_DVFSHandler.py",
    "m5.internal.param_DVFSHandler",
    data_m5_internal_param_DVFSHandler,
    2269,
    7147);

} // anonymous namespace
