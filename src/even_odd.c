#include <stdio.h>

// Function Prototype
int isEven(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num)) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}

// Function Definition
int isEven(int n) {
    if (n & 1) {
        return 0;   // last bit is 1 → Odd
    } else {
        return 1;   // last bit is 0 → Even
    }
}
