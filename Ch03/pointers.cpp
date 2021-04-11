// pointers.cpp by Luis Labori
// updated 2021-04
#include <cstdio>

int five()
{
    int x = 7;
    int y = 42;
    int * ip = &x;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    x = 56;
    printf("The value of x is %d\n", *ip);

    x = 238;
    printf("The value of x is %d\n", *ip);

    return 0;
}
