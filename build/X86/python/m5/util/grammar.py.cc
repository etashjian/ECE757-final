#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_grammar[] = {
    120,156,189,87,109,111,27,199,17,158,61,190,137,52,101,41,
    182,163,90,109,94,206,109,21,177,77,98,2,65,147,52,129,
    32,196,118,229,52,173,193,26,39,39,69,141,2,236,233,184,
    164,142,34,239,14,183,203,90,2,36,180,176,3,180,95,242,
    127,250,55,250,15,250,161,127,162,31,138,118,158,217,91,74,
    78,131,34,95,66,139,92,207,238,206,222,44,103,158,103,102,
    46,161,234,95,141,191,159,132,68,230,9,11,35,254,40,154,
    17,61,93,202,138,158,6,94,174,137,28,144,174,211,88,209,
    168,70,95,18,189,32,250,221,211,6,141,234,164,155,178,218,
    88,174,182,112,232,176,215,228,7,167,255,225,127,3,219,97,
    241,113,92,26,125,80,150,121,153,248,59,4,252,189,143,59,
    220,98,65,179,117,133,147,108,244,75,182,94,163,232,176,7,
    141,164,86,93,23,223,7,80,127,157,5,75,52,85,116,78,
    116,174,232,69,64,234,60,192,100,40,119,62,236,41,214,24,
    244,112,192,182,121,56,56,77,116,97,211,60,179,107,60,27,
    14,211,44,181,195,161,109,96,63,63,209,153,211,172,243,96,
    244,108,108,91,44,204,181,49,241,68,71,216,233,145,31,204,
    231,60,244,23,70,151,166,136,19,221,31,245,71,227,113,106,
    142,117,217,63,120,112,240,225,251,31,246,31,126,54,184,247,
    104,248,56,250,205,175,14,30,60,169,22,223,29,167,89,60,
    235,155,50,233,23,103,246,56,207,250,243,247,251,11,155,206,
    250,147,50,158,207,227,242,110,113,22,225,167,222,129,9,92,
    131,212,166,26,244,32,85,55,206,226,185,230,27,119,100,50,
    207,71,139,25,166,80,24,228,153,150,195,151,183,252,174,175,
    138,199,135,48,1,179,77,37,254,250,212,109,47,99,91,247,
    177,125,124,25,91,2,68,0,37,37,66,13,152,130,80,7,
    166,70,109,128,9,48,98,184,53,105,212,148,45,198,82,75,
    132,53,26,173,137,208,6,46,224,135,68,85,16,194,247,215,
    48,181,67,130,87,70,196,73,147,202,219,192,8,91,120,30,
    80,38,48,1,62,148,195,7,162,58,176,64,168,243,165,121,
    99,41,134,169,9,227,44,76,103,51,61,137,103,97,108,109,
    153,30,45,172,22,44,218,235,60,220,243,75,130,102,137,201,
    76,159,14,79,158,197,229,196,136,90,36,145,195,227,171,197,
    21,68,197,190,34,240,181,139,226,145,62,213,229,195,56,177,
    121,121,246,22,22,155,130,168,46,255,137,207,234,21,151,196,
    103,127,250,63,62,227,168,84,235,37,89,69,211,128,166,53,
    208,228,133,162,223,7,116,193,31,86,168,209,84,210,0,47,
    154,223,202,241,134,119,121,128,227,28,200,61,86,226,48,134,
    152,173,209,222,101,52,154,46,26,160,232,32,130,31,191,69,
    28,196,173,249,194,22,11,107,240,43,248,167,27,240,230,201,
    177,14,221,114,56,78,249,248,124,97,108,168,179,81,248,44,
    181,199,33,28,212,94,30,28,165,101,250,111,206,76,178,100,
    227,35,103,177,7,28,71,215,176,132,32,230,70,248,85,196,
    246,88,50,133,41,102,169,141,54,60,39,249,209,6,143,182,
    56,112,22,39,137,7,64,221,3,32,90,135,46,238,200,246,
    228,127,54,181,18,40,220,240,80,144,164,235,177,240,54,85,
    169,86,176,16,116,213,109,181,161,106,170,173,58,234,149,32,
    241,76,170,251,44,251,75,37,113,98,112,156,4,84,190,70,
    19,146,152,201,56,229,176,97,47,144,189,143,100,73,33,251,
    43,72,129,219,172,201,230,23,178,89,91,110,214,221,102,93,
    54,255,66,236,218,105,19,31,134,205,185,123,118,64,95,137,
    42,195,3,211,166,59,208,148,3,127,147,3,45,124,46,15,
    212,253,129,150,76,91,238,64,75,14,252,163,186,174,249,187,
    96,205,77,24,133,219,156,111,182,69,175,35,122,107,170,210,
    251,23,141,174,189,164,215,173,244,214,69,239,109,175,119,71,
    241,174,232,181,105,218,161,67,198,193,232,58,217,46,236,189,
    16,66,141,3,218,122,94,21,164,141,101,194,153,129,157,38,
    234,2,32,91,30,32,188,40,248,23,196,1,76,22,216,73,
    22,101,169,51,59,148,35,82,74,83,242,73,200,239,153,124,
    81,38,90,40,190,151,113,41,216,79,65,113,219,189,122,60,
    205,180,80,100,119,199,236,134,249,209,84,39,54,60,142,77,
    152,229,151,180,10,177,217,131,213,232,251,24,96,195,93,114,
    251,165,155,22,179,179,232,7,88,121,13,3,136,16,189,238,
    147,29,12,101,185,99,144,100,192,179,66,95,201,135,24,96,
    111,37,20,184,38,149,114,162,45,44,14,135,31,193,218,199,
    21,246,219,170,197,232,239,92,25,223,184,50,182,85,93,109,
    124,237,255,78,80,83,6,63,118,207,176,191,178,201,190,4,
    34,65,90,64,216,90,158,51,255,36,233,76,56,248,86,218,
    18,46,73,86,234,157,245,137,115,171,74,173,130,139,89,131,
    46,26,21,200,25,182,76,145,11,198,60,203,107,210,214,40,
    199,24,193,23,175,114,62,101,72,97,53,173,203,161,107,52,
    237,130,102,31,84,147,117,208,202,79,174,131,32,126,178,1,
    254,124,112,193,252,96,246,108,18,215,10,172,222,160,243,22,
    110,121,193,230,214,104,122,19,156,97,59,140,235,115,169,199,
    231,124,99,170,93,180,169,186,197,45,71,226,54,185,2,60,
    48,63,66,68,203,201,98,206,48,115,9,247,72,135,113,232,
    124,244,78,248,140,49,6,88,9,116,37,34,69,201,153,54,
    65,39,102,4,49,177,200,130,140,73,110,115,201,199,26,85,
    117,188,200,18,201,186,130,125,145,70,250,104,49,145,212,107,
    203,56,57,97,11,189,87,49,193,85,82,147,242,19,227,44,
    209,50,61,138,141,118,151,16,48,70,63,132,30,120,49,22,
    12,103,250,153,96,88,30,155,204,152,53,34,165,25,151,6,
    65,191,187,91,81,112,142,119,56,71,103,17,161,150,70,187,
    24,122,190,8,120,171,81,232,87,30,69,46,231,202,19,11,
    136,142,54,121,33,62,187,100,194,40,102,104,194,142,99,112,
    244,83,236,34,69,71,125,12,63,89,234,165,137,21,189,194,
    61,23,98,169,205,98,102,87,194,163,174,183,60,116,14,253,
    3,204,133,66,36,20,143,155,76,144,13,181,174,182,88,94,
    151,191,205,224,54,19,105,93,37,190,152,224,43,173,70,246,
    53,114,148,187,144,185,135,176,65,85,104,128,69,69,217,93,
    175,22,136,218,125,200,92,65,88,51,187,9,167,48,121,216,
    189,142,33,224,147,35,16,148,132,67,12,94,166,202,87,193,
    178,207,67,228,75,243,222,55,129,85,115,5,215,229,18,179,
    97,94,74,247,112,137,221,158,164,184,119,48,188,235,67,2,
    13,17,208,149,95,34,44,218,243,10,165,142,71,87,250,128,
    187,84,53,3,209,207,105,53,45,186,176,192,133,77,46,11,
    99,155,85,208,154,234,6,143,93,206,104,155,174,234,195,73,
    13,159,193,208,220,179,39,203,190,116,133,82,234,224,88,41,
    104,83,121,11,252,158,139,198,184,78,91,220,2,102,155,210,
    38,138,34,191,6,98,137,93,224,90,63,14,222,243,170,225,
    150,55,21,243,38,143,135,103,153,141,79,67,97,57,151,159,
    112,199,124,188,51,226,79,103,127,127,199,236,237,73,249,50,
    219,223,160,136,94,46,31,179,126,15,151,141,208,41,70,119,
    150,165,71,159,22,220,176,97,231,143,241,108,161,229,29,69,
    194,239,24,39,69,81,152,56,55,147,149,68,0,53,161,24,
    202,237,255,12,75,29,113,127,147,121,242,86,176,169,150,142,
    95,182,91,63,35,223,136,79,165,60,108,175,95,245,251,184,
    230,92,91,251,95,215,10,198,13,210,212,103,85,175,156,28,
    199,156,33,45,227,122,199,132,159,132,226,94,41,88,14,147,
    15,188,231,162,251,24,94,246,84,244,11,12,7,171,194,41,
    188,100,157,151,254,74,203,87,149,26,103,144,129,203,151,88,
    136,164,49,151,142,68,154,145,31,147,111,61,192,184,232,30,
    134,135,24,62,165,85,190,6,163,88,161,48,24,220,172,169,
    218,141,246,245,246,238,141,91,237,110,123,205,101,13,180,225,
    14,7,179,179,187,104,241,144,55,165,74,96,1,109,94,164,
    124,4,220,107,141,244,102,242,224,149,253,12,185,207,158,123,
    3,218,71,85,148,62,7,175,7,221,96,171,241,95,4,209,
    204,234,
};

EmbeddedPython embedded_m5_util_grammar(
    "m5/util/grammar.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/python/m5/util/grammar.py",
    "m5.util.grammar",
    data_m5_util_grammar,
    1874,
    4656);

} // anonymous namespace