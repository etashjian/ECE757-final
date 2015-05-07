#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DMA_Controller[] = {
    120,156,205,89,221,114,19,201,21,62,61,35,201,72,88,88,
    198,127,24,27,16,97,73,180,91,1,111,54,217,101,147,80,
    84,136,129,212,110,5,67,70,84,193,78,82,153,29,207,180,
    236,177,71,51,202,76,11,86,91,246,77,76,37,185,203,67,
    164,114,145,247,200,93,222,33,175,146,156,115,122,122,44,129,
    205,82,187,169,8,176,186,90,103,206,116,159,159,239,252,116,
    43,128,226,95,21,63,191,104,3,228,255,22,0,33,254,9,
    136,1,250,2,92,1,66,10,8,23,96,191,10,217,79,32,
    172,194,75,0,215,2,105,193,17,78,108,248,173,5,201,44,
    191,83,131,216,102,138,128,81,3,100,5,220,42,60,77,230,
    161,34,107,176,223,128,236,75,16,66,36,2,158,133,51,16,
    158,129,151,184,58,78,234,188,224,25,8,27,60,169,67,120,
    150,39,13,24,181,64,158,5,23,23,159,1,183,137,75,125,
    128,75,157,227,165,254,73,75,133,248,100,17,194,38,177,163,
    44,95,16,103,133,56,121,143,115,188,202,156,145,172,5,110,
    203,204,231,193,157,55,243,243,224,158,55,243,5,112,23,204,
    124,17,220,69,51,95,2,119,201,204,151,193,93,54,243,21,
    112,87,204,252,2,184,23,204,124,21,220,85,51,191,8,238,
    69,51,95,3,119,205,204,215,193,93,55,243,75,224,94,50,
    243,203,224,94,134,112,14,228,101,216,187,2,61,52,125,171,
    212,175,13,210,134,189,171,224,94,5,137,127,109,56,66,239,
    132,243,204,251,61,230,61,95,242,94,99,222,247,192,125,15,
    36,254,93,211,188,53,232,118,150,208,215,209,127,240,95,7,
    125,13,106,22,135,231,50,203,163,52,241,162,164,151,70,22,
    61,175,209,64,200,8,104,152,41,32,178,73,16,249,7,48,
    62,66,171,128,200,33,224,194,130,228,143,45,56,228,201,161,
    5,163,14,28,8,216,171,64,104,195,1,110,83,37,1,118,
    4,28,89,240,59,155,24,14,113,172,160,83,47,67,69,105,
    124,236,177,83,245,74,51,112,88,133,131,42,116,159,29,88,
    68,216,175,67,246,119,248,122,157,23,61,195,139,90,112,128,
    99,5,142,42,112,88,131,167,200,132,164,189,58,169,47,158,
    29,160,166,72,233,118,42,40,237,214,152,186,164,74,24,101,
    137,223,151,138,44,225,13,252,204,239,123,247,30,222,245,54,
    211,68,101,105,28,203,172,211,48,172,105,126,115,224,171,93,
    135,223,181,201,40,253,129,226,53,211,68,170,179,56,233,69,
    73,232,245,211,112,24,75,117,134,22,244,122,81,44,61,143,
    31,126,214,31,164,153,186,159,101,105,230,144,93,153,24,167,
    126,249,6,89,53,136,211,92,118,104,55,222,198,161,229,21,
    113,247,6,188,34,9,192,242,210,203,161,204,131,44,26,40,
    116,151,94,145,184,105,181,14,57,138,135,28,253,2,27,195,
    28,157,58,240,3,185,17,110,132,189,94,148,239,202,108,227,
    254,230,253,91,31,223,218,120,240,217,214,221,95,123,143,157,
    71,159,223,223,124,82,16,111,160,34,126,188,177,61,140,226,
    112,227,217,167,159,108,12,70,106,55,77,54,250,31,111,68,
    137,146,25,61,60,201,86,55,145,239,60,237,250,34,218,241,
    34,214,215,219,149,241,64,102,36,110,126,145,36,18,45,49,
    43,106,194,22,29,209,196,89,21,63,182,88,183,206,138,173,
    136,52,14,200,10,132,56,219,96,236,111,192,222,68,48,236,
    91,144,173,19,130,246,240,79,144,203,17,71,93,122,102,241,
    179,223,144,169,52,117,207,38,92,104,226,1,163,14,225,135,
    156,183,9,8,9,48,116,170,176,87,3,13,41,68,162,198,
    88,54,162,17,217,105,25,11,23,175,64,254,215,201,21,146,
    22,160,43,48,187,32,105,25,183,250,35,163,180,219,33,193,
    183,24,40,106,55,202,211,23,9,187,131,230,28,87,93,180,
    201,227,209,163,237,61,25,168,252,10,18,190,72,135,237,192,
    79,146,84,181,253,48,108,251,74,101,209,246,80,201,188,173,
    210,246,245,188,83,39,255,207,27,172,149,235,141,6,6,91,
    132,3,196,150,254,18,70,129,194,47,11,252,133,237,159,75,
    133,56,217,77,195,28,233,180,196,142,84,14,9,169,206,225,
    112,215,108,199,128,236,212,12,124,114,25,247,84,131,145,232,
    231,185,199,219,17,157,65,71,111,63,247,227,161,84,196,159,
    43,95,225,174,52,213,27,77,19,118,23,72,113,163,55,217,
    210,75,210,36,28,161,216,81,112,141,36,186,192,224,155,5,
    130,223,18,66,111,6,199,26,52,17,138,45,43,32,13,43,
    5,240,24,116,203,100,15,96,32,136,34,189,32,0,143,48,
    9,117,44,206,34,172,42,135,104,155,102,244,178,67,248,118,
    214,104,88,167,225,146,177,198,148,76,210,124,213,36,31,146,
    24,22,219,33,176,11,141,203,48,219,154,8,179,213,227,48,
    195,28,218,165,112,177,40,168,142,195,197,38,155,100,119,138,
    216,160,64,68,120,224,227,177,136,96,75,57,45,178,64,205,
    128,217,33,132,142,195,116,103,12,166,14,57,137,49,234,172,
    158,102,213,43,239,140,85,119,180,85,127,76,98,204,22,232,
    106,50,170,26,34,32,104,88,133,141,217,190,247,112,50,90,
    33,251,142,91,118,5,139,228,211,164,201,213,142,43,38,247,
    43,58,221,104,131,235,73,133,112,216,179,97,185,168,98,57,
    101,135,65,150,126,53,106,167,189,182,2,35,195,237,235,249,
    205,235,249,207,49,127,180,239,112,70,210,25,68,231,136,76,
    14,50,204,5,117,254,162,227,219,227,88,247,138,18,132,30,
    160,58,200,142,99,187,115,58,203,85,70,89,108,154,70,111,
    148,70,39,29,126,74,50,52,216,226,54,172,224,167,33,88,
    80,47,229,236,202,109,10,63,197,207,47,201,246,164,190,4,
    106,96,157,174,86,131,53,36,93,157,31,76,224,105,58,250,
    57,31,144,164,38,58,107,80,162,135,62,54,105,64,1,243,
    103,224,190,78,192,159,128,144,130,128,40,66,140,131,153,62,
    228,240,5,98,255,61,112,226,58,161,102,90,58,84,173,34,
    181,97,36,231,183,152,85,151,208,207,225,47,99,89,239,200,
    6,65,229,206,46,58,183,241,114,87,41,131,155,33,246,86,
    37,173,50,153,5,200,103,187,126,78,108,58,222,237,50,222,
    143,19,104,217,109,97,18,155,18,250,206,232,221,61,18,244,
    87,199,216,163,90,178,38,22,172,49,68,253,144,134,27,37,
    152,132,161,253,255,101,190,242,106,242,31,171,135,158,78,184,
    15,72,176,10,171,50,87,227,166,96,114,153,50,142,170,38,
    142,62,42,227,72,114,29,120,201,221,63,141,22,33,228,200,
    18,120,228,195,206,136,78,91,21,144,85,112,107,20,113,220,
    216,138,34,32,133,73,136,148,72,39,138,12,155,107,75,27,
    178,4,137,246,63,13,95,77,51,1,17,4,110,199,126,127,
    59,244,239,124,73,18,144,24,129,9,81,203,232,212,26,215,
    137,194,75,156,166,22,127,253,208,232,246,124,154,201,231,71,
    184,97,169,19,135,90,152,6,156,113,158,236,202,118,95,246,
    183,81,150,221,104,208,238,197,254,14,251,209,46,116,126,100,
    116,86,12,132,87,75,127,78,105,109,43,109,7,105,130,53,
    100,24,168,52,107,135,18,37,149,97,251,70,155,11,80,59,
    202,219,254,54,62,245,3,165,195,101,50,17,112,239,233,103,
    59,57,183,153,251,47,104,58,109,28,120,120,54,142,176,217,
    246,141,205,244,121,173,172,38,28,74,58,246,176,66,227,225,
    71,141,116,158,252,132,134,247,105,184,14,239,64,209,217,32,
    49,105,103,50,109,13,83,89,93,168,197,215,178,192,99,122,
    59,127,61,23,252,235,109,114,129,190,248,41,50,66,141,56,
    229,12,157,217,105,172,83,241,113,27,134,120,150,199,89,38,
    54,13,241,28,143,115,76,108,25,226,60,143,231,153,184,96,
    136,139,60,46,49,113,217,16,87,120,188,192,196,85,115,95,
    117,145,137,107,124,231,82,99,202,37,74,82,51,223,53,73,
    113,52,79,59,142,119,254,167,185,201,249,232,93,82,201,225,
    78,251,77,121,73,140,235,219,212,121,105,79,152,243,201,184,
    178,124,93,178,118,10,216,189,32,147,190,146,218,171,23,167,
    107,2,206,123,90,158,168,244,173,209,179,60,188,221,42,117,
    61,226,222,112,180,56,118,130,96,87,139,167,216,200,225,41,
    227,128,205,225,89,250,160,113,12,232,74,105,21,58,131,37,
    242,133,119,146,101,244,105,130,68,242,7,3,153,132,199,39,
    5,126,50,77,168,80,114,29,192,113,115,134,199,130,69,252,
    188,30,210,164,233,152,226,236,228,106,25,196,83,118,55,35,
    126,104,28,221,185,12,227,133,197,33,55,235,82,82,86,17,
    231,103,165,227,190,127,26,156,195,190,143,93,224,31,134,50,
    9,100,70,199,214,183,101,197,214,145,207,187,19,84,238,194,
    79,124,57,35,150,92,121,49,130,53,9,70,188,211,91,51,
    211,94,115,200,252,10,93,189,127,250,2,249,0,27,11,57,
    177,221,219,115,211,126,45,222,111,242,129,186,117,218,18,124,
    157,137,226,61,73,239,69,153,135,77,77,130,135,77,186,42,
    15,210,97,162,120,251,111,251,46,9,67,190,126,51,155,186,
    243,13,203,107,77,30,100,105,255,84,9,191,227,18,36,232,
    245,99,65,223,204,173,62,253,198,205,222,96,203,111,253,50,
    201,120,101,92,198,147,249,56,99,112,13,8,101,44,149,60,
    49,225,49,68,138,155,170,16,97,153,165,35,207,211,151,13,
    248,61,246,188,169,119,113,100,166,30,20,23,156,212,197,213,
    176,143,91,26,251,95,175,212,5,55,212,175,252,154,163,133,
    38,103,234,227,245,40,119,184,202,206,149,9,133,127,112,48,
    29,44,151,24,186,58,218,242,251,250,210,152,111,62,157,171,
    52,92,51,57,137,107,131,190,134,225,75,13,125,217,132,229,
    132,187,125,110,238,157,155,68,167,159,9,74,149,186,101,110,
    105,149,100,103,184,61,234,142,114,37,251,99,188,221,168,63,
    136,229,67,217,79,179,17,247,170,154,124,183,56,65,20,15,
    230,202,7,72,208,55,238,124,227,168,105,155,113,26,236,203,
    176,160,207,79,210,239,165,125,31,77,62,55,190,99,193,73,
    53,34,204,232,41,233,132,30,142,252,56,250,90,242,229,126,
    193,171,197,165,151,101,50,228,221,81,156,135,105,40,89,175,
    187,97,152,57,126,178,35,189,231,146,206,66,252,155,211,164,
    232,230,201,226,132,25,142,29,206,166,48,175,28,147,185,149,
    63,161,157,97,220,102,114,39,66,185,244,162,147,203,21,69,
    157,32,164,174,158,22,110,227,107,76,27,237,250,28,174,47,
    43,239,176,27,158,224,64,87,250,245,185,186,168,89,244,91,
    146,45,26,162,41,42,98,182,89,183,235,181,122,213,198,136,
    32,202,130,104,216,245,198,172,120,211,255,85,140,149,134,181,
    218,170,139,255,2,73,245,104,49,
};

EmbeddedPython embedded_m5_internal_param_DMA_Controller(
    "m5/internal/param_DMA_Controller.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_DMA_Controller.py",
    "m5.internal.param_DMA_Controller",
    data_m5_internal_param_DMA_Controller,
    2441,
    7951);

} // anonymous namespace
