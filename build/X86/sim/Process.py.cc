#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Process[] = {
    120,156,181,86,109,111,35,53,16,246,166,105,218,166,239,185,
    94,5,8,36,131,144,216,162,107,131,208,189,32,241,162,235,
    149,34,221,113,215,171,146,30,18,69,40,114,215,78,226,118,
    189,187,178,189,105,139,248,86,126,13,255,140,95,1,51,227,
    221,144,67,87,190,53,219,56,246,99,175,253,204,120,230,153,
    38,172,250,204,193,247,41,103,204,157,67,71,194,95,196,82,
    198,76,196,78,35,22,225,184,193,210,6,59,169,122,115,208,
    155,99,42,98,195,136,201,38,251,131,177,27,198,126,62,109,
    50,57,95,163,173,41,58,207,228,2,83,77,66,23,167,104,
    139,201,37,214,143,219,112,156,254,27,62,113,4,61,191,4,
    77,95,155,215,103,231,42,241,1,194,230,115,191,0,237,177,
    205,19,229,92,50,203,249,25,114,254,19,58,138,33,85,224,
    119,218,96,106,142,33,23,32,15,116,90,236,124,1,73,3,
    225,155,6,59,93,172,17,34,139,200,82,141,180,144,40,34,
    109,66,150,153,90,97,231,171,72,26,193,53,2,215,145,182,
    108,19,178,49,131,44,19,178,73,72,135,201,21,38,87,9,
    185,199,212,22,147,107,100,54,240,185,207,122,253,120,29,232,
    246,26,208,184,53,108,180,233,22,193,178,189,241,216,163,81,
    137,206,92,7,126,135,58,85,153,48,138,15,115,203,157,151,
    58,243,77,156,206,75,239,238,189,99,30,240,176,64,89,251,
    206,5,136,127,128,103,94,59,175,12,175,142,229,151,58,77,
    185,45,51,158,103,126,30,95,19,169,83,206,64,207,8,56,
    19,190,92,100,92,103,187,70,153,220,94,243,137,178,78,231,
    176,124,200,253,88,241,66,140,20,255,159,143,23,103,169,226,
    97,19,97,147,177,246,112,185,165,85,187,174,80,137,30,234,
    4,233,25,225,221,103,24,12,153,246,90,164,250,55,21,246,
    174,40,162,1,63,78,204,193,241,27,220,168,127,72,118,62,
    126,248,234,153,123,159,104,94,105,83,26,238,240,181,138,149,
    243,34,185,72,208,205,245,247,128,87,46,255,61,194,224,184,
    9,145,221,143,113,238,200,61,133,246,44,207,83,110,68,17,
    239,75,105,249,68,64,251,128,83,191,8,125,240,6,29,242,
    128,211,210,68,36,99,133,214,125,235,109,169,118,190,142,49,
    44,105,191,112,143,169,171,46,76,170,48,133,141,123,1,77,
    183,116,224,196,66,36,170,43,187,114,56,212,110,172,108,247,
    240,224,240,201,163,39,221,31,158,31,237,191,28,28,247,94,
    191,56,60,56,169,192,221,161,206,68,218,117,54,233,98,196,
    84,185,176,87,92,123,180,72,93,21,185,245,3,163,252,56,
    151,110,15,79,65,22,172,17,111,35,153,69,104,6,3,140,
    132,193,192,183,105,96,114,89,166,56,68,130,254,186,80,212,
    57,1,51,104,181,56,115,222,138,196,211,234,228,234,106,0,
    118,66,248,80,120,28,11,43,140,111,97,170,122,171,179,17,
    129,58,43,32,250,16,132,40,172,187,16,111,121,213,237,83,
    200,81,23,222,87,153,39,15,137,236,154,160,16,144,68,225,
    25,56,150,116,0,60,180,15,209,114,124,66,201,127,49,49,
    207,51,184,119,228,243,138,194,176,15,247,64,198,195,237,15,
    232,182,7,120,53,126,153,60,47,156,11,222,232,181,107,199,
    223,217,21,80,50,127,140,251,190,7,77,43,10,79,135,158,
    251,209,18,60,208,107,16,215,67,83,166,194,43,249,189,213,
    144,69,83,41,107,212,82,182,243,31,41,67,17,155,67,245,
    156,149,50,84,146,69,84,18,116,97,143,227,193,157,74,73,
    20,236,63,144,180,57,168,137,251,8,213,92,77,116,2,18,
    0,90,192,73,12,226,50,131,171,228,93,152,216,137,209,211,
    61,116,89,111,5,155,85,108,54,176,65,182,61,146,170,77,
    108,58,117,28,213,154,114,199,46,69,171,190,196,125,23,103,
    92,74,119,251,18,140,187,181,20,252,117,155,255,206,231,103,
    138,64,139,169,5,66,154,149,47,195,112,196,102,106,194,244,
    149,86,93,19,154,88,19,160,68,84,5,97,101,6,89,34,
    100,117,6,105,215,69,99,138,132,18,177,62,131,172,212,101,
    36,32,171,88,40,170,50,210,164,50,2,181,101,163,46,35,
    192,112,139,24,110,18,66,149,4,47,165,247,201,45,149,132,
    110,229,83,18,7,149,148,65,132,227,28,2,195,106,169,28,
    79,140,252,229,139,95,185,30,114,167,252,142,139,73,167,140,
    17,153,228,169,206,96,233,204,107,69,90,58,144,238,81,105,
    32,113,221,142,219,194,93,179,137,182,121,134,8,238,224,65,
    8,28,137,113,82,90,204,111,126,153,219,11,0,185,212,22,
    244,30,18,86,75,100,180,16,82,219,114,45,29,70,150,26,
    14,97,26,238,148,215,40,222,248,8,132,163,192,65,231,173,
    37,83,24,147,186,174,13,90,106,12,4,218,173,32,109,225,
    51,83,228,134,221,224,30,204,61,44,92,69,142,66,46,128,
    227,88,39,99,238,115,172,22,22,165,189,94,66,101,114,127,
    34,116,74,14,80,85,218,242,144,90,142,100,245,157,105,243,
    111,178,180,223,114,61,133,238,79,228,136,160,159,84,32,140,
    164,95,240,101,24,95,134,241,243,74,30,75,45,73,19,21,
    118,16,24,213,192,168,2,138,10,40,176,131,74,250,6,222,
    125,252,144,50,21,172,33,67,41,151,72,68,107,246,119,155,
    186,24,144,95,225,190,31,78,83,183,19,173,87,122,56,251,
    28,197,72,202,163,7,205,163,189,233,255,125,61,36,69,37,
    0,208,2,157,229,200,30,28,217,252,42,200,45,25,69,71,
    221,173,53,116,242,55,161,90,126,135,114,74,161,183,17,181,
    163,118,99,123,115,187,245,15,175,200,157,92,
};

EmbeddedPython embedded_m5_objects_Process(
    "m5/objects/Process.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/sim/Process.py",
    "m5.objects.Process",
    data_m5_objects_Process,
    1276,
    2882);

} // anonymous namespace
