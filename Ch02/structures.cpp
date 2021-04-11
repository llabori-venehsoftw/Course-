// structures.cpp By Luis Labori
// Updated 2021-04

#include <cstdio>

struct S {
    int i;
    double d;
    const char *s;
    };

int seventeen(){

    S s1 = { 3, 45.9, "string one"};
    printf("s1: %d, %f, %s\n", s1.i, s1.d, s1.s);

    return 0;
}
