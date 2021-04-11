// numeric.cpp by Bill Weinman <http://bw.org/>
// updated 2002-07-27
#include <cstdio>
#include <cstdlib>
#include <cmath>

int main()
{
    //int neg = -47;
    //int x = abs(neg);
    //printf("x is %d\n", x);

    //double neg = -47;
    //double x = fabs(neg);
    //printf("x is %lf\n", x);

    //double x = exp(1);
    //double x = fabs(neg);
    //printf("x is %lf\n", x);

    const double pi = acos(-1);
    double x = sin(pi/6);
    printf("x is %lf\n", x);

    return 0;
}
