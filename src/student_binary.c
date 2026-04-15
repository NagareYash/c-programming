#include <stdio.h>

typedef struct {
    char name[50];
    int  roll;
    float gpa;
} Student;

void readAndPrint(const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("Could not open %s for reading!\n", filename);
        return;
    }

    Student loaded[3];
    fread(loaded, sizeof(Student), 3, fp);
    fclose(fp);

    printf("\nReading back from %s:\n", filename);
    for (int i = 0; i < 3; i++) {
        printf("%d. %s - Roll: %d - GPA: %.2f\n",
               i + 1, loaded[i].name, loaded[i].roll, loaded[i].gpa);
    }
}

int main() {
    Student roster[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", roster[i].name);
        printf("Roll: ");
        scanf("%d", &roster[i].roll);
        printf("GPA: ");
        scanf("%f", &roster[i].gpa);
        printf("\n");
    }

    FILE *fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("Could not open students.dat for writing!\n");
        return 1;
    }

    fwrite(roster, sizeof(Student), 3, fp);
    fclose(fp);

    printf("Data written to students.dat\n");

    readAndPrint("students.dat");

    return 0;
}
