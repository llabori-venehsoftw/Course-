// norecursive-factorial.cpp Development By Luis Labori
// Updated 2021-04
#include <cstdio>

unsigned long int factorial( unsigned long int n ) {

    if( n < 2 ) {
        return 1;
    }
    else {
        unsigned long int acum = 1;
        unsigned int temp = n;

        while (temp >= 2) {
            acum *= temp;
            temp -= 1;
        }
       return acum;
    }
}

int fortySix() {
    unsigned long int n = 10;
    printf("Factorial of %ld is %ld\n", n, factorial(n));
    return 0;
}
