//
//

#include <cstdio>

class C2 {
    int i = 0;
public:
    // Interface
    void setvalue(int value);
    int getvalue();
};

    //Method implementation
    void C2::setvalue( int value) {
        i = value;
    }

    int C2::getvalue() {
        return i;
    }

    int fortyeight() {
        int i = 56;

        C2 o2;

        o2.setvalue(i);
        printf("The values of i is: %d\n", o2.getvalue());
        return 0;
    }
