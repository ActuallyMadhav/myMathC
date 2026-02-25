#ifndef VEC_H
#define VEC_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct {float x, y;} vec2;
typedef struct {float x, y, z;} vec3;
typedef struct {float x, y, z, w;} vec4;

// arithmetic operations
vec2 vec2_add(vec2 a, vec2 b);
vec2 vec2_subtract(vec2 a, vec2 b);
void vec2_scale(vec2* v, float k);

vec3 vec3_add(vec3 a, vec3 b);
vec3 vec3_subtract(vec3 a, vec3 b);
void vec3_scale(vec3* v, float k);

vec4 vec4_add(vec4 a, vec4 b);
vec4 vec4_subtract(vec4 a, vec4 b);
void vec4_scale(vec4* v, float k);

// dot and cross products
float vec2_dot(vec2 a, vec2 b);
float vec3_dot(vec3 a, vec3 b);
float vec4_dot(vec4 a, vec4 b);

vec3 vec3_cross(vec3 a, vec3 b);

// length and normalization
float vec2_length(vec2 v);
float vec3_length(vec3 v);
float vec4_length(vec4 v);

// in-place modification
void vec2_normalize(vec2* v);
void vec3_normalize(vec3* v);
void vec4_normalize(vec4* v);

// new vec returned
vec2 vec2_normalized(vec2 v);
vec3 vec3_normalized(vec3 v);
vec3 vec4_normalized(vec4 v);

// prints for debugging
void vec2_print(vec2 v);
void vec3_print(vec3 v);
void vec4_print(vec4 v);


#endif