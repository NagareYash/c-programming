#include <stdio.h>
#include "calc.h"

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition:       %d + %d = %d\n", a, b, add(a, b));
    printf("Subtraction:    %d - %d = %d\n", a, b, subtract(a, b));
    printf("Multiplication: %d * %d = %d\n", a, b, multiply(a, b));
    printf("Division:       %d / %d = %.2f\n", a, b, divide(a, b));

    printf("\n");
    printf("PI macro value:       %.5f\n", PI);
    printf("SQUARE(5) macro test: %d\n", SQUARE(5));

    return 0;
} 