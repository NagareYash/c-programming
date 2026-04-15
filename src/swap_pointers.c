#include <stdio.h>

void swapPointers(int **a, int **b) {
    int *tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 10, y = 20;
    int *p = &x;
    int *q = &y;

    printf("Before swap:\n");
    printf("p -> address: %ld, value: %d\n", (long)p, *p);
    printf("q -> address: %ld, value: %d\n", (long)q, *q);

    swapPointers(&p, &q);

    printf("\nAfter swap:\n");
    printf("p -> address: %ld, value: %d\n", (long)p, *p);
    printf("q -> address: %ld, value: %d\n", (long)q, *q);

    return 0;
}