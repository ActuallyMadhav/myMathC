#include <stdio.h>
#include "vec.h"

// arithmetic operations
vec2 vec2_add(vec2 a, vec2 b){
    vec2 result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

vec2 vec2_subtract(vec2 a, vec2 b){
    vec2 result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

void vec2_scale(vec2* v, float k){
    v->x *= k;
    v->y *= k;
}