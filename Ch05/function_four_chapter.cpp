// function_three_chapter.cpp By Luis Labori
// Updated 2021-04

#include <cstdio>
#include <string>

void func(const std::string & s ) {

    printf("The value of s is : %s\n", s.c_str());
    //puts("This is func()\n");
}

int thirtyEight() {

    std::string s = "This is a String";
    //int i = 47;
    puts("This is main()");
    func(s);
    //printf("The value of s after func() is : %d\n", i);
    return 0;
}
