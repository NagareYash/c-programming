#include <stdio.h>

int main() {
    // Declare variables
    char name[50];
    int age;
    float gpa;
    
    // Get user input
    printf("Enter student name: ");
    scanf("%s", name);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter GPA: ");
    scanf("%f", &gpa);
    
    // Display output on one line
    printf("\nStudent Information: Name: %s, Age: %d, GPA: %.2f\n", name, age, gpa);
    
    return 0;
}
