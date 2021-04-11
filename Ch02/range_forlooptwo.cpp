// range_forlooptwo.cpp By Luis Labori
// Updated 2021-04

#include <cstdio>

int sixteen(){

    char s[] = "string";

    {
       for (char c : s){
            if (c == 0) break;
            printf("The char is %c\n", c);
        }
    }
    return 0;
}
