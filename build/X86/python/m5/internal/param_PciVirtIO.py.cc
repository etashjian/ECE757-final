#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_PciVirtIO[] = {
    120,156,205,88,95,115,219,198,17,223,3,72,74,164,68,75,
    178,100,201,178,101,139,137,171,148,205,212,102,154,54,113,218,
    122,60,117,100,167,227,76,35,187,96,166,86,208,78,81,8,
    56,146,144,64,128,3,156,228,48,35,189,84,158,182,111,253,
    16,157,62,244,123,228,51,245,181,221,221,195,65,148,108,55,
    153,73,199,140,68,220,44,238,14,123,251,231,183,127,128,0,
    138,191,42,94,191,106,1,228,255,22,0,33,254,4,196,0,
    67,1,174,0,33,5,132,203,112,80,133,236,103,16,86,225,
    5,128,107,129,180,224,20,9,27,126,111,65,50,207,207,212,
    32,182,121,70,192,184,1,178,2,110,21,158,37,75,80,145,
    53,56,104,64,246,39,16,66,36,2,118,195,25,8,103,225,
    5,114,71,162,206,12,103,33,108,48,81,135,112,142,137,6,
    140,23,65,206,129,139,204,103,192,109,34,171,119,145,213,37,
    102,245,53,177,10,113,101,5,194,38,109,71,89,190,160,157,
    21,218,201,103,92,98,46,11,70,178,69,112,23,13,189,4,
    238,146,161,47,131,123,217,208,203,224,46,27,122,5,220,21,
    67,95,1,247,138,161,87,193,93,53,244,26,184,107,134,190,
    10,238,85,67,175,131,187,110,232,107,224,94,51,244,117,112,
    175,27,122,3,220,13,67,223,0,247,134,161,111,130,123,211,
    208,155,224,110,26,186,5,110,11,194,5,144,27,176,255,22,
    244,208,37,139,165,222,111,131,180,97,255,22,184,183,64,226,
    239,109,56,69,175,133,75,188,247,7,188,247,114,185,119,139,
    247,190,3,238,59,32,241,183,165,247,214,160,219,190,130,24,
    136,254,131,127,109,196,0,168,121,28,142,100,150,71,105,226,
    69,73,47,141,44,90,175,209,64,136,9,104,152,41,160,179,
    77,208,249,23,48,110,66,171,128,206,9,32,99,65,242,199,
    22,156,48,113,98,193,184,13,199,2,246,43,16,218,112,140,
    199,84,73,128,190,128,83,11,254,96,211,134,19,28,43,232,
    236,155,80,81,26,55,251,236,108,205,105,6,78,170,112,92,
    133,238,238,177,69,19,7,117,200,254,9,95,109,48,211,89,
    102,106,193,49,142,21,56,173,192,73,13,158,225,38,156,218,
    175,147,250,98,247,24,53,197,153,110,187,130,210,238,76,168,
    75,170,132,81,150,248,67,169,22,145,246,70,126,230,15,189,
    167,65,244,187,40,83,143,159,180,27,102,87,154,223,25,249,
    106,224,240,99,54,217,99,56,82,204,46,77,164,154,67,162,
    23,37,161,55,76,195,195,88,170,89,226,229,245,162,88,122,
    30,47,62,30,142,210,76,61,202,178,52,115,200,164,60,25,
    167,126,249,4,25,52,136,211,92,182,233,52,62,198,33,246,
    138,118,247,70,204,145,4,96,81,233,225,80,230,65,22,141,
    20,122,74,115,164,221,196,173,77,62,226,33,239,227,208,57,
    204,209,159,35,63,144,157,176,19,246,122,81,62,144,89,231,
    209,246,163,187,31,220,237,124,242,120,231,193,111,188,167,206,
    147,79,31,109,127,94,76,222,70,69,252,184,179,119,24,197,
    97,103,247,163,15,59,163,177,26,164,73,103,248,65,39,74,
    148,204,104,241,130,153,238,224,150,203,116,224,243,168,239,69,
    172,170,55,144,241,72,102,36,105,126,141,132,17,139,98,94,
    212,132,45,218,162,137,84,21,47,91,108,88,115,98,39,34,
    101,3,50,0,225,204,54,200,250,7,176,15,17,2,7,22,
    100,27,132,155,125,252,9,114,52,162,167,75,107,22,175,253,
    150,172,164,103,247,109,66,131,158,60,102,172,33,232,112,231,
    61,114,127,2,12,152,42,236,215,64,3,9,241,167,145,149,
    141,105,196,237,196,198,66,230,21,200,255,126,158,67,178,8,
    232,5,204,53,56,181,138,71,253,153,177,217,109,147,224,59,
    140,17,53,136,242,244,121,194,158,32,154,163,169,139,54,121,
    58,126,178,183,47,3,149,111,226,196,23,233,97,43,240,147,
    36,85,45,63,12,91,190,82,89,180,119,168,100,222,82,105,
    107,43,111,215,201,245,75,6,102,37,191,241,200,192,138,32,
    128,176,210,55,97,20,40,188,89,230,27,182,127,46,21,66,
    100,144,134,57,206,19,139,190,84,14,9,169,46,225,240,192,
    28,199,88,108,215,12,114,114,25,247,84,131,65,232,231,185,
    199,199,209,60,227,141,158,62,242,227,67,169,104,127,174,124,
    133,167,18,169,15,154,18,226,174,146,206,70,101,50,163,151,
    164,73,56,70,137,163,224,22,9,115,149,113,55,15,132,188,
    43,136,186,25,28,107,208,68,20,46,90,1,41,87,41,48,
    199,120,91,37,83,0,99,64,20,249,4,177,119,138,89,167,
    109,113,218,96,45,57,48,91,68,209,195,14,65,219,185,78,
    195,6,13,55,140,33,222,188,53,154,23,173,241,30,73,96,
    177,9,2,187,80,182,12,174,157,115,193,181,126,22,92,152,
    47,187,20,36,22,133,210,89,144,216,100,142,236,126,17,17,
    20,126,8,10,92,158,136,3,54,146,67,89,148,81,197,16,
    118,8,151,147,224,236,79,128,211,33,255,48,50,157,245,215,
    25,116,243,251,96,208,190,54,232,79,73,130,249,2,83,77,
    198,82,67,4,4,8,171,48,47,155,246,33,18,227,53,50,
    237,164,81,215,176,22,62,75,154,92,212,184,48,114,187,162,
    243,139,182,181,38,42,132,190,158,13,171,69,177,202,41,29,
    140,178,244,203,113,43,237,181,20,24,25,238,109,229,119,182,
    242,95,98,194,104,221,231,20,164,83,134,78,10,153,28,101,
    24,252,117,190,209,1,237,113,112,123,69,185,65,227,83,225,
    103,159,177,201,57,127,229,42,163,180,53,37,123,55,74,123,
    147,248,63,167,227,27,108,108,27,214,240,106,8,150,209,75,
    57,147,114,35,194,171,120,125,76,102,39,205,37,80,235,234,
    116,181,6,172,28,169,233,252,240,28,138,222,184,106,206,187,
    36,164,9,199,26,148,152,161,203,38,225,41,66,254,10,220,
    180,9,248,11,16,62,16,6,69,76,113,244,210,69,110,94,
    166,237,127,4,78,82,175,40,141,150,142,77,171,72,99,24,
    186,249,93,222,170,43,229,167,240,183,137,12,119,106,131,160,
    170,102,23,109,217,100,85,171,148,209,204,192,250,86,149,171,
    114,62,236,201,93,3,63,167,109,58,192,237,50,192,207,146,
    101,217,79,97,214,122,243,152,155,213,7,123,36,227,175,207,
    16,71,37,227,186,88,182,38,112,244,99,26,110,151,16,18,
    102,238,141,138,187,121,49,199,79,84,60,79,231,213,79,72,
    166,10,107,177,80,227,12,80,114,40,99,166,106,98,230,253,
    50,102,36,103,250,23,220,203,211,104,17,36,78,45,129,47,
    118,216,241,208,59,85,5,100,21,220,26,69,23,247,170,162,
    8,62,97,242,30,229,203,115,101,132,141,180,163,205,87,162,
    66,59,156,134,47,167,148,103,200,231,247,98,127,184,23,250,
    247,247,232,112,146,32,48,225,104,25,117,22,39,213,161,80,
    18,175,211,136,111,223,51,106,29,77,41,199,252,4,207,42,
    213,225,136,10,211,128,19,203,231,3,217,26,202,225,30,138,
    49,136,70,173,94,236,247,217,123,118,161,238,19,163,174,98,
    247,95,44,233,57,101,175,157,180,21,164,9,22,136,195,64,
    165,89,43,148,40,164,12,91,183,91,92,93,90,81,222,242,
    247,112,213,15,148,14,141,243,241,206,157,164,159,245,115,110,
    26,15,158,19,57,69,239,123,248,106,27,97,215,28,24,115,
    233,119,174,178,84,112,163,172,227,12,43,47,190,197,168,177,
    206,132,31,210,240,35,26,182,96,186,21,165,67,6,165,67,
    201,160,53,76,86,117,161,22,38,131,253,41,61,147,191,28,
    242,123,223,38,228,245,87,156,34,240,107,180,83,206,208,139,
    54,141,117,42,42,110,195,124,19,154,227,201,121,250,0,19,
    214,120,230,18,165,136,153,239,154,34,56,160,166,24,74,209,
    255,53,51,56,239,127,79,180,113,184,137,253,95,89,65,76,
    170,218,212,89,97,95,152,174,127,82,79,254,234,176,250,50,
    232,188,32,147,190,146,218,141,215,166,166,56,231,26,45,202,
    65,233,76,163,93,249,34,116,183,212,240,148,219,174,241,202,
    68,75,206,190,21,207,176,71,194,182,253,152,141,224,89,186,
    115,63,3,111,165,180,5,153,53,145,207,189,11,246,208,157,
    57,73,227,143,70,50,9,207,186,110,94,153,18,44,40,151,
    13,225,172,229,193,22,123,5,175,151,131,150,244,155,80,151,
    189,90,45,195,116,122,254,101,96,103,198,179,109,202,126,103,
    41,220,33,191,234,164,93,230,107,231,23,165,167,214,94,129,
    218,163,40,165,55,189,215,174,97,203,197,101,21,105,54,30,
    67,63,148,177,84,242,162,199,245,183,68,93,65,66,137,117,
    49,29,227,11,24,191,190,224,125,236,121,211,44,29,31,225,
    89,3,58,148,170,28,149,142,26,22,143,43,162,94,169,11,
    174,216,23,62,249,106,41,185,44,114,155,62,206,29,78,36,
    11,165,49,249,211,164,169,147,28,79,212,118,238,248,67,253,
    141,137,191,150,56,111,209,112,203,248,131,163,65,191,201,241,
    203,145,126,85,197,216,225,118,130,187,7,231,142,177,177,214,
    65,43,240,80,30,69,129,252,216,71,103,204,151,75,221,113,
    174,228,144,235,159,76,14,135,222,103,114,152,102,227,207,210,
    80,127,212,125,16,134,153,227,39,125,233,29,73,234,94,20,
    161,228,65,209,174,232,189,102,101,165,228,121,126,157,121,235,
    5,156,208,31,243,56,220,245,220,118,156,6,7,50,44,230,
    151,206,207,63,76,135,62,250,227,140,67,55,50,28,40,140,
    194,140,86,73,127,116,127,228,199,209,87,114,98,47,122,78,
    171,204,61,73,49,23,251,170,151,102,195,137,131,30,39,42,
    219,78,113,72,227,137,135,31,14,253,226,225,9,134,81,90,
    204,21,239,6,250,142,27,138,243,201,156,225,155,201,126,132,
    198,205,76,115,161,119,23,121,141,144,164,54,94,17,46,147,
    79,78,17,234,186,213,215,95,60,238,179,133,119,113,160,175,
    129,245,133,186,168,89,244,5,218,22,13,209,20,21,49,223,
    172,219,245,90,189,106,99,56,208,204,178,104,216,245,198,188,
    248,166,255,117,12,155,134,181,62,87,23,255,5,26,19,13,
    90,
};

EmbeddedPython embedded_m5_internal_param_PciVirtIO(
    "m5/internal/param_PciVirtIO.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_PciVirtIO.py",
    "m5.internal.param_PciVirtIO",
    data_m5_internal_param_PciVirtIO,
    2289,
    6999);

} // anonymous namespace
