#include <stdio.h>
#include "vec.h"

int main(){
    vec2 a = {1.0f, 1.0f};
    vec2 b = {2.0f, 2.0f};
    vec2 c = vec2_add(a, b);

    printf("(%.1f, %.1f)", c.x, c.y);
    return 0;
}