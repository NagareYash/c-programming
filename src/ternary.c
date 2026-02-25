#include <stdio.h>

int main() {
    float s1, s2, s3, average;
    char *result;

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    average = (s1 + s2 + s3) / 3.0;

    result = (average >= 60) ? "Pass" : "Fail";

    printf("Average: %.2f\n", average);
    printf("Result: %s\n", result);

    return 0;
}
