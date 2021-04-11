// errno_chapter.cpp Development By Luis Labori
// updated 2021-04
#include <cstdio>
#include <cerrno>
#include <cstring>

int main() {
    printf("Erasing file foo.bar\n");
    remove("foo.bar");
    printf("errno is: %d\n", errno);
    perror("Cannot erase file");

    const char * errstring = strerror(errno);
    printf("errno # is: (%d) and you definition is: %s\n", errno, errstring);

    return 0;
}
