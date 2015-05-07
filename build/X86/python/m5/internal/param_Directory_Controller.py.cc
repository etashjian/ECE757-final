#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Directory_Controller[] = {
    120,156,205,89,239,114,19,201,17,239,217,149,100,36,44,252,
    223,198,198,128,56,160,78,185,10,136,92,114,199,37,71,81,
    225,12,164,238,42,49,100,77,21,220,38,149,189,181,118,100,
    175,45,237,234,118,71,112,186,178,191,196,84,146,111,121,136,
    84,62,228,61,242,28,169,188,73,210,221,179,179,146,12,214,
    249,10,170,100,44,13,173,158,217,158,238,158,95,119,207,204,
    54,33,251,87,196,239,175,107,0,233,127,4,64,128,31,1,
    109,128,142,0,87,128,144,2,130,5,216,47,66,242,11,8,
    138,240,26,192,181,64,90,112,132,132,13,127,176,32,154,230,
    103,74,208,182,153,35,160,95,1,89,0,183,8,207,163,57,
    40,200,18,236,87,32,249,6,132,16,145,128,23,193,20,4,
    231,224,53,74,71,162,204,2,207,65,80,97,162,12,193,121,
    38,42,208,159,5,121,30,92,20,62,5,110,21,69,125,132,
    162,46,176,168,127,147,168,0,123,22,33,168,210,112,212,229,
    107,26,89,160,145,60,199,5,150,50,99,52,155,5,119,214,
    208,115,224,206,25,122,30,220,121,67,47,128,187,96,232,69,
    112,23,13,189,4,238,146,161,151,193,93,54,244,10,184,43,
    134,190,8,238,69,67,175,130,187,106,232,53,112,215,12,125,
    9,220,75,134,94,7,119,221,208,151,193,189,108,232,43,224,
    94,129,96,6,228,34,236,93,133,22,186,126,54,183,175,6,
    210,134,189,107,224,94,3,137,159,26,28,225,234,4,115,60,
    246,3,30,59,159,143,189,206,99,111,128,123,3,36,126,174,
    235,177,37,216,170,47,225,90,135,255,195,127,117,92,107,80,
    211,216,188,148,73,26,198,145,23,70,173,56,180,168,191,68,
    13,33,163,73,205,84,6,145,13,130,200,191,128,241,17,88,
    25,68,14,1,5,11,210,191,109,193,33,19,135,22,244,235,
    112,32,96,175,0,129,13,7,56,77,145,20,216,17,112,100,
    193,31,109,26,112,136,109,1,23,245,10,20,148,198,199,30,
    47,170,150,52,5,135,69,56,40,194,214,139,3,139,24,251,
    101,72,254,9,223,175,179,208,115,44,212,130,3,108,11,112,
    84,128,195,18,60,199,65,200,218,43,147,249,226,197,1,90,
    138,156,173,122,1,181,221,28,50,151,76,9,194,36,242,59,
    82,93,66,218,235,250,137,223,241,30,134,137,108,170,56,233,
    123,27,113,164,146,184,221,150,73,189,98,30,136,211,219,93,
    95,237,58,44,193,38,215,116,186,138,37,199,145,84,231,145,
    104,133,81,224,117,226,160,215,150,234,28,137,245,90,97,91,
    122,30,119,126,217,233,198,137,122,148,36,113,226,144,119,153,
    217,142,253,252,9,242,109,179,29,167,178,78,179,241,52,14,
    137,87,52,186,213,101,137,164,0,107,77,15,7,50,109,38,
    97,87,225,162,105,137,52,154,164,213,105,185,184,73,19,108,
    26,189,20,151,182,235,55,101,35,104,4,173,86,152,238,202,
    164,241,104,227,209,221,79,238,54,30,127,185,249,224,183,222,
    83,231,201,87,143,54,158,101,204,91,104,136,223,110,108,247,
    194,118,208,120,241,217,167,141,110,95,237,198,81,163,243,73,
    35,140,148,76,168,243,100,143,221,198,209,243,52,247,171,112,
    199,11,217,106,111,87,182,187,50,33,165,211,53,210,75,204,
    138,105,81,18,182,168,139,42,82,69,252,218,98,221,58,47,
    54,67,178,187,73,190,32,244,217,6,111,255,0,94,89,4,
    198,190,5,201,58,161,105,15,63,130,150,31,49,181,69,125,
    22,247,253,158,28,166,185,123,54,97,68,51,15,24,129,8,
    69,28,121,143,64,17,1,195,168,8,123,37,208,240,66,84,
    106,188,37,125,106,113,56,137,177,80,120,1,210,191,143,74,
    136,102,1,23,4,51,13,178,150,113,170,63,51,98,183,234,
    164,248,38,195,69,237,134,105,252,42,226,69,33,154,99,108,
    11,125,242,180,255,100,123,15,189,150,94,69,198,215,113,175,
    214,244,163,40,86,53,63,8,106,190,82,73,184,221,83,50,
    173,169,184,118,51,173,151,9,5,115,6,113,185,188,126,215,
    32,140,208,128,8,211,63,130,176,169,240,199,2,255,96,255,
    167,82,33,90,118,227,32,69,62,137,216,145,202,33,37,213,
    5,108,30,152,233,24,150,245,146,1,81,42,219,45,85,97,
    60,250,105,234,241,116,196,103,232,209,211,47,253,118,79,42,
    26,159,42,95,225,172,68,234,137,38,15,190,139,100,190,177,
    158,60,234,69,113,20,244,81,249,176,121,157,244,186,200,16,
    156,6,2,225,18,2,112,10,219,18,84,17,144,179,86,147,
    236,44,100,240,99,232,45,147,87,128,225,32,178,132,131,48,
    60,194,180,84,183,56,175,176,193,28,174,53,162,232,97,135,
    80,238,80,106,113,214,169,185,108,124,50,81,199,84,143,59,
    230,14,41,99,177,55,154,118,102,119,30,114,155,35,33,183,
    58,8,57,204,173,91,20,58,22,5,216,32,116,108,242,76,
    114,63,139,19,10,74,132,10,118,15,69,7,251,203,153,37,
    63,148,12,176,29,66,235,48,100,119,134,32,235,208,82,49,
    94,157,213,147,124,123,245,140,249,118,71,251,246,231,164,204,
    116,134,180,42,35,172,34,154,4,19,43,243,52,123,249,33,
    18,253,21,242,242,176,127,87,176,132,62,143,170,92,11,185,
    158,242,110,70,39,32,237,118,77,20,8,147,45,27,150,179,
    26,151,82,190,232,38,241,119,253,90,220,170,41,48,58,220,
    187,153,222,190,153,126,142,25,165,118,159,115,148,206,41,58,
    107,36,178,155,96,118,40,243,15,29,241,30,71,191,151,149,
    38,92,7,218,47,240,242,177,247,57,193,165,42,161,188,54,
    121,215,87,114,215,147,37,191,36,77,42,236,119,27,86,240,
    91,17,172,174,23,115,214,229,173,12,247,226,247,11,90,1,
    114,130,4,218,228,58,91,218,24,182,147,44,118,62,28,193,
    214,36,173,116,62,34,125,77,188,150,32,71,18,125,109,178,
    131,66,232,175,192,59,64,1,127,1,66,13,130,35,11,58,
    14,111,250,210,226,47,208,240,63,1,39,180,183,84,84,75,
    7,175,149,165,60,140,237,244,46,15,213,5,246,43,248,219,
    80,54,60,178,65,80,49,180,179,61,222,112,49,44,228,225,
    206,112,59,85,193,43,140,230,5,90,185,93,63,165,97,58,
    3,216,121,6,24,36,214,124,71,134,105,109,162,72,60,167,
    117,240,72,221,223,12,112,72,149,230,146,88,176,134,208,245,
    83,106,110,229,192,18,134,55,41,205,175,30,47,13,67,53,
    211,211,233,248,49,169,87,96,131,102,74,106,17,255,127,155,
    176,60,190,138,38,190,62,206,227,75,114,173,120,205,39,7,
    106,45,194,204,145,37,240,184,136,59,41,58,169,21,64,22,
    193,45,81,36,242,118,88,100,129,42,76,186,164,52,59,82,
    136,216,117,155,218,169,57,108,52,34,168,249,110,226,129,203,
    160,184,215,246,59,219,129,127,255,27,210,131,148,105,154,208,
    181,140,101,179,195,150,81,216,137,147,140,227,159,119,140,133,
    47,39,110,161,243,51,156,54,183,140,3,49,136,155,156,143,
    158,237,202,90,71,118,182,81,163,221,176,91,107,181,253,29,
    94,83,59,179,252,137,177,92,49,40,142,111,21,82,74,122,
    155,113,173,25,71,88,109,122,52,119,45,144,168,175,12,106,
    183,106,92,170,106,97,90,243,183,177,215,111,42,29,70,163,
    105,130,247,173,126,178,147,242,22,117,255,21,145,19,247,88,
    86,120,195,40,196,237,186,111,60,167,207,125,121,221,225,29,
    186,142,73,172,232,120,124,82,125,157,75,63,165,230,39,212,
    220,132,51,83,158,26,164,44,205,79,110,46,97,186,43,11,
    181,118,66,142,120,74,146,210,55,51,197,127,79,147,41,244,
    149,82,150,47,74,52,82,78,209,109,0,181,101,42,86,110,
    197,48,207,115,59,205,204,170,97,94,224,118,134,153,179,134,
    57,199,237,60,51,23,12,115,145,219,37,102,46,27,230,10,
    183,23,153,185,106,152,107,220,94,98,230,186,185,30,187,204,
    204,43,224,94,165,59,29,226,212,40,175,77,189,107,94,227,
    208,159,252,130,83,208,239,188,215,116,230,124,124,246,12,115,
    120,27,63,46,149,137,97,171,171,58,149,237,9,115,4,26,
    54,153,239,104,174,141,141,9,175,153,72,95,73,189,206,107,
    103,193,29,156,54,181,86,97,190,218,198,230,252,172,120,55,
    183,251,136,55,158,253,197,161,163,10,47,190,120,142,187,68,
    60,206,28,176,107,60,75,159,104,6,64,47,228,30,186,130,
    77,36,95,189,85,33,237,37,125,120,33,197,252,110,87,70,
    193,224,96,194,61,19,247,25,103,232,111,97,176,255,195,83,
    200,34,126,223,12,123,178,122,200,9,188,236,197,60,208,207,
    4,0,56,30,94,154,165,175,19,126,7,53,202,161,133,215,
    85,41,47,72,206,175,242,165,172,143,7,123,144,119,225,153,
    249,244,131,113,135,202,135,213,156,163,238,156,246,209,54,194,
    56,106,234,249,126,244,67,52,239,220,240,188,166,71,125,62,
    94,148,138,113,11,221,161,174,102,222,53,162,202,187,60,79,
    90,209,81,104,220,32,245,96,252,4,124,71,155,200,111,123,
    50,85,207,98,28,72,50,34,28,77,239,3,154,113,47,82,
    172,230,187,75,33,101,63,64,41,63,60,84,109,156,98,178,
    86,156,224,134,46,120,156,196,157,19,149,126,31,114,72,237,
    27,70,237,31,24,172,190,56,149,151,210,46,238,105,229,24,
    103,191,7,49,164,246,245,129,183,199,141,85,15,127,196,116,
    99,253,253,94,4,145,230,55,143,107,126,210,104,78,183,92,
    88,3,217,150,74,142,169,28,138,82,85,118,207,24,32,246,
    146,184,239,121,250,122,8,127,183,61,239,140,236,166,63,195,
    105,91,144,189,45,161,221,116,9,247,211,75,35,127,229,66,
    89,240,49,231,216,187,58,173,60,57,79,95,137,244,83,135,
    55,50,51,121,86,230,23,73,230,68,193,149,155,178,233,166,
    223,209,175,1,248,22,219,225,60,127,221,36,118,46,182,250,
    2,141,47,162,244,101,33,86,105,62,131,241,145,203,185,77,
    124,162,180,105,78,111,187,159,155,247,59,206,76,106,38,239,
    221,10,59,250,45,8,191,78,8,18,31,29,67,50,209,211,
    161,223,14,191,151,124,193,48,144,52,112,15,47,225,160,99,
    171,159,42,217,225,23,78,185,228,110,91,102,19,14,132,60,
    200,206,136,111,104,130,140,76,147,133,156,183,209,142,155,251,
    50,200,248,115,163,252,135,113,135,180,157,30,204,168,85,32,
    145,50,234,177,68,50,57,14,36,235,250,32,8,18,199,143,
    118,164,247,146,157,161,168,122,142,170,99,122,230,135,122,6,
    22,243,217,234,196,141,35,131,57,145,59,33,42,145,176,193,
    163,254,202,182,76,132,40,245,225,248,216,28,150,116,54,2,
    65,95,158,232,91,232,251,140,143,103,216,208,123,155,242,76,
    89,148,44,122,109,104,139,138,168,138,130,152,174,150,237,114,
    169,92,180,49,88,136,179,32,42,118,185,50,45,198,253,173,
    98,16,85,172,213,185,178,248,63,42,47,64,10,
};

EmbeddedPython embedded_m5_internal_param_Directory_Controller(
    "m5/internal/param_Directory_Controller.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_Directory_Controller.py",
    "m5.internal.param_Directory_Controller",
    data_m5_internal_param_Directory_Controller,
    2477,
    8454);

} // anonymous namespace
