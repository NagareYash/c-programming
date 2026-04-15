#include <stdio.h>

typedef struct {
    char name[50];
    int  id;
    float salary;
    unsigned int is_admin    : 1;
    unsigned int can_edit    : 1;
    unsigned int can_delete  : 1;
    unsigned int can_approve : 1;
    unsigned int is_active   : 1;
} Employee;

void printPermissions(Employee e) {
    int first = 1;
    printf("  Permissions: ");

    if (e.is_admin)    { if (!first) printf(", "); printf("is_admin");    first = 0; }
    if (e.can_edit)    { if (!first) printf(", "); printf("can_edit");    first = 0; }
    if (e.can_delete)  { if (!first) printf(", "); printf("can_delete");  first = 0; }
    if (e.can_approve) { if (!first) printf(", "); printf("can_approve"); first = 0; }
    if (e.is_active)   { if (!first) printf(", "); printf("is_active");   first = 0; }

    if (first) printf("(none)");
    printf("\n");
}

int main() {
    Employee employees[2];
    int temp;

    for (int i = 0; i < 2; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("is_admin (0/1): ");
        scanf("%d", &temp);
        employees[i].is_admin = temp;

        printf("can_edit (0/1): ");
        scanf("%d", &temp);
        employees[i].can_edit = temp;

        printf("can_delete (0/1): ");
        scanf("%d", &temp);
        employees[i].can_delete = temp;

        printf("can_approve (0/1): ");
        scanf("%d", &temp);
        employees[i].can_approve = temp;

        printf("is_active (0/1): ");
        scanf("%d", &temp);
        employees[i].is_active = temp;

        printf("\n");
    }

    /* Write to binary file */
    FILE *fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Could not open employees.dat for writing!\n");
        return 1;
    }
    fwrite(employees, sizeof(Employee), 2, fp);
    fclose(fp);

    printf("Saved to employees.dat\n\n");

    /* Read back and print */
    Employee loaded[2];
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Could not open employees.dat for reading!\n");
        return 1;
    }
    fread(loaded, sizeof(Employee), 2, fp);
    fclose(fp);

    printf("Reading back from employees.dat:\n\n");
    for (int i = 0; i < 2; i++) {
        printf("Employee %d: %s (ID: %d, Salary: $%.2f)\n",
               i + 1, loaded[i].name, loaded[i].id, loaded[i].salary);
        printPermissions(loaded[i]);
        printf("\n");
    }

    return 0;
}
