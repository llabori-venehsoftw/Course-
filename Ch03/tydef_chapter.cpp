// typedef_chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>

typedef unsigned char points_t;
typedef unsigned char rank_t;

struct score {
    points_t p;
    rank_t r;
};

int thirtyone() {

    score s = { 5, 1 };
    printf("score s had %d points and a rank of %d\n", s.p, s.r);

    return 0;
}
