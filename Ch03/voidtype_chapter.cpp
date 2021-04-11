// voidtype.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>

void func(void) {
    puts("this is void func ( void )");
}

int thirtytwo() {
    puts("calling func()");
    func();
    return 0;
}
