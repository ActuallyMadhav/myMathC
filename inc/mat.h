#ifndef MAT_H
#define MAT_H

#include <math.h>
#include <stdio.h>

// mat structs, should i use pointers?
typedef struct{float m[4];} mat2;
typedef struct{float m[9];} mat3;
typedef struct{float m[16];} mat4;

// identity matrices
const mat2 IDENTITY_2x2 = {
    1.0f, 0.0f,
    0.0f, 1.0f
};

const mat3 IDENTITY_3x3 = {
    1.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 1.0f
};

const mat4 IDENTITY_4x4 = {
    1.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 1.0f
};

// mat2 operations
mat2 mat2_add(mat2 a, mat2 b);
mat2 mat2_subtract(mat2 a, mat2 b);
mat2 mat2_scale_new(mat2 a, float k);
void mat2_scale(mat2* a, float k);
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

#endif