// pointer_capter.cpp Development By Luis Labori
// Update 2021-04

#include <cstdio>
#include <cstdint>

void printtp(uint8_t *p) {
    printf("pointer is %p, value is %d\n", p, *p);
}

int thirtytwo() {
    uint8_t arr[5] = {1, 2, 3, 4, 5};
    uint8_t *p = arr;
    printtp(p++);
    printtp(p++);
    printtp(p++);
    return 0;
}
