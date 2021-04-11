// autotype2_chapter.cpp Development By Luis LAbori
// Updated 2021-04

#include <cstdio>
#include <vector>

int thirtyfour() {
    std::vector<int> vi = { 1, 2, 3, 4, 5 };
    for(std::vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
        printf("int is %d\n", *it);
    }
    return 0;
}
