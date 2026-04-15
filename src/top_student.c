#include <stdio.h>

typedef struct {
    char name[50];
    int  roll;
    float gpa;
} Student;

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
        printf("\n");
    }

    int max_index = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].gpa > students[max_index].gpa) {
            max_index = i;
        }
    }

    printf("Top Student:\n");
    printf("Name: %s, Roll: %d, GPA: %.2f\n",
           students[max_index].name,
           students[max_index].roll,
           students[max_index].gpa);

    return 0;
}