// func_overload_chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>

const double d_pi = 3.141592653589793;

// volume of cube
double volume( double a) {
    printf("cube of %.3lf\n", a);
    return a * a * a;
}

// Volume of cylinder
double volume(double r, double h) {
    printf("cylinder of %.3lf x %.3lf\n", r, h);
    return d_pi * r * r * h;
}

// Volume of cuboid
double volume(double a, double b, double c) {
    printf("cuboid of %.3lf x %.3lf x %.3lf\n", a, b, c);
    return a * b * c;
}

int fourtyFour() {
    printf("volume of a 2 x 2 x 2 cube: %.3lf\n", volume(2.0));
    printf("volume of a cylinder, radius 2, height 2: %.3lf\n", volume(2.0, 2.0));
    printf("volume of a 2 x 3 x 4 cuboid: %.3lf\n", volume(2.0, 3.0, 4.0));
    return 0;
}
