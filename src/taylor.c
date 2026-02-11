#include <stdio.h>
#include <math.h>

// Function to calculate factorial
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate power
float power(float base, int exp) {
    float result = 1.0;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to convert degrees to radians
float degreesToRadians(float degrees) {
    return degrees * (M_PI / 180.0);
}

int main() {
    float ans = 0;      // Taylor series result
    float ans2 = 0;     // Built-in sin result
    float degree, radian;
    
    printf("Enter angle in Degrees: ");
    scanf("%f", &degree);
    
    radian = degreesToRadians(degree);
    printf("Angle in Radian is %f\n", radian);
    
    // Apply Taylor series expansion using custom functions
    ans = radian 
          - power(radian, 3) / factorial(3) 
          + power(radian, 5) / factorial(5) 
          - power(radian, 7) / factorial(7);
    
    ans2 = sin(radian);
    
    printf("Taylor expansion of sin: %f\n", ans);
    printf("Built-in sin function: %f\n", ans2);
    
    return 0;
}