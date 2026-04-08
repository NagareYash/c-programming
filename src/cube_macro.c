#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Cube of %d is %d\n", n, CUBE(n));
    return 0;
}