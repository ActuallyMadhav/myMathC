#include <stdio.h>
#include "vec.h"

// arithmetic operations
vec2 vec2_add(vec2 a, vec2 b){
    vec2 res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    return res;
}

vec2 vec2_subtract(vec2 a, vec2 b){
    vec2 res;
    res.x = a.x - b.x;
    res.y = a.y - b.y;
    return res;
}

void vec2_scale(vec2* v, float k){
    v->x *= k;
    v->y *= k;
}

vec2 vec2_scale_new(const vec2 v, float k){
    vec2 res;
    res.x = v.x * k;
    res.y = v.y * k;
    return res;
}

vec3 vec3_add(vec3 a, vec3 b){
    vec3 res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    res.z = a.z + b.z;
    return res;
}

vec3 vec3_subtract(vec3 a, vec3 b){
    vec3 res;
    res.x = a.x - b.x;
    res.y = a.y - b.y;
    res.z = a.z - b.z;
    return res;
}

void vec3_scale(vec3* v, float k){
    v->x *= k;
    v->y *= k;
    v->z *= k;
}

vec3 vec3_scale_new(const vec3 v, float k){
    vec3 res;
    res.x = v.x * k;
    res.y = v.y * k;
    res.z = v.z * k;
    return res;
}

vec4 vec4_add(vec4 a, vec4 b){
    vec4 res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    res.z = a.z + b.z;
    res.w = a.w + b.w;
    return res;
}

vec4 vec4_subtract(vec4 a, vec4 b){
    vec4 res;
    res.x = a.x - b.x;
    res.y = a.y - b.y;
    res.z = a.z - b.z;
    res.w = a.w - b.w;
    return res;
}

void vec4_scale(vec4* v, float k){
    v->x *= k;
    v->y *= k;
    v->z *= k;
    v->w *= k;
}

vec4 vec4_scale_new(const vec4 v, float k){
    vec4 res;
    res.x = v.x * k;
    res.y = v.y * k;
    res.z = v.z * k;
    res.w = v.w * k;
    return res;
}

// dot and cross products
float vec2_dot(vec2 a, vec2 b){
    return a.x*b.x + a.y*b.y;
}

float vec3_dot(vec3 a, vec3 b){
    return a.x*b.x + a.y*b.y + a.z*b.z;
}
float vec4_dot(vec4 a, vec4 b){
    return a.x*b.x + a.y*b.y + a.z*b.z + a.w*b.w;
}

vec3 vec3_cross(vec3 a, vec3 b){
    vec3 res;
    res.x = a.y*b.z - a.z*b.y;
    res.y = a.z*b.x - a.x*b.z;
    res.z = a.x*b.y - a.y*b.x;
    return res;
}