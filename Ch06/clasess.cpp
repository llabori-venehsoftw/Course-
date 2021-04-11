// clasese.cpp By Luis Labori
// Updated 2021-04

#include <cstdio>

class C {
    int i = 0;
public:
    void setvalue( int value) { i = value; }
    int getvalue() { return i; }
};

int twenti(){

    int i = 47;

    C o1;
    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());
    return 0;
}
