#include <stdio.h>
#include <string.h>

typedef union {
    int   i;
    float f;
    char  str[20];
} Variant;

void printAll(Variant v) {
    printf("  As int:   %d\n", v.i);
    printf("  As float: %f\n", v.f);
    printf("  As str:   %s\n", v.str);
}

int main() {
    Variant v;

    v.i = 42;
    printf("After setting int = 42:\n");
    printAll(v);
    printf("\n");

    v.f = 3.14f;
    printf("After setting float = 3.14:\n");
    printAll(v);
    printf("\n");

    strcpy(v.str, "Hello");
    printf("After setting str = \"Hello\":\n");
    printAll(v);

    return 0;
}
