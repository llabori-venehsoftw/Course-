// function_seven_chapter.cpp Development by Luis Labori
// Updated 2021-04

#include <cstdio>

void func3() {
    puts("This is from func4()");
}

int fourtyTwo() {
    puts("This is from main()");
    void (*pfunc)() = func3;
    (*pfunc)();
    return 0;
}
