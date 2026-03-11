#include <stdio.h>
#define ROWS 3
#define COLS 3

void printMatrix(int arr[][COLS], int rows);
void rowSums(int arr[][COLS], int rows);
void colSums(int arr[][COLS], int rows);

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};

    printf("Matrix:\n");
    printMatrix(arr, ROWS);

    printf("\nRow Sums:\n");
    rowSums(arr, ROWS);

    printf("\nColumn Sums:\n");
    colSums(arr, ROWS);

    return 0;
}

void printMatrix(int arr[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d  ", *(arr[i] + j));
        }
        printf("\n");
    }
}

void rowSums(int arr[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < COLS; j++) {
            sum += *(arr[i] + j);       // pointer notation — access row i, col j
        }
        printf("Row %d sum: %d\n", i, sum);
    }
}

void colSums(int arr[][COLS], int rows) {
    for (int j = 0; j < COLS; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += *(arr[i] + j);       // pointer notation — access row i, col j
        }
        printf("Col %d sum: %d\n", j, sum);
    }
}
