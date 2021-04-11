// cpp-version.cpp Development By Luis Labori
// updated 2021-04
#include <cstdio>

int main(int argc, char ** argv)
{
    puts("loop test");
    for (int i = 0; argv[i]; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}
