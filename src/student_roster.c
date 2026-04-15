#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int  roll;
    float gpa;
} Student;

float averageGPA(Student *students, int n) {
    float sum = 0.0f;
    for (int i = 0; i < n; i++) {
        sum += students[i].gpa;
    }
    return sum / (float)n;
}

int main() {
    int n;

    printf("How many students? ");
    scanf("%d", &n);

    Student *roster = (Student *)malloc(n * sizeof(Student));
    if (roster == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", roster[i].name);
        printf("Roll: ");
        scanf("%d", &roster[i].roll);
        printf("GPA: ");
        scanf("%f", &roster[i].gpa);
    }

    float avg = averageGPA(roster, n);
    printf("\nAverage GPA: %.2f\n", avg);

    free(roster);
    return 0;
}