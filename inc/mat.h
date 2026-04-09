#ifndef MAT_H
#define MAT_H

#include <math.h>
#include <stdio.h>

// mat structs, should i use pointers?
typedef struct{float m[4];} mat2;
typedef struct{float m[9];} mat3;
typedef struct{float m[16]} mat4;

// mat2 operations
mat2 mat2_add(mat2 a, mat2 b);
mat2 mat2_subtract(mat2 a, mat2 b);
mat2 mat2_scale_new(mat2 a, int k);
void mat2_scale(mat2* a, int k);
mat2 mat2_transpose(mat2 a);


#endif