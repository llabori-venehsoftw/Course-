// qualifiers_chapter.cpp Development by Luis Labori
// Update 2021-04

#include <cstdio>

class S {

public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
};

int func() {
    static int x = 7;
    return ++x;
}

int twentyfive() {
    int i = func();
    i = func();
    i = func();
    printf("The integer is %d\n", i);

    S s1;
    S s2;
    S s3;

    printf("The integer is %d\n", s1.static_value());
    printf("The integer is %d\n", s2.static_value());
    printf("The integer is %d\n", s3.static_value());

    return 0;
}
