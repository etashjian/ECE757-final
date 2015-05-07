#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_TaggedPrefetcher[] = {
    120,156,205,88,91,111,27,199,21,62,179,75,82,34,37,89,
    146,117,179,108,217,162,99,24,97,131,218,76,211,38,78,91,
    195,168,227,56,69,130,70,86,150,6,236,108,47,219,213,206,
    144,90,138,220,37,118,71,118,24,72,47,149,209,246,173,63,
    162,232,67,255,71,209,191,213,158,115,102,103,69,201,86,97,
    160,1,104,137,59,152,157,153,61,115,46,223,185,204,68,80,
    252,85,241,249,85,19,32,255,183,0,144,248,19,48,0,24,
    10,240,5,8,37,64,174,192,65,21,178,159,129,172,194,43,
    0,223,1,229,192,9,118,92,248,173,3,201,60,127,83,131,
    129,203,35,2,198,13,80,21,240,171,240,44,89,134,138,170,
    193,65,3,178,63,130,16,34,17,240,92,206,128,156,133,87,
    72,29,59,117,38,56,11,178,193,157,58,200,57,238,52,96,
    188,4,106,14,124,36,62,3,254,2,146,250,0,73,93,98,
    82,255,34,82,18,103,86,65,46,208,114,228,229,91,90,89,
    161,149,188,199,37,166,178,104,57,91,2,127,201,246,151,193,
    95,182,253,203,224,95,182,253,21,240,87,108,127,21,252,85,
    219,95,3,127,205,246,215,193,95,183,253,13,240,55,108,255,
    10,248,87,108,127,19,252,77,219,191,10,254,85,219,191,6,
    254,53,219,223,2,127,11,228,34,168,37,232,95,135,46,170,
    120,169,148,227,6,40,23,250,219,224,111,131,194,223,13,56,
    65,43,200,101,94,219,228,181,151,203,181,55,121,237,123,224,
    191,7,10,127,55,205,218,26,116,90,107,104,211,248,63,248,
    215,66,155,130,158,199,230,133,202,242,56,77,130,56,233,166,
    177,67,243,53,106,8,1,17,53,51,5,20,30,17,20,254,
    9,140,3,233,20,80,56,6,36,44,136,255,129,3,199,220,
    57,118,96,220,130,35,1,253,10,72,23,142,112,155,42,49,
    208,19,112,226,192,239,92,90,112,140,109,5,141,119,3,42,
    218,224,160,207,198,51,148,102,224,184,10,71,85,232,60,63,
    114,104,224,160,14,217,63,224,251,45,38,58,203,68,29,56,
    194,182,2,39,21,56,174,193,51,92,132,67,253,58,137,47,
    158,31,161,164,56,210,105,85,144,219,157,9,113,73,20,25,
    103,73,56,84,122,3,251,193,40,204,194,97,240,52,236,245,
    148,220,205,84,87,233,104,95,101,173,134,93,156,230,119,71,
    161,222,247,248,107,151,212,50,28,105,166,154,38,74,207,97,
    167,27,39,50,24,166,242,112,160,244,44,145,12,186,241,64,
    5,1,79,126,57,28,165,153,126,156,101,105,230,145,102,121,
    112,144,134,229,23,164,215,104,144,230,170,69,187,241,54,30,
    145,215,180,186,59,98,138,196,0,115,76,31,75,149,71,89,
    60,210,104,48,67,145,86,19,181,22,153,138,155,60,193,166,
    125,152,163,89,71,97,164,218,178,45,187,221,56,71,185,218,
    143,31,61,190,247,241,189,246,23,95,238,60,252,77,176,235,
    61,249,234,241,163,167,197,224,29,20,36,28,180,247,14,227,
    129,108,63,255,244,147,246,104,172,247,211,164,61,252,184,29,
    39,90,101,52,249,102,109,221,197,149,151,105,223,151,113,47,
    136,89,226,96,95,13,70,42,35,134,243,171,196,147,88,18,
    243,162,38,92,209,18,11,216,171,226,227,138,45,103,78,236,
    196,36,115,68,122,32,212,185,22,103,127,7,182,40,2,226,
    192,129,108,139,80,212,199,159,32,179,35,150,58,52,231,240,
    220,55,164,44,51,218,119,9,27,102,240,136,145,135,16,196,
    149,247,9,12,168,21,130,79,21,250,53,48,176,66,52,26,
    156,101,99,106,113,57,145,113,144,120,5,242,191,157,165,144,
    44,1,26,3,35,9,14,173,227,86,127,98,164,118,90,196,
    248,14,67,69,239,199,121,250,50,97,131,80,159,125,171,131,
    58,217,29,63,217,235,171,72,231,219,56,240,109,122,216,140,
    194,36,73,117,51,148,178,25,106,157,197,123,135,90,229,77,
    157,54,111,231,173,58,33,96,217,162,173,164,55,30,89,116,
    17,18,16,93,230,69,198,145,198,151,21,126,97,253,231,74,
    35,82,246,83,153,227,56,145,232,41,237,17,147,250,18,54,
    15,237,118,12,201,86,205,2,40,87,131,174,110,48,22,195,
    60,15,120,59,26,103,216,209,215,47,194,193,161,210,180,62,
    215,161,198,93,169,107,54,154,46,240,174,144,232,86,114,210,
    102,144,164,137,28,35,227,113,116,139,120,186,194,240,155,7,
    2,224,26,130,111,6,219,26,44,32,24,151,156,136,100,172,
    20,208,99,216,173,147,70,128,161,32,138,32,131,16,60,193,
    80,212,114,56,150,176,176,236,166,77,234,209,199,30,33,220,
    187,70,205,22,53,215,173,62,166,166,148,133,243,74,249,144,
    24,113,88,19,145,91,200,92,186,218,206,25,87,219,60,117,
    53,140,165,29,114,25,135,28,235,212,101,92,210,74,246,160,
    240,15,114,70,132,8,78,79,120,5,235,202,91,34,29,212,
    44,160,61,66,233,36,84,123,19,80,245,200,76,140,83,111,
    243,34,189,110,191,67,122,237,25,189,254,148,24,153,47,16,
    182,192,200,106,136,136,224,225,20,90,102,13,127,142,157,241,
    6,105,120,82,183,27,152,46,159,37,11,156,247,56,119,114,
    133,98,130,142,81,185,233,84,8,139,93,23,214,139,124,150,
    83,140,24,101,233,119,227,102,218,109,106,176,60,220,191,157,
    223,189,157,255,18,163,72,243,1,199,37,19,71,76,164,200,
    212,40,195,136,80,231,23,227,229,1,123,124,80,164,34,180,
    1,213,6,108,58,214,60,7,181,92,103,20,203,166,171,246,
    70,169,118,146,226,231,196,69,131,117,238,194,6,62,13,193,
    172,6,41,71,89,46,89,120,22,159,207,72,251,164,0,5,
    84,180,122,29,35,8,203,72,210,122,239,159,193,212,180,36,
    244,62,32,94,173,143,214,160,68,16,61,46,201,64,110,243,
    23,224,42,79,192,159,129,208,130,160,40,28,141,93,154,30,
    50,250,10,45,255,3,112,0,123,67,246,116,140,195,58,69,
    136,67,127,206,239,241,82,147,76,191,130,191,78,68,191,19,
    23,4,37,62,183,168,227,38,19,95,165,116,113,134,217,91,
    37,183,202,217,88,64,86,219,15,115,90,102,188,222,45,189,
    254,52,144,150,149,23,134,178,169,33,112,214,236,31,16,171,
    191,62,197,31,101,149,107,98,197,153,64,213,143,169,185,83,
    2,74,216,177,105,112,189,125,62,13,76,228,198,192,132,222,
    47,136,181,10,11,179,88,211,100,205,243,132,74,127,170,90,
    127,250,168,244,39,197,57,225,21,159,8,168,117,8,39,39,
    142,192,227,30,86,74,116,210,170,128,170,130,95,35,207,227,
    82,87,20,142,41,108,104,164,144,122,38,225,176,202,118,140,
    50,75,168,24,20,80,243,221,116,67,17,1,225,254,32,28,
    238,201,240,1,57,89,78,140,68,214,85,29,43,213,210,164,
    84,228,102,226,34,193,248,245,67,43,221,139,233,134,161,159,
    224,150,165,84,236,116,50,141,56,246,60,221,87,205,161,26,
    238,33,55,251,241,168,217,29,132,61,182,165,91,72,253,196,
    74,173,25,12,231,75,129,156,2,220,78,218,140,210,4,51,
    202,97,164,211,172,41,21,242,170,100,243,78,147,211,81,51,
    206,155,225,30,206,134,145,54,110,115,54,36,112,61,26,102,
    189,156,75,207,131,151,212,157,62,22,2,60,53,199,88,130,
    7,86,107,230,28,87,230,22,174,186,141,15,98,198,198,35,
    145,30,155,152,249,9,53,63,162,230,54,188,19,41,168,141,
    91,254,158,246,38,245,214,48,172,213,133,94,127,67,60,216,
    37,10,249,235,81,97,239,109,162,130,185,254,41,98,67,141,
    86,170,25,58,209,83,91,167,100,228,55,236,101,210,28,15,
    206,211,205,141,172,241,200,37,138,34,51,255,111,20,97,103,
    155,190,155,169,31,52,120,120,31,189,91,66,121,92,24,255,
    175,192,33,38,37,94,48,129,163,47,236,129,98,82,92,190,
    229,184,126,33,18,131,40,83,161,86,198,182,87,167,173,6,
    14,78,134,163,94,105,97,43,107,121,226,186,87,202,123,194,
    165,220,120,117,162,232,103,131,139,103,88,119,225,193,224,136,
    85,18,56,230,108,112,10,236,74,169,25,18,57,81,47,95,
    99,198,104,199,28,1,136,169,112,52,82,137,60,45,239,121,
    102,186,144,161,24,72,7,106,91,77,97,45,191,138,207,235,
    238,77,210,78,8,207,166,174,150,14,61,117,163,51,246,19,
    107,238,214,34,76,102,0,143,140,109,98,126,25,238,189,95,
    148,230,187,121,49,176,165,234,101,74,209,81,243,45,86,97,
    133,199,102,54,175,172,90,118,26,169,6,74,171,11,208,193,
    5,95,113,26,151,10,115,111,58,198,83,33,31,166,240,125,
    16,4,239,64,94,250,212,216,30,114,202,164,148,151,106,152,
    153,214,68,189,82,23,92,28,156,187,177,54,204,210,205,143,
    57,52,140,115,143,3,210,98,169,113,190,82,181,185,152,61,
    145,14,197,59,225,208,92,138,241,189,142,71,10,247,110,89,
    163,177,102,205,241,146,143,106,230,24,141,94,199,149,11,23,
    42,222,93,26,167,132,105,68,249,230,80,29,78,138,162,87,
    203,169,207,194,92,77,76,204,151,19,157,113,174,213,80,19,
    171,42,57,28,6,95,171,97,154,141,191,78,165,98,67,61,
    148,50,243,194,164,167,130,23,138,42,40,77,24,123,88,148,
    76,102,173,157,57,221,236,236,60,211,54,19,56,96,174,37,
    249,74,198,140,61,26,164,209,129,146,197,248,242,217,241,207,
    211,97,136,246,58,165,208,137,45,5,242,69,153,209,44,41,
    6,225,17,135,131,248,123,195,245,121,69,112,161,241,198,120,
    206,56,204,84,47,70,45,100,172,202,243,223,22,49,141,32,
    161,111,93,236,18,147,116,166,143,96,115,102,48,151,44,15,
    88,63,187,216,208,117,100,125,177,46,106,14,221,132,187,162,
    33,22,68,69,204,47,212,221,122,173,94,117,17,229,52,178,
    34,26,110,189,49,47,46,250,223,68,47,104,56,155,115,117,
    241,95,235,217,78,6,
};

EmbeddedPython embedded_m5_internal_param_TaggedPrefetcher(
    "m5/internal/param_TaggedPrefetcher.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/param_TaggedPrefetcher.py",
    "m5.internal.param_TaggedPrefetcher",
    data_m5_internal_param_TaggedPrefetcher,
    2246,
    7093);

} // anonymous namespace
