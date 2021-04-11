// stdint_chapter.cpp Development by Luis Labori
// Update 2021-04

#include <cstdio>
#include <cstdint>

int twentyThree() {

    printf("size of int8_t is %ld\n", sizeof(int8_t) * 8);
    printf("size of int16_t is %ld\n", sizeof(int16_t) * 8);
    printf("size of int32_t is %ld\n", sizeof(int32_t) * 8);
    printf("size of int64_t is %ld\n", sizeof(int64_t) * 8);

    printf("size of uint8_t is %ld\n", sizeof(uint8_t) * 8);
    printf("size of uint16_t is %ld\n", sizeof(uint16_t) * 8);
    printf("size of uint32_t is %ld\n", sizeof(uint32_t) * 8);
    printf("size of uint64_t is %ld\n", sizeof(uint64_t) * 8);

    return 0;
}
