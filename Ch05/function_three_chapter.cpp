// function_three_chapter.cpp By Luis Labori
// Updated 2021-04

#include <cstdio>

void func(int * i) {
    *i = 73;
    printf("The value of i is : %d\n", *i);
    //puts("This is func()\n");
}

int thirtySeven() {
    int i = 47;
    puts("This is main()");
    func(&i);
    printf("The value of i after func() is : %d\n", i);
    return 0;
}
