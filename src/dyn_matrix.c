#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 3;

    int *matrix = (int *)calloc(rows * cols, sizeof(int));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter values for a 3x3 matrix (9 integers):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i * cols + j]);
        }
    }

    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d  ", matrix[i * cols + j]);
        }
        printf("\n");
    }

    free(matrix);
    return 0;
}