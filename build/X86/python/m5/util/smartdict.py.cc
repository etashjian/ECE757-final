#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_smartdict[] = {
    120,156,213,89,123,111,27,69,16,223,59,63,18,59,105,155,
    164,105,90,104,75,151,242,50,165,141,161,180,244,161,10,65,
    95,168,80,210,114,41,45,141,10,167,203,237,218,190,228,124,
    231,222,174,147,24,181,255,0,18,18,18,72,252,129,196,167,
    225,11,240,161,96,102,238,225,71,157,34,171,212,117,157,120,
    52,222,59,239,206,111,230,55,115,187,99,151,37,175,28,188,
    63,225,140,41,15,20,1,255,6,243,25,187,131,154,201,124,
    131,53,13,182,102,48,67,228,152,52,89,205,96,34,207,126,
    98,236,71,198,238,175,229,152,40,48,153,167,209,98,54,90,
    96,98,138,73,131,70,167,179,209,34,142,214,97,174,41,38,
    74,108,181,82,134,213,188,127,224,85,49,64,211,40,78,196,
    234,52,8,71,235,72,120,174,166,15,119,157,200,115,214,125,
    233,166,38,227,109,151,209,228,191,65,145,12,237,3,115,215,
    76,180,29,214,67,187,76,82,242,12,204,70,165,144,152,141,
    102,20,72,153,74,76,94,155,70,195,80,41,37,230,174,149,
    209,66,84,102,152,40,147,50,203,196,12,41,123,152,152,37,
    101,47,19,123,72,217,199,196,94,82,230,152,216,71,202,60,
    19,115,164,44,48,49,79,202,126,38,22,72,89,100,98,63,
    41,7,152,88,36,101,137,137,3,164,28,100,214,106,101,9,
    240,168,95,65,220,8,180,244,125,175,46,3,205,91,81,184,
    211,225,174,239,40,197,107,97,196,87,155,78,164,175,130,115,
    150,57,79,93,195,183,61,223,231,109,37,185,110,200,50,135,
    215,22,92,9,219,138,187,97,176,37,35,205,107,237,192,213,
    94,24,40,174,67,14,238,149,205,150,70,53,189,190,229,248,
    109,73,23,97,22,156,146,102,209,157,150,84,174,145,248,28,
    169,114,5,253,62,135,113,162,168,61,130,240,26,248,191,74,
    193,91,169,152,120,169,132,34,68,16,117,152,27,191,166,116,
    20,71,55,143,31,164,95,171,96,32,73,168,123,32,170,176,
    106,164,90,142,43,171,162,42,106,53,79,53,100,84,189,118,
    229,218,185,179,231,170,215,111,172,124,122,211,190,109,221,250,
    252,218,149,59,201,224,169,154,23,56,126,85,69,110,181,213,
    209,141,48,168,54,207,86,219,218,131,33,244,15,146,103,25,
    46,76,193,220,182,237,5,218,182,207,224,90,38,241,103,116,
    68,69,66,116,51,12,234,22,34,160,75,86,33,133,240,252,
    113,76,19,14,31,214,183,237,143,158,5,200,20,1,185,238,
    135,142,126,49,72,74,132,164,134,6,216,246,249,103,143,201,
    229,48,244,95,12,146,25,66,18,132,193,247,50,10,109,251,
    98,15,22,51,193,97,166,88,130,24,203,35,66,241,216,100,
    143,76,196,181,105,178,232,120,23,224,42,142,154,52,122,30,
    149,158,209,28,141,174,160,210,51,154,167,81,129,74,50,170,
    11,169,150,120,170,152,38,29,166,50,41,235,224,48,202,73,
    200,10,26,64,86,105,244,91,173,203,138,92,234,75,186,16,
    66,85,137,168,70,235,49,230,109,82,154,46,225,90,139,228,
    215,89,248,43,247,189,201,211,102,175,167,247,131,2,46,216,
    72,157,13,114,147,101,238,32,142,224,100,68,33,66,104,45,
    140,143,50,197,56,141,129,249,159,13,176,229,63,49,24,19,
    134,65,218,246,141,81,49,152,147,133,65,62,180,237,47,70,
    197,144,155,44,12,1,196,225,203,81,49,228,39,11,67,29,
    242,225,214,168,24,10,19,134,1,226,240,213,211,48,204,63,
    137,225,224,132,32,136,55,73,142,16,182,125,103,68,8,135,
    38,10,130,106,175,219,246,221,17,33,44,78,20,132,102,219,
    183,237,111,70,132,112,120,162,32,8,111,203,182,215,94,82,
    8,241,166,78,71,109,73,48,30,12,129,145,235,131,97,244,
    33,153,148,148,142,207,11,17,229,180,61,34,134,73,201,233,
    4,3,37,181,51,34,134,73,73,234,4,3,101,181,59,34,
    134,73,73,137,4,3,229,131,124,73,49,204,198,24,178,188,
    174,119,113,84,14,177,164,235,4,187,41,167,9,207,113,93,
    166,15,205,80,180,113,155,155,150,181,208,181,109,11,159,246,
    22,222,108,225,77,214,108,10,203,58,128,2,27,56,214,65,
    20,56,169,245,10,138,87,81,28,70,113,4,197,81,20,175,
    161,56,134,130,163,120,29,197,113,20,111,160,120,179,207,47,
    207,221,57,22,250,225,125,92,228,36,136,98,174,104,148,204,
    228,111,38,211,204,82,238,73,77,99,196,191,14,132,132,117,
    164,216,189,79,135,30,25,218,167,179,86,137,14,234,47,16,
    183,125,0,214,8,125,33,163,164,219,165,67,30,201,86,36,
    21,182,193,218,233,50,212,218,194,117,212,50,231,247,60,223,
    167,78,85,93,6,50,114,124,191,195,93,7,251,96,78,192,
    229,142,43,91,216,243,226,219,13,184,10,103,73,238,105,238,
    41,236,112,137,147,124,189,173,185,196,182,151,163,169,241,69,
    211,224,81,158,186,108,120,74,150,48,9,48,70,55,56,220,
    161,189,160,206,85,219,109,112,71,113,47,192,5,188,26,87,
    26,190,221,4,251,178,246,133,145,102,3,29,186,251,79,158,
    116,152,190,238,248,74,142,187,89,65,68,13,122,72,143,214,
    89,111,161,120,27,197,59,41,153,199,201,59,92,97,131,37,
    174,66,222,81,115,40,235,111,102,60,50,83,30,61,216,141,
    71,163,246,123,177,211,107,80,203,151,218,209,168,151,145,140,
    152,211,170,3,2,215,7,230,56,81,218,121,213,13,71,115,
    100,167,130,152,71,192,5,21,51,200,235,118,106,145,123,113,
    203,66,197,205,211,70,8,68,76,238,70,50,83,27,37,238,
    169,114,33,91,50,16,200,41,224,39,140,123,17,208,210,169,
    203,172,170,230,83,30,157,202,170,234,102,145,218,69,212,18,
    219,160,246,16,22,89,51,110,252,228,176,207,190,42,176,77,
    64,41,213,2,17,73,221,142,2,197,157,110,163,56,238,38,
    3,115,97,205,180,233,43,119,60,165,137,212,56,40,28,237,
    172,59,148,66,130,112,224,43,155,41,224,79,228,123,140,107,
    219,83,114,37,166,21,117,231,80,163,22,62,62,30,234,82,
    83,180,187,197,159,134,55,101,103,172,219,58,48,195,131,116,
    181,237,54,174,135,165,156,229,103,141,165,162,139,198,224,187,
    144,58,253,104,156,188,27,70,226,101,77,45,59,108,66,230,
    152,209,117,242,125,70,109,52,25,97,165,33,239,41,169,169,
    82,132,53,240,85,39,171,85,92,133,49,133,182,193,175,254,
    182,211,81,153,107,149,14,163,46,77,210,32,128,221,43,113,
    23,238,61,52,37,182,95,165,246,15,52,233,172,83,169,199,
    241,242,152,178,183,10,115,255,144,85,148,28,21,192,62,226,
    98,97,169,247,184,17,188,119,245,219,5,246,56,246,38,109,
    15,190,51,217,195,185,172,68,118,225,98,104,98,114,18,153,
    122,104,131,119,110,141,9,225,7,48,247,207,221,154,153,33,
    68,59,93,68,248,46,40,59,199,7,16,206,247,33,188,107,
    0,192,123,130,13,1,89,142,227,21,13,7,90,72,93,48,
    38,176,31,194,220,191,164,197,152,25,75,49,220,190,164,56,
    61,44,160,175,177,7,38,34,126,108,246,229,73,205,220,53,
    184,133,132,167,9,228,110,171,25,111,220,180,78,143,239,1,
    116,22,230,254,109,32,192,185,132,194,20,96,188,97,103,121,
    0,241,209,93,17,63,37,216,165,36,216,195,128,83,250,90,
    103,198,135,251,28,204,253,123,55,214,71,12,11,153,156,85,
    193,98,26,240,99,140,13,62,110,240,7,136,180,16,246,252,
    204,144,213,125,66,107,225,70,114,104,141,194,173,52,60,62,
    156,182,63,166,95,18,200,148,63,122,98,252,191,129,164,252,
    133,138,156,192,25,6,215,58,63,190,152,94,128,185,255,236,
    226,172,224,19,99,112,131,183,140,2,235,54,149,54,74,121,
    202,1,34,68,28,180,11,108,188,123,192,19,48,247,67,92,
    4,15,131,69,179,104,150,246,148,10,112,194,200,227,123,54,
    183,82,161,179,22,157,176,140,148,84,241,6,3,3,24,174,
    111,72,55,222,90,208,76,105,43,211,135,227,246,24,81,208,
    233,241,82,124,94,252,24,3,175,144,27,101,99,206,92,186,
    184,52,181,116,226,95,249,166,48,245,
};

EmbeddedPython embedded_m5_util_smartdict(
    "m5/util/smartdict.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/python/m5/util/smartdict.py",
    "m5.util.smartdict",
    data_m5_util_smartdict,
    1850,
    8557);

} // anonymous namespace
