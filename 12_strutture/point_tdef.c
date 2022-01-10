#include <stdio.h>
#include <string.h>

typedef struct struct_point {
    int X;
    int Y;
    int Z;
} point;

point f(point p) {
    p.X++;
    p.Y++;
    p.Z++;

    return p;
}

void print(point p) {
    printf("X: %d, Y: %d, Z: %d\n", p.X, p.Y, p.Z);
}

point x;

int main() {
    x.X = 5;
    x.Y = -2;
    x.Z = 7;

    print(x);

    point modificato = f(x);

    print(modificato);
    print(x);

    return 0;
}