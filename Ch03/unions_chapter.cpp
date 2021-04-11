// unions_chapter.cpp Development By Luis LAbori
// Updated 2021-04

#include <cstdio>
#include <cstdint>

union ipv4 {
    uint32_t i32;
    struct {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } octects;
};

int thirty() {
    union ipv4 addr;

    addr.octects = { 192, 168, 1, 4};
    printf("addr is %d.%d.%d.%d is %08x\n", addr.octects.a, addr.octects.b, addr.octects.c, addr.octects.d, addr.i32);

    return 0;
}
