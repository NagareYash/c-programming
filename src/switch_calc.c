#include <stdio.h>

// Function Prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    char op;
    float a, b, result;

    while (1) {
        printf("Enter operator (+, -, *, /, q to quit): ");
        scanf(" %c", &op);

        if (op == 'q') {
            printf("Goodbye!\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (op) {
            case '+':
                result = add(a, b);
                printf("%.2f + %.2f = %.2f\n", a, b, result);
                break;
            case '-':
                result = subtract(a, b);
                printf("%.2f - %.2f = %.2f\n", a, b, result);
                break;
            case '*':
                result = multiply(a, b);
                printf("%.2f * %.2f = %.2f\n", a, b, result);
                break;
            case '/':
                if (b == 0)
                    printf("Error: Division by zero!\n");
                else {
                    result = divide(a, b);
                    printf("%.2f / %.2f = %.2f\n", a, b, result);
                }
                break;
            default:
                printf("Invalid operator!\n");
        }
    }

    return 0;
}

// Function Definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
