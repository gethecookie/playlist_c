#include <stdio.h>
#include <string.h>

struct struct_point {
    int X;
    int Y;
    int Z;
} point;

struct struct_point f(struct struct_point p) {
    p.X++;
    p.Y++;
    p.Z++;

    return p;
}

void print(struct struct_point p) {
    printf("X: %d, Y: %d, Z: %d\n", p.X, p.Y, p.Z);
}

struct struct_point point;

int main() {
    point.X = 5;
    point.Y = -2;
    point.Z = 7;

    print(point);

    struct struct_point modificato = f(point);

    print(modificato);
    print(point);

    return 0;
}