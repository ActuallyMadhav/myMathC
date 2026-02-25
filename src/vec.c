#include <stdio.h>
#include "vec.h"

// arithmetic operations
vec2 vec2_add(vec2 a, vec2 b){
    vec2 result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}