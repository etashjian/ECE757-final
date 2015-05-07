#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_System[] = {
    120,156,181,87,109,115,19,55,16,214,217,206,155,227,188,66,
    2,229,85,132,66,28,10,184,51,45,133,1,134,129,166,97,
    154,78,9,140,29,152,105,190,220,156,79,178,173,228,238,116,
    115,146,67,220,233,183,244,23,245,15,210,221,213,157,115,161,
    208,150,15,177,227,139,244,104,181,187,90,61,187,94,135,44,
    127,85,225,243,156,51,102,142,96,32,224,207,99,17,99,177,
    199,246,60,230,225,188,194,162,10,139,171,108,175,234,230,85,
    22,213,216,110,62,154,24,143,38,199,163,41,24,213,152,156,
    102,61,143,137,9,246,39,99,199,140,253,182,55,195,196,36,
    147,117,66,167,198,232,44,19,211,172,211,156,1,227,234,3,
    188,154,30,140,44,78,59,42,126,221,221,151,161,117,208,52,
    60,186,67,21,137,173,228,208,33,248,184,99,235,240,124,37,
    99,157,141,94,105,33,195,226,88,53,248,252,136,199,186,4,
    3,201,240,52,238,112,112,30,112,178,95,99,123,21,214,238,
    52,81,206,78,161,245,228,48,136,148,176,147,48,14,172,142,
    85,72,67,171,98,149,244,237,210,24,245,19,157,132,65,56,
    0,180,89,45,28,243,253,36,136,165,239,147,55,190,31,107,
    49,140,112,138,218,65,173,105,162,75,39,15,179,13,143,214,
    208,200,204,164,65,40,91,162,37,122,61,101,6,50,107,109,
    109,110,61,124,240,176,245,114,123,231,197,175,254,155,246,235,
    95,182,54,119,115,240,94,79,37,65,212,50,89,216,50,42,
    110,117,70,198,202,248,126,58,106,163,27,235,168,22,205,77,
    178,25,143,60,119,235,227,128,84,139,128,252,229,149,2,2,
    65,128,152,192,213,202,26,70,230,24,198,19,76,78,98,136,
    240,134,96,58,69,211,90,49,157,102,114,134,237,215,153,156,
    101,251,13,188,222,227,10,219,155,99,114,158,237,47,224,5,
    195,213,34,178,72,98,75,172,207,240,126,17,89,38,153,115,
    76,0,15,234,132,156,39,100,133,9,224,64,131,144,213,2,
    153,99,98,158,144,11,37,153,5,66,46,18,242,21,19,139,
    76,44,17,114,169,132,44,19,114,185,132,156,35,228,74,9,
    57,79,200,213,18,178,66,200,53,66,174,19,178,74,8,39,
    228,6,19,23,152,184,72,200,90,129,192,198,75,132,220,36,
    228,107,38,111,49,113,153,144,219,37,153,43,132,172,151,144,
    171,132,52,11,91,215,152,184,78,200,70,201,58,39,228,14,
    147,223,96,146,236,221,69,162,222,128,251,107,207,226,45,207,
    225,3,8,96,28,1,6,3,51,59,190,110,158,234,204,134,
    21,152,23,159,77,188,243,121,24,252,225,225,85,31,187,172,
    238,52,113,109,199,92,132,231,77,149,132,209,80,72,190,118,
    74,235,154,227,43,202,89,36,79,24,25,226,115,8,105,118,
    86,84,182,148,173,71,120,8,63,150,118,160,133,31,30,29,
    249,105,38,33,181,35,211,66,131,232,16,171,124,193,25,187,
    240,172,115,122,109,37,195,216,60,126,124,82,47,120,95,218,
    147,89,115,131,135,58,49,246,73,46,126,168,149,224,230,148,
    196,63,53,64,178,203,141,39,245,147,104,181,27,248,152,59,
    195,140,183,243,31,135,201,124,87,228,63,171,84,171,84,244,
    94,68,17,143,209,77,37,13,87,9,183,3,201,221,229,182,
    39,80,24,98,198,118,7,206,127,90,36,225,81,46,195,21,
    110,50,107,120,148,32,233,131,10,59,8,172,11,143,178,67,
    11,226,1,40,117,123,212,115,84,136,92,218,132,202,40,121,
    164,18,176,165,126,151,104,183,59,178,210,80,109,55,43,40,
    150,202,80,245,84,200,223,235,236,128,43,50,37,212,34,174,
    160,177,157,97,220,149,25,215,61,46,20,88,74,66,91,18,
    180,163,84,26,243,45,136,17,102,108,144,89,41,184,78,248,
    88,171,18,119,121,162,223,115,121,164,44,184,16,15,163,192,
    42,157,40,186,132,103,72,223,76,6,224,61,184,25,30,164,
    90,37,160,127,32,147,19,35,134,119,101,31,220,14,245,16,
    214,160,120,15,37,198,2,118,193,22,97,158,82,228,79,233,
    254,114,5,255,237,131,76,196,231,20,60,254,31,30,252,203,
    246,71,159,183,31,132,86,29,2,156,14,63,183,249,54,108,
    134,4,144,153,10,131,40,95,182,154,167,129,65,182,192,40,
    247,9,136,137,223,206,1,145,172,171,181,229,189,40,232,155,
    177,44,252,71,198,29,200,44,145,145,101,197,229,247,84,36,
    199,60,179,192,47,83,18,227,88,120,232,244,224,44,192,25,
    106,9,132,200,128,18,238,40,72,132,92,182,9,236,9,186,
    160,173,167,51,222,13,50,9,105,18,68,27,228,143,179,162,
    241,80,194,113,104,152,114,19,102,42,5,55,51,29,155,43,
    37,33,168,15,121,230,196,93,29,25,18,216,70,50,127,64,
    167,111,97,158,229,46,128,112,28,152,3,30,233,64,64,115,
    192,187,144,187,148,123,239,149,29,152,245,211,146,186,215,131,
    186,242,105,217,230,61,76,58,108,43,218,216,7,81,209,69,
    230,83,115,129,229,112,0,142,203,204,117,62,1,36,107,246,
    6,226,109,233,187,129,114,215,79,139,121,24,65,180,93,133,
    104,99,205,104,47,160,46,92,121,7,141,149,206,222,4,89,
    16,83,53,121,209,53,54,3,2,184,194,70,54,59,50,234,
    81,229,15,162,136,186,156,162,154,88,172,31,180,181,61,238,
    128,96,13,219,30,73,173,27,30,148,170,6,249,136,75,25,
    213,16,146,124,155,24,213,79,164,176,232,11,118,82,210,199,
    122,225,99,189,32,115,219,137,181,141,60,199,125,228,179,15,
    109,89,195,49,207,119,160,48,118,181,144,160,108,243,129,180,
    0,251,152,24,212,206,109,34,129,33,72,43,31,137,29,164,
    214,39,114,127,188,130,59,243,149,115,197,10,164,81,121,199,
    41,188,36,127,190,192,193,9,83,222,128,109,216,91,56,206,
    15,223,83,32,84,2,91,82,10,57,53,104,54,195,214,178,
    145,167,136,175,13,37,9,173,229,153,65,93,172,214,110,176,
    155,13,37,53,162,110,209,71,238,251,68,124,138,43,210,25,
    89,75,166,28,93,105,138,183,139,60,115,242,72,81,34,0,
    65,142,134,52,255,233,221,203,206,207,65,34,34,8,26,186,
    36,14,123,198,31,56,224,108,219,87,180,126,7,213,190,132,
    199,164,135,239,70,101,161,182,48,213,240,102,188,229,137,229,
    10,188,189,101,24,127,242,77,107,110,117,252,191,182,211,196,
    35,208,57,226,7,247,199,191,36,218,232,189,227,228,131,251,
    66,130,67,210,180,199,63,56,0,163,203,113,52,197,89,166,
    143,70,237,71,133,38,80,147,70,178,148,32,216,11,184,12,
    192,237,176,144,91,153,61,21,173,179,248,254,71,7,159,186,
    95,25,207,174,179,188,249,89,244,22,189,186,87,175,224,103,
    181,250,55,156,136,153,174,
};

EmbeddedPython embedded_m5_objects_System(
    "m5/objects/System.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/src/sim/System.py",
    "m5.objects.System",
    data_m5_objects_System,
    1527,
    3553);

} // anonymous namespace
