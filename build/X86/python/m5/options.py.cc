#include "sim/init.hh"

namespace {

const uint8_t data_m5_options[] = {
    120,156,189,88,223,115,211,70,16,62,73,254,37,39,16,10,
    77,38,105,67,71,109,201,212,148,26,183,15,148,210,9,12,
    5,66,129,97,146,84,166,211,54,3,104,20,233,156,40,113,
    36,35,157,129,204,36,15,157,244,133,206,180,239,125,236,67,
    255,206,118,191,61,73,118,18,232,91,226,68,242,222,234,116,
    119,251,237,119,187,123,14,68,254,177,232,186,237,8,145,109,
    146,16,210,191,33,250,66,172,149,178,33,214,12,150,77,232,
    159,132,150,144,166,232,145,170,34,126,19,226,64,136,95,214,
    44,17,86,11,109,173,212,86,68,88,23,178,202,218,70,169,
    173,97,208,110,203,166,201,162,127,233,179,220,50,72,84,184,
    125,174,160,141,147,80,246,252,97,95,5,197,10,241,236,14,
    86,216,32,65,10,172,199,237,182,240,164,101,226,93,168,61,
    47,246,119,164,231,169,38,55,118,146,112,216,167,166,238,85,
    222,178,85,186,117,134,153,76,179,129,31,200,78,216,9,123,
    189,40,219,148,105,103,233,238,210,245,107,215,59,247,31,46,
    127,247,216,91,117,87,30,45,221,125,146,43,219,189,40,246,
    251,157,44,13,58,131,93,181,153,196,157,157,107,157,100,160,
    162,36,206,174,14,118,93,172,239,19,140,142,213,212,244,122,
    178,65,63,82,74,166,199,141,248,160,52,130,64,37,84,214,
    76,32,2,193,130,89,24,35,192,173,184,238,226,165,51,36,
    236,25,98,143,108,99,199,116,25,181,28,187,106,49,159,134,
    163,130,166,236,247,220,234,201,219,158,99,31,197,145,242,188,
    133,2,3,97,4,152,187,78,87,165,176,224,25,44,176,196,
    150,128,17,116,63,48,196,126,21,126,223,171,136,45,19,198,
    109,89,226,192,20,251,53,177,87,131,137,219,13,145,62,134,
    113,227,29,246,170,226,192,18,70,124,6,157,182,106,220,54,
    132,49,134,8,38,101,203,21,164,13,169,124,165,82,85,35,
    249,165,223,31,202,140,225,9,233,155,133,229,36,150,220,49,
    27,235,40,95,43,25,135,122,36,180,89,169,109,230,190,36,
    122,25,245,173,22,131,114,135,129,159,18,182,46,40,236,54,
    79,13,249,192,239,247,61,239,51,204,210,100,228,207,27,211,
    198,164,49,103,182,96,158,11,111,184,216,225,46,91,115,254,
    208,186,78,112,75,96,242,75,24,29,66,205,176,77,53,73,
    194,10,119,88,101,160,202,141,97,22,27,227,233,255,108,12,
    10,62,16,40,164,88,44,84,243,240,131,112,82,101,161,158,
    135,158,181,6,194,14,4,91,132,54,71,30,138,96,19,216,
    90,0,40,48,242,144,135,107,5,211,254,0,98,154,160,36,
    205,70,124,36,174,81,160,34,38,26,74,83,206,192,227,63,
    153,183,94,133,217,75,132,172,162,147,17,105,109,45,215,66,
    174,235,237,9,171,150,57,158,245,146,116,199,71,40,104,193,
    99,28,159,136,108,121,140,99,47,18,110,76,30,117,129,26,
    79,34,213,151,225,3,217,31,220,47,94,116,161,231,177,188,
    178,235,28,88,28,101,254,58,69,185,40,86,240,30,93,50,
    244,252,116,35,211,220,32,102,80,247,140,201,233,109,164,201,
    112,208,178,74,74,195,47,220,21,173,237,87,16,79,154,19,
    96,224,151,35,162,206,16,81,207,152,182,117,220,35,48,87,
    7,137,45,99,4,127,177,193,153,210,179,176,97,82,67,233,
    229,88,102,35,243,220,121,220,46,158,2,209,63,162,65,191,
    29,139,123,133,49,149,194,152,27,58,114,79,166,23,97,7,
    127,137,60,10,122,134,136,103,11,75,205,195,68,51,116,154,
    196,168,217,188,182,211,81,155,210,9,134,105,42,99,229,232,
    37,56,236,214,101,109,56,48,113,63,4,48,231,224,220,48,
    244,116,167,163,190,63,53,112,152,178,112,16,47,224,38,26,
    53,222,241,103,141,41,147,145,170,141,35,245,207,248,70,164,
    125,75,91,144,182,253,182,41,210,16,219,158,30,109,215,32,
    163,143,9,13,82,136,37,54,248,45,10,7,139,20,9,32,
    213,72,170,179,100,136,69,101,33,235,28,48,180,164,93,140,
    197,104,7,151,128,239,87,56,201,212,144,145,40,163,160,67,
    93,108,215,69,250,55,244,186,73,122,126,185,146,23,47,217,
    77,13,178,227,199,133,51,84,242,78,23,125,225,36,169,179,
    209,79,214,253,190,19,83,206,113,8,22,222,122,126,192,105,
    133,197,193,128,210,206,40,119,21,33,2,207,40,221,68,241,
    6,239,90,181,59,144,188,193,17,250,215,253,96,123,89,7,
    22,248,151,210,157,59,81,52,6,201,128,227,176,230,68,243,
    16,39,56,67,185,40,69,90,181,227,188,224,53,184,103,197,
    233,100,50,247,50,13,122,15,163,207,96,142,218,37,99,202,
    104,242,223,5,115,218,176,169,117,206,12,96,8,44,131,169,
    92,79,252,37,152,39,228,195,25,114,95,104,106,137,157,10,
    6,89,96,68,94,78,16,131,110,229,145,125,191,14,58,236,
    55,68,60,197,66,189,208,55,216,205,22,252,75,52,34,14,
    229,20,34,125,157,232,99,237,219,69,135,42,119,160,204,210,
    228,66,133,58,52,184,3,53,169,79,83,244,76,98,8,150,
    202,5,53,51,196,89,79,146,190,28,17,5,158,147,161,211,
    110,163,102,37,2,177,152,112,235,106,211,201,63,247,34,170,
    233,252,93,103,147,82,129,19,74,112,131,40,224,208,235,175,
    54,163,96,211,137,50,102,91,17,252,0,80,187,189,144,101,
    117,22,104,184,133,140,171,234,54,223,61,247,227,50,251,168,
    36,149,158,74,135,210,253,180,72,5,152,68,77,148,15,123,
    126,63,147,218,247,149,130,142,169,164,229,4,210,133,147,20,
    234,209,238,143,171,171,238,82,183,235,61,88,122,188,202,78,
    100,179,71,249,5,246,240,20,110,91,228,101,170,130,142,165,
    30,63,109,150,15,120,5,252,128,37,158,150,224,98,161,71,
    194,73,199,42,44,29,110,202,55,200,207,34,47,213,69,5,
    76,60,111,80,17,67,101,12,74,153,89,146,232,50,203,42,
    221,42,56,185,162,99,189,142,96,20,115,210,5,208,75,153,
    160,14,113,81,23,19,164,239,234,82,30,225,236,6,4,106,
    206,117,223,222,83,23,18,238,149,210,21,218,131,126,170,178,
    87,145,218,212,181,255,112,80,20,9,136,252,158,151,87,189,
    209,250,80,225,12,100,30,242,10,158,156,6,152,229,50,232,
    52,38,202,172,63,101,204,152,147,70,195,12,138,36,89,130,
    247,199,81,240,174,188,5,60,218,146,168,204,226,231,249,105,
    136,2,57,80,28,136,136,159,145,242,107,74,9,120,80,197,
    254,166,49,141,17,214,111,184,11,207,178,248,226,141,136,231,
    222,61,193,168,134,211,208,115,124,68,42,119,145,236,53,214,
    218,200,172,48,146,163,41,215,3,186,244,230,87,22,113,131,
    83,56,98,151,133,202,9,7,212,91,52,232,75,140,126,46,
    199,124,158,174,51,244,55,137,80,138,112,80,205,47,70,254,
    185,24,171,183,168,172,125,74,241,144,82,171,41,94,223,97,
    143,48,54,164,191,247,236,43,126,102,229,9,19,135,52,91,
    100,15,129,52,32,174,131,240,58,97,146,102,241,197,130,160,
    255,159,246,204,178,116,227,180,50,91,176,152,11,217,177,122,
    213,11,163,128,78,145,92,53,68,84,209,210,181,147,113,58,
    211,47,150,12,70,85,203,201,138,211,220,182,220,229,111,58,
    137,157,52,174,183,105,208,95,71,92,158,54,231,41,16,188,
    103,30,63,174,183,143,32,10,18,106,180,210,203,88,53,206,
    10,76,114,35,62,116,156,63,2,16,229,124,229,33,28,142,
    146,122,182,171,79,176,242,117,126,220,215,176,52,114,85,144,
    132,242,164,55,55,22,57,204,252,13,249,187,40,42,58,166,
    214,114,11,5,249,209,35,39,54,132,235,224,134,12,225,126,
    131,27,74,39,38,41,35,202,198,185,143,196,41,29,77,177,
    119,59,24,29,135,97,138,231,77,219,178,235,246,251,246,180,
    109,219,19,182,173,143,253,72,114,238,247,162,56,251,175,111,
    201,64,241,239,60,92,81,233,223,16,136,173,60,216,105,172,
    154,29,188,168,127,213,186,117,177,160,224,164,49,105,54,205,
    25,115,102,226,63,57,35,19,47,
};

EmbeddedPython embedded_m5_options(
    "m5/options.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/python/m5/options.py",
    "m5.options",
    data_m5_options,
    1833,
    5070);

} // anonymous namespace