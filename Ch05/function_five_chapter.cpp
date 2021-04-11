// function_five_chapter.cpp By Luis Labori
// Updated 2021-04

#include <cstdio>

void func1() {

    static int i = 5;

    printf("The value of i is : %i\n", i++);
    //puts("This is func()\n");
}

int fourty() {

    //std::string s = "This is a String";
    //int i = 47;
    puts("This is main()");
    func1();
    func1();
    func1();
    func1();
    func1();
    //printf("The value of s after func() is : %d\n", i);
    return 0;
}
