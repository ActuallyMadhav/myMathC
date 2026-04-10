#include <stdio.h>
#include <math.h>
#include "mat.h"

// mat2 operations
mat2 mat2_add(mat2 a, mat2 b){
    mat2 res = {
        a.m[0] + b.m[0], a.m[1] + b.m[1],
        a.m[2] + b.m[2], a.m[3] + b.m[3]
    };
    return res;
}