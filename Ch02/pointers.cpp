// cpp-version.cpp Development By Luis Labori
// updated 2021-04
#include <cstdio>

int main()
{
    int x = 7;
    int y = 42;
    int * ip = &x;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    return 0;
}
