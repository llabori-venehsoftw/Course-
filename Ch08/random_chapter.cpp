// random_chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
    printf("time value: %ld\n", (long) time(nullptr));

    srand((unsigned)time(nullptr));
    rand();

    printf("pseudo-random value: %d\n", rand() % 1000);
    printf("pseudo-random value: %d\n", rand() % 1000);
    printf("pseudo-random value: %d\n", rand() % 1000);

    printf("RAND_MAX is %d\n", RAND_MAX);

    return 0;
}
