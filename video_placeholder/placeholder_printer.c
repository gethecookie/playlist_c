#include <stdio.h>

void print_all(double i) {
    printf("Signed\n");
    printf("%%d > %d\n", i); // Decimal
    printf("%%i > %i\n", i); // Int

    printf("\nUnsigned\n");
    printf("%%u > %u\n", i); // Unsigned

    printf("\nHex\n");
    printf("%%x > %x\n", i);  // heXadecimal

    printf("\nOctal\n");
    printf("%%o > %o\n", i); // Octal

    printf("\nFloat\n");
    printf("%%f > %f\n", i); // Floating-point
    printf("%%g > %g\n", i); // General floating-point

    printf("\nLong\n");
    printf("%%l > %li\n", i); // Long

    printf("\nExp\n");
    printf("%%e > %e\n", i);

    printf("\nStringa\n");
    printf("%%s > %s\n", i);
}

void print_ptr(int *ptr) {
    printf("\n\n\nPointer\n");
    printf("%%d > %d\n", *ptr);
    printf("%%p > %p\n", ptr);
}

int main() {
    print_all(3.141);
    return 0;
}
