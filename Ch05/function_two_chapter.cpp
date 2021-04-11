// function_two_chapter.cpp By Luis Labori
// Updated 2021-04

#include <cstdio>

void func(int i) {
    printf("The value of i is : %d\n", i);
    //puts("This is func()\n");
}

int thirtySix() {
    puts("This is main()\n");
    func(42);
    return 0;
}
