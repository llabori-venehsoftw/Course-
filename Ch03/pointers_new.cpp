// pointers_new.cpp by Luis Labori
// updated 2021-04
#include <cstdio>

int six()
{
    int x = 42;
    int * ip = &x;
    int & y = x;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    y = 65;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    return 0;
}
