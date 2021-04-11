// accessortwo_chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>

class C3 {
    int i = 0;

public:
    void setvalue(int value);
    int getvalue() const;
    int getvalue();
};

void C3::setvalue(int value) {
    i = value;
}

int C3::getvalue() const {
    puts("const function");
    return i;
}

int C3::getvalue() {
    puts("Non-const function");
    return i;
}

int fifty(){
    int i = 43;
    C3 o3;
    o3.setvalue(i);

    const C3 o4 = o3;

    printf("The value of i is : %d\n", o3.getvalue());
    printf("The value of i on o4 is : %d\n", o4.getvalue());
    return 0;
}
