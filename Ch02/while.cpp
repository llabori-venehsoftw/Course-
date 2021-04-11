// cpp-version.cpp Development By Luis Labori
// updated 2021-04
#include <cstdio>

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };
    int i = 0;

    while(i < 5) {
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }

    return 0;
}
