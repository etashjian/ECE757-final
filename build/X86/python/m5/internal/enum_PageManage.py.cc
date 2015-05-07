#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_PageManage[] = {
    120,156,205,86,81,111,27,69,16,158,189,59,59,177,19,55,
    78,211,164,45,13,212,8,85,152,138,198,72,208,22,68,85,
    81,74,64,173,192,45,103,164,166,6,113,92,239,214,201,57,
    206,157,117,183,73,49,114,94,72,5,188,241,35,16,15,252,
    15,254,23,204,55,119,118,156,8,36,158,82,156,220,104,110,
    118,111,118,230,219,111,102,55,160,226,87,226,231,163,6,81,
    54,175,136,66,254,87,52,32,218,83,212,85,164,180,162,112,
    137,118,75,148,190,71,97,137,94,16,117,45,210,22,29,177,
    98,211,215,22,197,139,242,77,153,6,182,88,20,141,170,164,
    29,234,150,232,73,188,76,142,46,211,110,149,210,239,72,41,
    21,43,218,10,231,40,156,167,23,236,157,149,138,56,156,167,
    176,42,74,133,194,5,81,170,52,170,147,94,160,46,59,159,
    163,110,141,93,93,103,87,231,196,213,159,112,21,242,72,157,
    194,26,166,115,44,79,49,211,193,76,89,227,156,120,89,34,
    109,83,191,78,221,186,40,203,212,93,22,229,60,117,207,139,
    178,66,221,21,81,46,80,247,130,40,171,212,93,69,50,157,
    230,50,163,18,253,197,191,38,163,66,102,145,197,129,78,179,
    40,137,189,40,238,37,145,133,241,50,4,48,12,32,230,10,
    48,239,3,204,63,72,144,12,173,2,204,67,34,133,119,162,
    129,69,135,162,28,90,52,106,210,88,81,223,161,208,166,49,
    47,83,162,35,69,219,138,142,44,250,198,198,132,67,150,14,
    167,255,26,57,38,71,178,47,233,231,158,230,232,176,68,227,
    18,117,182,198,22,12,187,21,74,127,167,31,214,197,233,188,
    56,181,104,204,210,161,35,135,14,203,244,132,39,177,169,95,
    1,104,106,107,204,153,178,165,211,116,56,218,246,76,186,72,
    37,140,210,216,223,211,166,206,186,167,227,253,61,239,177,191,
    173,191,240,99,150,205,234,100,86,146,109,12,125,179,227,202,
    103,54,240,216,27,26,113,151,196,218,44,176,210,139,226,208,
    219,75,194,253,129,54,243,240,229,245,162,129,246,60,25,124,
    176,55,76,82,179,153,166,73,234,2,82,49,14,18,127,250,
    5,0,13,6,73,166,155,88,77,150,113,225,222,96,118,111,
    40,30,17,128,132,138,143,67,157,5,105,52,52,188,83,185,
    71,204,134,183,38,246,72,68,182,205,162,181,159,241,126,14,
    253,64,183,194,86,216,235,69,217,142,78,91,155,247,55,111,
    223,188,221,250,244,65,251,222,231,222,99,247,209,195,205,251,
    95,21,198,27,156,136,63,104,61,219,143,6,97,107,235,253,
    91,173,225,200,236,36,113,107,239,102,43,138,141,78,49,120,
    10,166,13,158,114,30,11,62,143,182,189,72,82,245,118,244,
    96,168,83,68,154,189,130,96,84,93,45,170,178,178,85,83,
    213,88,43,241,99,171,117,107,65,181,35,36,27,0,0,240,
    204,158,48,235,55,146,61,100,10,236,90,148,174,131,55,125,
    254,87,216,104,102,79,7,99,150,140,125,9,148,114,107,223,
    6,27,114,227,88,184,198,164,227,153,119,176,253,49,9,97,
    74,212,47,83,78,36,230,95,206,172,116,4,201,211,225,198,
    98,231,14,101,191,158,244,16,215,137,119,129,171,143,77,107,
    188,212,143,194,205,78,19,129,183,133,35,102,39,202,146,231,
    177,236,4,116,169,166,14,99,242,120,244,232,89,95,7,38,
    187,202,134,167,201,126,35,240,227,56,49,13,63,12,27,190,
    49,105,244,108,223,232,172,97,146,198,181,172,89,193,214,47,
    79,104,54,245,55,26,78,104,5,10,48,173,242,151,48,10,
    12,191,172,200,139,224,159,105,195,20,217,73,194,140,237,112,
    177,173,141,139,32,205,57,22,247,38,203,9,23,155,229,9,
    115,50,61,232,153,170,144,208,207,50,79,150,131,93,248,134,
    175,15,252,193,190,54,152,159,25,223,240,170,80,243,133,94,
    18,227,46,33,231,73,202,128,209,139,147,56,28,113,196,81,
    240,6,130,185,36,188,91,36,48,111,149,89,55,199,178,76,
    53,102,97,221,10,144,156,83,112,78,248,182,6,40,72,56,
    160,138,126,194,220,59,226,174,211,180,164,109,72,150,82,152,
    13,104,248,216,5,181,221,43,16,235,16,175,78,128,56,123,
    52,106,167,209,120,7,17,88,2,65,96,23,201,78,139,171,
    125,162,184,46,31,23,23,247,203,14,138,196,66,41,29,23,
    137,13,56,210,187,69,69,160,252,152,20,60,60,83,7,2,
    146,139,46,42,172,18,10,187,224,229,44,57,183,103,200,233,
    98,127,132,153,238,229,127,3,244,234,255,1,208,237,28,208,
    119,17,193,98,193,169,154,112,169,170,2,16,194,42,224,21,
    104,63,97,101,116,17,208,206,130,122,145,207,194,39,113,77,
    14,53,57,24,229,0,207,251,75,142,117,174,56,96,95,207,
    166,181,226,176,202,208,14,134,105,242,253,168,145,244,26,134,
    38,49,220,185,150,109,92,203,62,228,134,209,184,43,45,40,
    111,25,121,83,72,245,48,229,226,175,200,75,94,208,158,20,
    183,87,28,55,12,254,42,64,181,38,144,75,255,202,76,138,
    182,245,146,240,174,78,241,70,248,31,96,249,170,128,109,211,
    69,126,170,74,98,244,18,233,164,114,17,145,81,126,62,6,
    236,200,92,19,46,115,110,39,207,64,146,67,154,238,155,39,
    88,116,230,169,185,215,17,228,164,28,203,52,229,12,30,27,
    193,163,66,126,230,115,94,129,54,63,17,248,193,52,40,106,
    74,170,23,15,182,121,5,211,191,37,105,82,255,112,52,90,
    121,109,90,69,27,227,210,205,110,203,212,252,164,124,72,191,
    204,116,184,35,155,20,78,53,187,184,150,205,158,106,206,180,
    154,133,88,255,233,228,114,78,150,61,182,107,199,207,48,45,
    47,112,123,90,224,199,205,114,122,159,226,174,117,246,156,155,
    207,23,246,16,227,103,199,140,195,145,113,69,173,88,51,60,
    122,27,226,198,148,66,106,98,59,211,112,175,158,238,241,51,
    39,158,151,247,213,79,17,147,35,89,44,149,5,241,83,87,
    248,60,254,181,41,236,163,204,133,197,93,130,176,38,61,132,
    59,14,223,222,204,72,238,12,249,146,83,19,218,74,155,175,
    5,249,109,182,129,239,94,135,192,153,235,190,5,15,88,44,
    175,83,161,126,222,136,98,253,92,90,145,112,193,221,160,226,
    226,193,78,99,233,181,80,60,63,244,249,74,123,160,93,185,
    120,99,113,185,20,79,237,98,106,159,0,70,188,4,7,126,
    250,18,43,92,48,187,147,247,214,187,200,54,187,197,2,247,
    142,202,82,69,149,45,220,117,109,85,229,59,136,163,22,107,
    21,187,82,174,148,108,190,135,192,178,162,170,118,165,90,81,
    197,159,245,55,234,26,41,114,
};

EmbeddedPython embedded_m5_internal_enum_PageManage(
    "m5/internal/enum_PageManage.py",
    "/userspace/d/dffisher/ECE757/FINAL_PROJECT/ECE757-final/build/X86/python/m5/internal/enum_PageManage.py",
    "m5.internal.enum_PageManage",
    data_m5_internal_enum_PageManage,
    1496,
    3761);

} // anonymous namespace