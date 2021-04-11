// fprint_chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>

int main() {
    int i = 5;
    long int li = 1234567890L;
    const char * s = " This is a string.";
    printf("i is %d, li is %ld, s is %s\n", i, li, s);
    printf("The pointer %p and you size is %zd\n", s, sizeof(s));
    return 0;
}
