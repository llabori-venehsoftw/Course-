// unformatt_character.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>

int main() {

    const int bufsize = 256;
    static char buf[bufsize];
    fputs("prompt: ", stdout);
    fgets(buf, bufsize, stdin);
    puts("output :");
    fputs(buf, stdout);
    fflush(stdout);
    return 0;

}
