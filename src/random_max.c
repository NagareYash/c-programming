#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int numbers[10];

    printf("Generated numbers: ");
    for (int i = 0; i < 10; i++) {
        numbers[i] = (rand() % 100) + 1;
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int max = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Largest number: %d\n", max);
    return 0;
}