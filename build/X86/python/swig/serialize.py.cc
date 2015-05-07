#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_serialize[] = {
    120,156,197,88,109,111,220,198,17,158,37,121,39,221,89,178,
    78,22,98,231,197,173,89,4,70,175,65,237,75,145,23,167,
    168,97,36,113,156,34,65,32,59,167,20,118,148,160,44,69,
    238,233,40,81,228,129,187,178,115,129,244,37,50,218,126,203,
    143,8,242,161,255,163,255,170,31,218,121,102,73,234,228,54,
    64,191,244,42,28,23,203,221,229,236,204,51,207,204,236,42,
    161,250,175,195,207,251,33,145,249,7,119,82,254,41,202,137,
    142,20,237,42,82,90,81,186,73,135,29,170,222,166,180,67,
    207,137,118,61,210,30,157,113,199,167,175,60,42,214,228,155,
    46,229,190,140,40,154,247,73,7,180,219,161,199,197,38,5,
    186,75,135,125,170,254,68,74,169,66,209,147,116,133,210,85,
    122,206,210,185,211,19,129,171,148,246,165,211,163,244,146,116,
    250,52,31,144,190,68,187,44,124,133,118,215,89,212,27,44,
    234,178,136,250,59,68,165,60,115,133,210,117,44,103,93,190,
    196,202,0,43,101,143,203,34,101,131,210,13,72,153,176,13,
    131,118,33,11,246,233,96,147,118,55,73,243,111,64,103,108,
    38,235,191,51,220,98,251,179,127,242,223,80,113,207,174,113,
    243,84,87,38,43,139,40,43,38,101,230,97,190,139,6,176,
    37,104,86,106,252,238,3,191,191,145,128,151,122,53,126,167,
    196,130,21,224,201,61,58,149,206,169,71,243,33,157,40,58,
    8,40,245,233,132,183,233,64,129,125,69,103,30,125,237,99,
    193,41,183,1,91,252,115,10,172,3,239,64,44,118,146,86,
    232,180,67,39,29,218,121,114,226,97,224,176,71,213,143,244,
    237,117,17,186,42,66,61,58,225,54,160,179,128,78,187,244,
    152,23,241,208,65,15,230,171,39,39,108,41,143,236,12,3,
    214,118,123,193,92,152,146,102,85,17,31,105,219,231,126,100,
    116,149,197,121,246,173,30,246,155,249,210,220,158,197,118,58,
    150,15,124,32,113,52,179,34,168,44,180,189,196,157,73,86,
    164,209,81,153,30,231,218,174,66,74,52,201,114,29,69,50,
    249,201,209,172,172,236,131,170,42,171,49,192,148,193,188,140,
    219,47,0,101,146,151,70,15,177,155,108,51,134,120,139,213,
    147,153,72,132,2,162,36,62,78,181,73,170,108,102,217,71,
    78,34,86,67,218,16,222,145,198,236,114,51,58,102,107,204,
    44,78,244,40,29,165,147,73,102,166,186,26,61,184,255,224,
    206,59,119,70,31,127,178,253,193,103,209,163,241,195,79,31,
    220,255,162,30,188,197,134,196,249,104,239,56,203,211,209,147,
    247,222,29,205,230,118,90,22,35,243,44,219,31,181,200,220,
    230,209,43,216,131,71,163,76,172,139,166,58,159,233,10,202,
    153,87,177,191,26,168,53,213,85,190,26,170,117,238,117,248,
    241,213,117,239,146,218,206,96,95,2,155,65,42,191,161,209,
    15,36,14,99,127,31,122,84,93,7,73,14,248,167,224,85,
    166,202,14,230,60,153,251,28,192,184,209,3,31,174,119,131,
    39,66,44,102,24,175,188,11,95,23,36,236,232,208,65,151,
    28,107,152,108,142,70,213,28,45,47,135,24,143,133,7,100,
    190,191,40,161,24,16,3,207,209,197,67,87,121,171,239,132,
    136,59,67,40,190,45,180,176,211,204,148,207,10,1,31,125,
    9,157,29,198,228,209,252,225,222,129,78,172,185,193,3,95,
    150,199,97,18,23,69,105,195,56,77,195,216,218,42,219,59,
    182,218,132,182,12,111,154,97,15,222,222,108,152,213,202,155,
    207,26,38,193,235,204,36,247,146,102,137,229,151,45,121,17,
    252,141,182,204,138,105,153,26,30,135,136,125,109,199,80,210,
    94,230,230,131,102,59,161,223,176,219,144,197,232,124,34,124,
    79,242,216,152,72,182,195,184,80,12,95,63,141,243,99,109,
    177,222,216,216,242,174,232,186,141,150,71,178,151,37,32,107,
    43,129,92,84,148,69,58,103,37,179,228,117,236,255,178,80,
    109,141,64,182,151,152,104,43,220,118,105,157,137,55,240,18,
    216,19,212,52,19,138,93,133,245,36,110,87,117,190,96,186,
    157,113,86,25,122,146,22,196,48,9,191,16,61,124,60,6,
    155,199,175,161,185,142,230,103,141,237,75,1,96,253,69,0,
    222,196,166,158,88,157,248,181,125,109,8,109,95,8,161,87,
    206,67,136,83,224,14,66,193,67,192,156,135,130,15,4,170,
    123,53,239,17,100,236,122,158,94,96,187,224,50,30,192,222,
    110,67,212,49,216,183,72,193,253,5,10,142,225,18,225,223,
    248,149,159,194,240,198,255,9,195,125,135,225,91,216,116,173,
    102,206,186,48,166,175,18,184,221,171,17,21,52,63,226,206,
    252,26,208,92,196,241,26,87,180,199,197,186,148,38,41,111,
    82,121,93,226,112,240,186,78,0,142,77,124,186,90,151,28,
    131,56,159,85,229,55,243,176,156,132,150,26,29,238,222,52,
    183,111,154,223,113,38,8,239,73,110,113,185,192,69,123,165,
    103,21,71,117,79,94,92,164,70,174,74,213,165,131,241,126,
    9,56,122,13,202,146,152,140,173,144,143,150,7,113,191,133,
    24,26,255,22,59,246,5,95,159,174,241,211,87,162,86,84,
    74,86,148,19,132,204,242,243,33,144,134,177,154,112,240,26,
    239,56,165,197,30,88,54,254,229,5,174,44,195,154,241,27,
    208,171,137,179,46,181,204,192,227,67,95,80,255,47,36,7,
    44,69,127,38,176,128,157,93,7,139,132,37,30,56,115,11,
    203,255,72,146,112,254,67,101,243,92,208,121,117,74,226,152,
    52,119,100,169,43,116,159,210,95,23,178,213,153,79,10,69,
    201,175,143,80,139,69,41,104,195,84,232,243,95,21,158,224,
    98,60,195,67,211,216,96,153,139,92,191,141,220,243,196,215,
    158,128,56,29,45,133,89,171,110,175,8,106,253,254,156,87,
    200,248,175,169,45,111,129,45,191,70,115,171,37,138,106,198,
    254,215,26,222,120,49,69,47,212,168,200,165,197,143,161,70,
    32,138,111,116,221,41,161,150,16,239,229,186,141,135,78,19,
    15,31,181,241,160,37,87,63,151,3,54,90,15,190,63,243,
    20,95,57,248,100,130,211,126,64,186,67,187,93,210,43,56,
    7,227,46,209,169,239,18,28,75,72,217,66,223,230,145,196,
    134,132,120,161,52,8,88,219,14,198,150,16,206,215,104,190,
    89,94,34,129,187,239,230,241,209,94,26,223,251,28,251,97,
    211,164,9,62,175,177,96,176,104,1,2,71,253,148,17,242,
    250,102,99,201,211,229,37,145,223,176,248,214,2,9,153,180,
    76,36,115,124,49,213,225,145,62,218,227,157,167,217,44,156,
    228,241,190,248,200,175,45,124,216,88,104,197,237,47,22,99,
    131,244,180,93,134,73,89,112,158,63,78,108,89,133,169,102,
    189,116,26,222,10,165,72,132,153,9,227,61,158,141,19,235,
    2,225,98,64,203,73,47,174,246,141,28,234,14,159,161,187,
    92,31,71,124,181,204,248,32,59,110,125,252,111,44,133,142,
    233,57,57,197,140,78,27,217,175,210,50,43,2,156,249,135,
    70,213,33,46,57,231,197,73,142,217,46,1,112,121,231,59,
    144,157,187,68,252,46,154,95,161,185,137,70,238,105,240,127,
    170,249,202,167,163,197,20,96,7,212,30,166,248,110,103,171,
    114,206,133,94,106,38,191,231,81,180,228,10,56,98,241,143,
    168,206,182,93,206,180,61,62,81,247,148,48,232,133,255,7,
    56,165,174,52,36,55,115,3,159,210,120,163,181,89,110,175,
    13,50,119,48,130,243,204,54,95,52,220,149,56,196,202,95,
    160,121,189,65,76,120,233,78,11,82,141,221,9,168,208,207,
    132,222,194,230,241,109,52,80,212,226,117,17,77,193,177,210,
    251,124,35,211,213,114,145,115,9,204,157,205,238,65,105,131,
    220,131,219,73,111,131,49,244,112,9,246,85,159,111,42,129,
    90,91,239,249,189,110,175,227,51,182,24,217,82,125,191,215,
    191,218,237,169,127,1,186,204,249,28,
};

EmbeddedPython embedded_m5_internal_serialize(
    "m5/internal/serialize.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/swig/serialize.py",
    "m5.internal.serialize",
    data_m5_internal_serialize,
    1770,
    4772);

} // anonymous namespace