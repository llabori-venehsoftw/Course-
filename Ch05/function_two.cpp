// function_two.cpp By Luis Labori
// Updated 2021-04

#include <cstdio>

int func(int i,const char * s){

    printf("the parameter for are: func(%i, %s)\n", i, s);

    int x = i * 2;

    return x;
}

int nineteen(){

    printf("This the output from main()\n");
    int Y = func(42, "this is string");
    printf("This is the value of Y= %d\n", Y);
    return 0;
}
