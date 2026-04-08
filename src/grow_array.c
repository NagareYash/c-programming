#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter 3 integers: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array now has 3 elements: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    printf("Growing array to 6 elements...\n");
    int *temp = (int *)realloc(arr, 6 * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed!\n");
        free(arr);
        return 1;
    }
    arr = temp;

    printf("Enter 3 more integers: ");
    for (int i = 3; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array now has 6 elements: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}