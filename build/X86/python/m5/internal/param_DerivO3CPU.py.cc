#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DerivO3CPU[] = {
    120,156,205,91,105,123,219,198,17,30,144,20,109,202,146,45,
    91,242,125,49,113,28,43,78,108,57,113,18,167,109,234,198,
    150,237,86,169,35,203,164,82,59,72,26,22,2,86,34,36,
    146,96,0,80,10,83,185,151,210,251,190,239,251,190,143,244,
    250,1,253,85,253,210,206,204,114,64,144,2,69,246,105,159,
    168,150,56,207,242,221,119,103,119,103,103,102,23,208,218,134,
    214,191,33,252,60,147,7,8,190,151,2,112,240,215,128,10,
    64,213,0,211,0,67,25,224,140,195,202,16,248,143,131,51,
    4,175,3,152,41,80,41,216,192,66,26,94,76,65,109,132,
    219,100,161,146,102,196,128,230,48,168,12,152,67,112,167,182,
    23,50,42,11,43,195,224,191,15,12,195,168,25,112,215,217,
    1,206,78,120,29,181,99,33,199,10,119,130,51,204,133,28,
    56,187,184,48,12,205,49,80,187,192,68,229,59,192,28,69,
    85,103,81,213,110,86,245,15,82,229,96,205,4,56,163,68,
    199,177,188,64,204,12,49,185,143,221,172,101,143,140,108,12,
    204,49,41,239,5,115,175,148,247,129,185,79,202,227,96,142,
    75,121,2,204,9,41,239,7,115,191,148,15,128,121,64,202,
    7,193,60,40,229,67,96,30,146,242,97,48,15,75,249,8,
    152,71,164,124,20,204,163,82,62,6,230,49,41,31,7,243,
    184,148,79,128,121,66,202,39,193,60,41,229,60,152,121,41,
    223,7,230,125,82,190,31,204,251,165,124,10,204,83,82,126,
    0,204,7,164,124,26,204,211,82,126,16,204,7,165,124,6,
    204,51,82,158,4,115,82,202,15,129,249,144,148,207,130,121,
    86,202,15,131,249,176,148,31,1,243,17,41,159,3,243,156,
    148,207,131,121,30,156,61,160,142,192,242,20,44,162,235,140,
    69,235,115,1,84,26,150,31,5,243,81,80,248,123,1,54,
    208,187,156,189,204,125,140,185,251,34,238,69,230,62,14,230,
    227,160,240,247,162,230,102,161,56,185,31,125,213,253,23,254,
    155,52,176,20,142,160,88,85,126,224,122,181,146,91,91,244,
    220,20,213,103,73,144,103,219,36,118,180,92,124,154,92,252,
    151,192,254,237,164,90,46,126,15,80,177,65,227,175,164,224,
    30,23,238,165,160,57,9,235,6,44,103,192,73,195,58,118,
    51,68,3,88,50,96,35,5,47,165,137,112,15,101,6,157,
    242,4,100,66,237,223,203,236,148,90,211,14,184,55,4,235,
    67,80,188,187,158,34,96,37,7,254,79,225,181,99,172,116,
    39,43,77,193,58,202,12,108,100,224,94,22,238,32,9,161,
    229,28,77,223,184,187,142,51,69,164,56,153,193,209,206,198,
    166,75,83,113,92,191,102,85,85,184,23,203,165,186,229,91,
    213,210,53,229,187,171,183,46,78,207,61,63,57,44,52,47,
    56,95,183,194,114,129,219,165,201,32,213,122,200,250,188,154,
    10,119,97,97,209,173,57,165,170,231,52,42,42,220,73,202,
    74,139,110,69,149,74,92,57,83,173,123,126,120,221,247,61,
    191,64,54,101,176,226,89,81,11,178,168,93,241,2,53,73,
    189,113,55,5,82,31,18,123,177,206,26,105,0,60,86,106,
    236,168,192,246,221,122,136,75,165,53,18,155,180,77,210,34,
    177,8,202,40,166,26,1,46,104,221,178,213,148,51,229,44,
    46,186,65,89,249,83,215,167,175,95,122,226,210,212,141,153,
    217,43,55,75,115,133,91,207,94,159,158,111,129,231,112,34,
    86,101,106,161,225,86,156,169,187,79,61,57,85,111,134,101,
    175,54,85,125,98,202,173,133,202,167,202,110,59,157,71,206,
    62,234,113,205,93,42,185,60,215,82,89,85,234,202,167,161,
    6,71,104,52,198,152,49,98,100,141,180,49,105,140,98,105,
    8,63,105,227,88,106,151,49,235,210,108,109,178,0,121,90,
    90,124,235,199,192,171,136,78,176,146,2,255,24,121,206,50,
    254,26,180,212,232,63,69,170,75,113,221,109,50,147,70,151,
    211,228,15,26,92,103,111,67,183,67,230,211,228,0,53,96,
    151,25,130,229,44,104,87,66,15,212,190,229,55,73,34,157,
    212,164,80,121,6,130,207,119,106,168,141,1,46,3,102,69,
    132,14,96,87,31,97,239,44,78,210,192,103,217,73,194,178,
    27,120,107,53,94,10,42,115,60,21,209,38,115,205,91,11,
    203,202,14,131,147,8,188,224,53,242,182,85,171,121,97,222,
    114,156,188,21,134,190,187,208,8,85,144,15,189,252,233,96,
    50,71,107,191,87,252,44,210,215,172,139,95,145,15,160,95,
    233,47,142,107,135,248,101,156,191,176,253,3,21,162,143,148,
    61,39,64,156,84,44,169,176,64,131,12,119,163,184,34,221,
    177,51,78,102,197,117,2,85,89,12,135,217,11,173,32,40,
    113,119,132,179,195,81,235,85,171,210,80,33,241,131,208,10,
    177,87,42,234,142,182,203,229,14,209,164,101,206,100,199,82,
    205,171,57,77,28,178,107,159,162,209,28,98,199,27,1,114,
    189,253,232,118,59,80,102,97,20,221,112,44,101,211,236,50,
    45,167,99,135,59,64,182,0,118,2,163,149,82,208,249,54,
    48,241,76,166,56,115,240,52,57,52,243,84,162,198,5,242,
    237,194,81,18,199,72,28,23,75,108,131,57,70,187,205,113,
    129,134,144,98,27,216,233,214,108,163,240,154,237,8,175,195,
    237,240,194,156,89,164,48,73,81,48,181,195,36,77,246,240,
    47,183,98,130,2,16,221,2,171,99,145,192,86,42,140,209,
    236,179,226,196,5,242,204,184,123,46,197,220,179,64,11,196,
    190,89,56,220,203,162,39,255,47,44,186,164,45,122,145,134,
    48,210,242,170,81,246,166,97,195,38,151,72,181,236,203,182,
    189,134,133,230,65,178,109,220,170,7,113,67,188,83,27,229,
    157,141,119,71,62,91,233,20,163,141,173,11,25,242,191,197,
    52,28,104,237,88,1,101,132,186,239,189,218,204,123,139,249,
    16,100,12,79,159,14,206,159,14,222,134,57,35,127,153,179,
    144,206,26,58,47,248,170,238,99,252,231,248,139,142,233,18,
    199,119,169,181,229,160,245,105,247,231,69,99,155,115,10,11,
    66,159,50,215,118,25,124,56,50,56,141,255,45,212,255,48,
    91,59,13,7,241,51,108,240,32,75,30,103,83,62,142,112,
    45,126,174,146,221,105,234,10,232,160,93,40,234,41,240,236,
    104,158,133,51,29,126,244,230,207,173,112,150,70,41,17,153,
    133,200,107,232,147,166,209,83,144,124,28,248,236,102,192,199,
    128,60,4,29,161,21,86,28,192,244,161,133,30,39,250,203,
    192,137,42,97,127,76,233,240,76,181,82,25,70,111,112,137,
    169,122,187,124,22,62,17,203,114,27,105,48,104,107,75,183,
    78,103,241,173,45,19,5,52,187,214,64,219,87,166,51,242,
    105,189,202,86,64,52,29,227,233,40,198,219,9,51,58,85,
    97,226,218,6,175,219,169,123,46,209,32,223,217,246,57,218,
    55,142,26,227,169,152,39,61,66,226,92,228,68,134,96,111,
    238,120,79,118,39,250,216,190,87,210,201,245,6,13,42,195,
    211,216,147,229,176,106,171,136,226,102,72,226,230,177,40,110,
    20,231,251,215,249,84,79,50,69,94,177,145,50,240,81,20,
    79,62,244,20,152,1,53,4,102,150,34,140,15,173,70,43,
    0,13,73,126,148,52,59,54,19,54,211,172,54,96,228,24,
    122,205,73,188,186,93,201,134,150,253,233,138,85,93,112,172,
    203,117,234,157,134,96,75,72,166,100,62,99,241,249,80,56,
    25,189,166,196,95,47,200,188,86,183,43,209,60,138,157,69,
    243,225,176,114,60,155,179,203,124,89,229,171,170,186,128,227,
    40,187,245,252,98,197,90,226,245,75,183,230,123,75,230,27,
    178,3,116,111,237,1,165,176,89,47,111,123,53,220,39,26,
    118,232,249,121,71,225,40,149,147,63,151,231,77,38,239,6,
    121,107,1,107,45,59,212,225,209,25,244,124,166,180,252,165,
    128,143,143,43,107,84,220,206,245,47,225,115,174,139,7,232,
    87,196,94,250,249,43,218,49,248,204,172,99,13,119,96,124,
    160,9,155,58,31,62,73,226,33,18,167,97,155,55,150,41,
    236,204,163,94,201,164,89,76,89,57,35,28,235,136,248,57,
    106,21,108,142,251,127,102,6,136,123,253,242,169,21,253,89,
    98,170,29,244,220,77,50,71,155,139,57,44,224,46,150,35,
    12,142,10,184,155,229,30,6,199,4,220,203,114,31,131,227,
    2,78,176,220,207,224,1,1,15,178,60,196,224,97,1,143,
    176,60,202,224,49,1,143,179,60,193,224,73,1,243,44,239,
    99,240,126,1,79,177,124,128,193,211,2,62,200,242,12,131,
    147,2,62,196,242,44,131,15,11,248,8,203,115,12,158,23,
    112,138,229,5,6,31,21,240,49,150,23,25,124,92,192,39,
    88,62,201,224,37,1,159,98,249,22,6,223,42,224,219,88,
    62,205,224,219,5,188,204,242,29,12,62,35,224,21,150,87,
    25,156,22,240,26,203,235,12,222,16,240,157,44,223,197,224,
    140,128,207,178,124,55,131,55,5,124,142,229,44,131,183,4,
    156,99,121,155,193,130,128,69,150,243,12,62,47,224,123,88,
    222,97,240,174,128,47,176,52,25,124,81,192,151,88,190,151,
    193,151,5,44,177,124,31,131,150,128,11,44,109,6,29,1,
    21,203,69,6,151,4,44,179,116,25,92,22,112,133,101,133,
    193,170,128,53,150,30,131,117,1,95,97,233,51,24,8,24,
    178,108,48,184,42,224,26,203,87,25,108,10,248,26,203,247,
    51,184,46,224,61,150,31,96,240,131,2,126,136,229,135,25,
    252,136,128,27,44,95,103,240,163,2,126,140,229,199,25,252,
    132,128,159,100,249,41,6,63,45,224,103,88,126,150,193,207,
    9,248,121,150,95,96,240,139,2,126,137,229,151,25,252,138,
    128,95,101,249,53,6,191,46,224,55,88,126,147,193,111,9,
    248,109,150,223,97,240,187,2,126,143,229,247,25,252,129,128,
    63,100,249,35,6,127,44,224,79,88,254,148,193,159,9,248,
    115,150,191,96,240,151,2,254,138,229,175,25,252,141,128,191,
    101,249,59,6,127,47,224,31,88,254,145,193,63,201,43,246,
    55,24,252,51,152,127,161,247,170,132,252,149,206,47,59,254,
    219,243,11,111,246,219,185,205,175,253,79,143,45,133,199,254,
    95,166,83,224,7,237,173,142,44,70,124,174,163,250,200,178,
    108,200,171,137,248,68,249,237,232,193,132,253,176,100,251,202,
    10,149,94,201,35,219,55,117,62,10,233,177,52,163,245,148,
    249,69,239,107,46,69,115,220,224,71,195,230,68,236,197,1,
    47,175,113,7,159,227,12,195,88,103,51,148,82,250,253,66,
    219,129,51,145,53,38,80,212,212,90,169,219,34,250,5,2,
    13,199,170,215,85,205,105,191,28,224,154,237,114,13,58,107,
    189,1,237,231,50,35,13,19,248,217,28,186,52,195,216,132,
    121,97,135,162,96,221,198,37,102,239,254,187,44,238,228,223,
    32,126,198,44,208,210,234,83,101,116,160,44,188,53,90,172,
    227,73,174,123,243,70,113,190,232,190,166,232,197,84,31,6,
    62,35,242,81,87,128,240,68,34,253,246,245,26,62,201,171,
    128,53,246,161,144,74,122,179,20,33,225,253,137,13,138,183,
    167,203,202,94,185,233,89,142,214,59,0,141,116,83,60,119,
    160,225,233,30,13,175,169,58,179,138,101,119,49,228,46,6,
    99,82,47,99,186,151,142,138,228,153,23,251,27,167,184,201,
    56,17,146,188,62,197,226,76,159,21,140,24,178,130,2,36,
    211,241,137,203,93,117,195,102,111,133,17,67,20,10,16,230,
    147,232,11,150,189,50,237,85,163,65,246,37,145,90,250,131,
    79,12,227,119,21,155,27,249,86,205,46,207,249,202,97,197,
    253,56,164,151,66,191,13,37,55,177,45,187,172,230,60,63,
    12,122,171,141,113,68,109,27,226,151,79,155,155,120,213,170,
    27,206,123,215,148,237,57,234,154,170,88,218,198,3,147,169,
    35,218,203,18,234,194,51,91,41,185,161,66,187,220,238,112,
    80,46,245,183,47,214,95,187,42,57,58,132,55,115,253,78,
    187,179,193,152,18,71,221,21,91,27,167,160,232,207,74,3,
    90,50,78,238,182,100,172,46,217,61,53,241,142,235,132,229,
    222,62,28,39,137,15,199,176,100,187,59,188,136,131,173,81,
    2,87,214,104,115,85,178,53,132,55,144,233,146,200,98,186,
    132,186,100,171,104,98,31,211,197,73,98,186,24,150,156,240,
    29,23,183,92,156,110,91,247,0,52,217,23,58,208,240,129,
    164,134,139,100,203,171,141,197,69,229,71,201,107,32,34,245,
    177,7,137,93,120,120,170,103,227,219,13,213,80,81,39,131,
    240,168,143,221,210,71,4,39,251,13,115,54,39,158,65,185,
    226,99,155,171,146,163,91,243,124,171,126,19,143,162,53,123,
    139,60,176,137,41,121,160,187,34,57,9,51,171,189,250,253,
    56,146,168,219,80,15,75,123,254,154,229,59,241,61,107,16,
    94,180,34,29,112,120,52,177,105,99,206,243,42,172,122,171,
    122,82,73,199,104,253,53,217,134,174,90,155,247,166,57,205,
    244,201,186,155,152,98,237,238,138,45,154,119,251,208,96,204,
    142,142,226,254,147,24,78,204,234,202,135,3,17,37,238,186,
    240,45,6,217,157,6,7,99,118,76,39,158,0,19,179,168,
    27,4,13,76,148,215,95,85,118,35,236,151,114,147,200,146,
    114,19,234,146,125,158,137,125,226,34,198,145,184,104,67,201,
    231,190,154,82,78,48,95,188,213,251,100,24,49,228,100,40,
    64,120,95,34,189,81,157,233,56,18,247,103,145,98,250,163,
    117,28,76,78,251,200,152,43,55,131,233,233,130,90,218,226,
    169,161,147,38,187,67,7,154,236,21,45,202,141,138,103,133,
    81,23,131,49,197,127,186,43,146,211,76,139,53,83,107,119,
    51,8,79,210,81,39,220,211,8,133,91,87,227,43,49,0,
    45,102,171,54,26,30,235,213,208,91,208,154,183,36,144,206,
    29,45,157,248,61,57,70,124,142,184,1,15,210,73,100,9,
    168,132,186,228,77,81,136,131,28,210,18,184,178,129,110,174,
    74,118,24,225,245,63,72,111,98,138,107,117,87,108,221,28,
    215,111,192,142,34,102,119,71,82,145,124,190,211,172,62,135,
    192,56,73,14,129,49,44,121,15,8,170,161,222,185,230,188,
    138,107,111,177,89,116,19,101,179,232,194,147,99,11,73,188,
    104,177,78,6,225,73,12,118,194,201,179,71,206,204,237,152,
    254,190,36,49,81,12,235,57,168,153,219,243,101,95,5,101,
    175,226,108,57,248,56,47,54,248,24,156,156,163,145,115,179,
    24,31,125,127,150,100,242,56,216,115,229,144,209,57,129,129,
    136,177,37,142,227,225,217,30,141,103,27,85,94,38,183,182,
    68,100,121,219,244,31,208,169,199,253,186,199,205,181,61,141,
    130,177,51,128,233,218,172,152,233,34,176,167,69,144,49,152,
    233,58,136,49,211,197,241,30,94,249,74,195,10,202,125,162,
    59,78,138,92,183,141,133,15,39,54,10,61,159,79,214,37,
    187,162,44,191,84,71,130,167,167,241,159,240,169,63,186,150,
    153,92,157,60,222,176,235,1,166,47,73,38,21,195,146,55,
    187,181,133,182,169,182,36,200,110,216,250,206,47,176,249,79,
    16,142,170,168,80,109,122,239,206,9,185,117,63,210,193,189,
    216,247,154,165,146,190,234,134,223,43,165,210,182,222,47,120,
    10,59,91,165,94,63,0,250,126,65,214,200,25,251,223,244,
    159,92,38,103,240,69,146,174,255,149,160,205,242,4,200,21,
    178,102,80,32,164,64,81,160,223,160,243,229,121,185,189,193,
    127,71,161,247,179,179,184,63,233,27,249,228,33,5,138,222,
    2,165,87,126,9,207,79,111,250,154,33,95,220,211,23,41,
    107,106,141,111,185,240,165,150,194,121,194,41,105,104,163,93,
    141,222,78,186,116,51,134,163,80,215,20,221,170,190,255,205,
    23,169,29,223,66,115,147,62,92,63,215,170,208,179,230,72,
    196,189,241,60,63,49,210,249,236,198,243,215,84,96,151,86,
    21,171,139,83,8,103,202,173,122,50,69,227,12,40,60,146,
    225,247,105,26,55,183,105,141,214,10,20,174,111,172,13,122,
    196,252,205,171,124,169,58,2,230,44,186,248,186,80,81,119,
    172,202,138,138,247,80,108,6,161,170,242,36,185,135,231,84,
    213,243,155,207,225,113,140,157,249,138,227,248,5,171,182,164,
    100,108,100,167,43,173,139,65,154,43,53,19,145,206,206,250,
    152,1,17,104,25,112,60,194,166,43,158,189,162,156,22,190,
    183,19,191,230,85,201,200,157,211,165,217,237,139,207,238,166,
    103,91,149,43,117,92,174,137,56,209,181,231,92,60,90,174,
    186,182,138,141,161,141,145,86,108,61,83,188,178,217,240,26,
    231,237,119,218,107,80,84,9,103,44,226,204,212,130,112,30,
    231,137,246,36,222,156,239,217,42,8,132,215,30,115,171,130,
    243,64,107,185,248,174,79,215,31,51,57,109,248,106,201,197,
    5,209,205,91,100,157,91,56,124,147,159,250,226,13,183,51,
    195,232,155,120,250,90,242,101,14,12,186,228,76,151,246,115,
    123,114,70,54,69,255,83,36,109,12,27,163,70,198,24,25,
    205,165,115,217,220,80,26,179,16,33,227,198,112,58,55,60,
    98,252,55,63,135,49,179,12,167,14,79,231,140,127,3,206,
    197,194,59,
};

EmbeddedPython embedded_m5_internal_param_DerivO3CPU(
    "m5/internal/param_DerivO3CPU.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_DerivO3CPU.py",
    "m5.internal.param_DerivO3CPU",
    data_m5_internal_param_DerivO3CPU,
    3859,
    14277);

} // anonymous namespace