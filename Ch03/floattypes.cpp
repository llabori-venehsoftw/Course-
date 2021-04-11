// floattypes.cpp Development by Luis LAbori
// Update 2021-04

#include <cstdio>
#include <cstdint>

const size_t byte = 8;

int twentyfour() {
    float f;
    double d;
    long double ldf;

    printf("size of float is %zd\n", sizeof(f) * byte);
    printf("size of double is %zd\n", sizeof(d) * byte);
    printf("size of long double is %zd\n", sizeof(ldf) * byte);

    return 0;
}
