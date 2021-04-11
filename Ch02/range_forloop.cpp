// range_forloop.cpp By Luis Labori
// Updated 2021-04

#include <cstdio>

int fifteen(){

    char array[] = {1, 2, 3, 4, 5};

    for (int i : array){
        printf("i is %d\n", i);
    }

    return 0;
}
