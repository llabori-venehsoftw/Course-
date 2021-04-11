// function_six_chapter Development by Luis Labori
// Updated 2021-04

#include <cstdio>
#include <string>

const std::string & func2(){

    const static std::string s = "This is from func2()";
    return s;
}

int fourtyOne() {

    puts("This output is from main()\n");
    const std::string f = func2();
    printf("f is : %s\n", f.c_str());
}
