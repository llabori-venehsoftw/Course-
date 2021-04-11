// accessor_charter.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>

class A {
    int ia = 0;
    int ib = 0;
    int ic = 0;
public:
    A (int a, int b, int c) : ia(a), ib(b), ic(c) {};
    void seta(int a) { ia = a;}
    void setb(int b) { ib = b;}
    void setc(int c) { ic = c;}
    int geta() { return ia; }
    int getb() { return ib; }
    int getc() { return ic; }
};

int fortyNine() {
    A a(1, 2, 3);
    printf("ia is %d, ib is %d, ic is %d\n", a.geta(), a.getb(), a.getc());
    return 0;
}
