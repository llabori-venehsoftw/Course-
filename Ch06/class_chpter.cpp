// class_chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>

// A very simple call

class C1 {
    int i = 0;

public:
    void setvalue( int value ) { i = value;};
    int getvalue() { return i;};

};

int fortySeven() {
    int i = 47;

    C1 o1;

    o1.setvalue(i);
    printf("The value of i is: %d\n", o1.getvalue());
    return 0;
}
