// nullptr_chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>

#ifndef NULL
#define NULL (0LL) // Common definition on C++
#endif // NULL

void f(int i) {
    printf("The integer i %d\n", i);
}

void f(const char * s) {
    printf("the pointer is %p\n", s);
}

int thirtynine() {
    // f(NULL); This NOT Work
    f(nullptr);
    return 0;
}
