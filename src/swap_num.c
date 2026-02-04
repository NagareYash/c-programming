#include <stdio.h>

int main() {
    int a, b, temp;
    
    // Get input from user
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    // Display before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    
    // Swap the values using a temporary variable
    temp = a;    // Store value of a in temp
    a = b;       // Put value of b into a
    b = temp;    // Put original value of a (from temp) into b
    
    // Display after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}
