// norecursive-factorial.cpp Development By Luis Labori
// Updated 2021-04
#include <iostream>

template <typename T>
T factorial(T n) {

    if( n < 2 ) {
        return 1;
    }
    else {
        T acum = 1;
        T temp = n;

        while (temp >= 2) {
            acum *= temp;
            temp -= 1;
        }
       return acum;
    }
}

/*
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
*/

int main() {
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));

    long long unsigned int llui = 15;
    printf("Factorial of %ld is %ld\n", llui, factorial(llui));

    long double ld = 25;
    printf("Factorial of %.3Lf! is %-4.10Lg\n", ld, factorial(ld));

    return 0;
}
