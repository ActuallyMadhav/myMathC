#include <stdio.h>
#include <math.h>
#include "mat.h"

// mat2 operations
mat2 mat2_add(mat2 a, mat2 b){
    mat2 res;

    for(int i = 0; i < 4; i++){
        res.m[i] = a.m[i] + b.m[i];
    }

    return res;
}

mat2 mat2_subtract(mat2 a, mat2 b){
    mat2 res;

    for(int i = 0; i < 4; i++){
        res.m[i] = a.m[i] - b.m[i];
    }

    return res;
}

mat2 mat2_scale_new(mat2 a, float k){
    mat2 res;

    for(int i = 0; i < 4; i++){
        res.m[i] = a.m[i]*k;
    }

    return res;
}
void mat2_scale(mat2* a, float k){
    for(int i = 0; i < 4; i++){
        a->m[i] *= k;
    }
}
mat2 mat2_transpose(mat2 a);

// mat3 operations
mat3 mat3_add(mat3 a, mat3 b);
mat3 mat3_subtract(mat3 a, mat3 b);
mat3 mat3_scale_new(mat3 a, float k);
void mat3_scale(mat3* a, float k);
mat3 mat3_transpose(mat3 a);

// mat4 operations
mat4 mat4_add(mat4 a, mat4 b);
mat4 mat4_subtract(mat4 a, mat4 b);
mat4 mat4_scale_new(mat4 a, float k);
void mat4_scale(mat4 a, float k);
mat4 mat4_transpose(mat4 a);
