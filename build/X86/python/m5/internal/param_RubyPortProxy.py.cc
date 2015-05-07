#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyPortProxy[] = {
    120,156,205,88,255,111,219,198,21,127,71,74,178,37,91,177,
    28,59,118,236,56,53,219,52,152,86,44,81,215,173,77,183,
    5,193,178,52,29,90,44,142,75,21,72,202,22,99,105,242,
    100,81,150,72,129,60,39,85,97,255,50,7,219,126,219,31,
    49,236,135,253,31,251,11,246,15,109,239,189,227,209,82,226,
    20,5,58,76,181,197,195,227,221,241,238,125,249,188,47,119,
    33,20,127,85,124,126,235,0,228,255,22,0,17,254,4,12,
    1,70,2,60,1,66,10,136,214,224,168,10,217,47,33,170,
    194,11,0,207,2,105,193,25,18,54,124,105,65,178,204,223,
    212,96,104,115,143,128,73,3,100,5,188,42,60,73,86,161,
    34,107,112,212,128,236,107,16,66,36,2,158,70,11,16,45,
    194,11,92,29,137,58,47,184,8,81,131,137,58,68,75,76,
    52,96,210,2,185,4,30,46,190,0,94,19,151,122,7,151,
    186,196,75,253,139,150,138,112,100,29,162,38,77,71,94,190,
    160,153,21,154,201,123,92,226,85,86,12,103,45,240,90,134,
    94,5,111,213,208,151,193,187,108,232,53,240,214,12,189,14,
    222,186,161,175,128,119,197,208,27,224,109,24,122,19,188,77,
    67,95,5,239,170,161,183,192,219,50,244,54,120,219,134,190,
    6,222,53,67,239,128,183,99,232,235,224,93,135,104,5,100,
    11,6,111,64,15,213,221,42,101,218,5,105,195,192,1,207,
    1,137,191,93,56,67,139,68,171,60,247,77,158,123,185,156,
    251,22,207,189,1,222,13,144,248,123,75,207,173,65,183,125,
    5,237,27,255,7,255,218,104,95,80,203,216,60,147,89,30,
    167,137,31,39,189,52,182,104,188,70,13,161,33,164,102,161,
    128,197,3,130,197,63,129,49,17,89,5,44,78,1,23,22,
    196,255,208,130,83,38,78,45,152,180,225,68,192,160,2,145,
    13,39,184,77,149,24,56,20,112,102,193,87,54,77,56,197,
    182,130,134,124,3,42,74,99,98,192,134,212,43,45,192,105,
    21,78,170,208,125,122,98,81,199,81,29,178,127,192,183,59,
    188,232,34,47,106,193,9,182,21,56,171,192,105,13,158,224,
    36,236,26,212,73,124,241,244,4,37,197,158,110,187,130,220,
    238,77,137,75,162,68,113,150,4,35,169,214,145,246,199,65,
    22,140,124,247,248,96,178,159,102,106,63,75,191,153,180,27,
    102,102,154,223,30,7,170,239,242,167,54,233,100,52,86,188,
    100,154,72,181,132,68,47,78,34,127,148,70,199,67,169,22,
    105,61,191,23,15,165,239,243,224,39,163,49,174,249,48,203,
    210,204,37,181,114,231,48,13,202,47,72,169,225,48,205,101,
    155,118,227,109,92,90,94,209,236,222,152,87,36,6,152,93,
    250,56,146,121,152,197,99,133,214,210,43,210,108,90,173,77,
    118,226,38,63,194,166,115,156,163,77,199,65,40,59,81,39,
    234,245,226,188,47,179,206,195,7,15,239,188,127,167,243,241,
    39,123,247,255,224,239,187,143,63,125,248,224,243,162,243,22,
    10,18,12,59,7,199,241,48,234,60,253,240,131,206,120,162,
    250,105,210,25,189,223,137,19,37,51,26,188,64,85,183,113,
    218,101,218,244,121,124,232,199,44,174,223,151,195,177,204,136,
    219,124,155,24,18,45,177,44,106,194,22,109,209,68,170,138,
    143,45,118,172,37,177,23,147,192,33,41,129,240,102,27,132,
    253,29,216,150,8,133,35,11,178,29,194,207,0,127,130,12,
    142,40,234,210,152,197,99,159,145,166,116,239,192,38,84,232,
    206,19,198,28,130,15,103,222,37,24,36,192,192,169,194,160,
    6,26,80,136,67,141,176,108,66,45,78,167,101,44,92,188,
    2,249,223,102,87,72,90,128,150,192,120,130,93,27,184,213,
    159,24,163,221,54,49,190,199,56,81,253,56,79,159,39,108,
    13,162,217,171,186,168,147,253,201,227,131,129,12,85,190,139,
    29,95,164,199,78,24,36,73,170,156,32,138,156,64,169,44,
    62,56,86,50,119,84,234,220,204,219,117,50,255,170,129,90,
    185,222,100,108,160,69,48,64,104,233,151,40,14,21,190,172,
    241,11,235,63,151,10,97,210,79,163,28,251,105,137,67,169,
    92,98,82,93,194,230,190,217,142,241,216,174,25,244,228,114,
    216,83,13,6,98,144,231,62,111,71,253,140,57,250,250,89,
    48,60,150,138,230,231,42,80,184,43,145,122,163,57,162,238,
    42,201,109,196,38,85,250,73,154,68,19,228,58,14,111,16,
    67,87,25,123,203,64,232,187,130,200,91,192,182,6,77,68,
    98,203,10,73,192,74,129,59,198,220,6,169,3,24,7,162,
    136,45,136,191,51,140,64,109,139,67,8,75,202,14,234,16,
    69,31,187,4,111,247,26,53,59,212,92,55,202,152,143,70,
    154,47,107,228,93,226,194,98,53,132,118,33,112,233,100,123,
    51,78,182,117,238,100,24,63,187,228,44,22,185,212,185,179,
    216,164,146,236,94,225,25,228,134,8,14,28,158,242,7,86,
    148,219,34,5,212,12,148,93,194,231,52,72,15,167,64,234,
    146,141,24,161,238,214,235,148,186,251,99,81,234,161,86,234,
    47,136,139,229,2,91,77,198,84,67,132,4,12,171,80,49,
    171,247,35,36,38,155,164,222,105,197,110,98,126,124,146,52,
    57,209,113,178,228,242,68,199,26,173,111,77,84,8,133,61,
    27,54,138,4,150,83,104,24,19,79,78,218,115,20,24,30,
    238,222,204,111,223,204,127,131,193,195,185,199,225,72,135,15,
    29,32,50,57,206,48,16,212,249,69,59,183,207,142,238,23,
    233,7,13,64,197,0,219,141,213,206,177,44,87,25,133,176,
    57,234,188,81,234,156,68,248,21,177,208,96,133,219,176,137,
    79,67,48,159,126,202,145,149,11,20,30,197,231,119,164,122,
    146,94,2,149,171,110,87,75,193,2,146,168,238,79,102,208,
    52,23,241,220,119,136,81,227,154,53,40,177,67,143,77,2,
    144,183,252,5,184,160,19,240,103,32,156,32,28,10,255,98,
    79,166,135,204,189,70,211,255,8,28,180,46,72,151,150,246,
    83,171,8,107,232,198,249,29,158,170,179,231,167,240,215,169,
    136,119,102,131,160,76,103,23,37,219,116,166,171,148,158,205,
    0,251,94,217,172,50,27,2,200,100,253,32,167,105,218,217,
    237,210,217,207,131,103,89,103,97,4,155,15,246,22,245,230,
    62,241,249,251,115,228,81,26,185,38,214,172,41,60,253,140,
    154,91,37,148,132,233,251,191,179,188,251,114,220,159,202,132,
    190,142,181,31,19,95,21,150,100,165,198,49,109,102,149,210,
    135,170,198,135,222,43,125,72,114,6,120,193,53,63,181,22,
    193,227,204,18,120,184,195,138,136,206,85,21,144,85,240,106,
    228,109,92,207,138,194,25,133,137,133,180,223,76,122,97,101,
    237,105,53,150,8,209,198,167,230,155,57,198,30,178,255,221,
    97,48,58,136,130,123,62,49,64,92,132,198,61,45,35,82,
    107,90,36,114,45,241,58,169,248,245,93,35,218,179,57,198,
    157,159,19,78,140,72,236,101,81,26,114,176,249,188,47,157,
    145,28,29,32,43,253,120,236,244,134,193,33,91,209,46,68,
    126,108,68,86,12,131,151,83,126,78,17,109,47,117,194,52,
    193,228,113,28,170,52,115,34,137,140,202,200,185,229,112,230,
    113,226,220,9,14,112,52,8,149,118,149,217,24,192,21,103,
    144,29,230,92,92,30,61,39,114,206,40,240,241,56,28,99,
    133,253,181,81,153,62,163,149,105,132,139,106,237,119,152,153,
    241,196,163,38,58,66,126,64,205,79,169,185,9,243,207,54,
    29,220,143,50,68,78,138,173,97,16,171,11,46,199,102,38,
    238,211,183,249,171,97,224,209,247,9,3,250,118,167,8,6,
    53,115,45,180,0,114,145,142,227,94,131,238,53,168,103,137,
    34,196,194,15,141,16,236,75,115,246,162,222,255,52,48,184,
    239,253,136,36,114,185,190,253,174,160,32,166,197,109,234,160,
    48,16,230,80,48,45,43,95,80,108,95,140,53,63,204,100,
    160,164,54,233,246,92,21,192,33,71,179,211,47,13,107,164,
    44,207,75,119,74,73,207,184,34,155,172,79,85,237,108,103,
    241,4,203,39,172,236,79,88,25,190,165,139,251,115,48,87,
    74,157,108,98,147,200,231,254,5,122,209,5,60,113,20,140,
    199,50,137,206,139,115,30,153,35,76,40,172,209,41,216,84,
    68,88,137,175,227,243,170,51,147,156,83,98,179,133,171,165,
    251,206,215,214,12,246,196,88,185,77,103,168,243,136,238,146,
    141,117,12,47,195,183,251,107,48,33,189,132,115,36,135,82,
    201,139,172,167,232,227,226,160,27,73,76,119,233,4,207,92,
    124,90,193,247,161,239,207,59,27,124,168,3,186,62,61,82,
    54,168,97,62,168,87,234,130,83,241,75,119,191,154,207,183,
    193,212,228,147,220,229,16,177,82,106,131,239,39,77,242,99,
    15,161,211,230,94,48,210,151,76,124,85,226,190,73,205,13,
    163,85,198,182,62,186,241,73,72,159,79,209,27,184,78,224,
    178,192,189,13,69,122,157,149,130,181,123,222,213,157,228,74,
    142,248,250,81,119,118,227,209,120,40,31,201,81,154,77,248,
    114,87,119,223,47,234,142,98,96,165,28,192,14,125,59,199,
    9,81,247,61,24,166,225,145,140,138,254,213,217,254,143,210,
    81,128,26,94,153,222,177,152,73,0,143,50,26,37,121,208,
    160,113,48,140,191,149,124,17,88,204,213,236,210,199,50,57,
    230,221,145,157,71,105,36,89,174,251,81,148,185,65,114,40,
    253,103,146,42,40,69,176,156,101,221,140,44,78,133,84,206,
    239,175,6,89,134,96,38,15,99,220,51,99,85,150,195,58,
    204,16,16,148,243,154,216,60,253,241,156,17,171,11,114,125,
    95,113,143,85,75,24,164,59,189,250,74,93,212,44,186,75,
    182,69,67,52,69,69,44,55,235,118,189,86,175,218,136,106,
    234,89,19,13,187,222,88,22,175,255,223,66,228,55,172,173,
    70,93,252,23,247,196,18,35,
};

EmbeddedPython embedded_m5_internal_param_RubyPortProxy(
    "m5/internal/param_RubyPortProxy.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_RubyPortProxy.py",
    "m5.internal.param_RubyPortProxy",
    data_m5_internal_param_RubyPortProxy,
    2216,
    6911);

} // anonymous namespace
