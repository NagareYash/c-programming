#include <stdio.h>
#define ROWS 3
#define COLS 3

int sumMatrix(int arr[][COLS], int rows);
void printMatrix(int arr[][COLS], int rows);

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};

    printf("Matrix:\n");
    printMatrix(arr, ROWS);

    printf("Total sum: %d\n", sumMatrix(arr, ROWS));

    return 0;
}

void printMatrix(int arr[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}

int sumMatrix(int arr[][COLS], int rows) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += *((arr[i] + j));
        }
    }
    return sum;
}
