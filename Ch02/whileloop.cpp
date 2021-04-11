// whileloop.cpp by Luis LAbori
// Updated 2021-04

#include <cstdio>

int eleven(){

    int array[] = {1, 2, 3, 4, 5};
    int i = 0;

    while (i<5){
        printf("Element %d is %d\n", i, array[i]);
        ++i;
    }

    i = 0;

    do {
        printf("Element %d is %d\n", i, array[i]);
        ++i;
    }
    while (i<5);
}
