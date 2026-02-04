#include <stdio.h>

int main() {
    char operation;
    double a, b, result;
    
    // Get operation from user
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);
    
    // Get two numbers
    printf("Enter first number: ");
    scanf("%lf", &a);
    
    printf("Enter second number: ");
    scanf("%lf", &b);
    
    // Check operation and calculate result
    if (operation == '+') {
        result = a + b;
        printf("Result: %lf\n", result);
    } else if (operation == '-') {
        result = a - b;
        printf("Result: %lf\n", result);
    } else if (operation == '*') {
        result = a * b;
        printf("Result: %lf\n", result);
    } else if (operation == '/') {
        if (b != 0) {
            result = a / b;
            printf("Result: %lf\n", result);
        } else {
            printf("Error: Cannot divide by zero!\n");
        }
    } else {
        printf("Invalid operation!\n");
    }
    
    return 0;
}
