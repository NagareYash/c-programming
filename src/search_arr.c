#include <stdio.h>
#define ROWS 3
#define COLS 3

void searchElement(int arr[][COLS], int rows, int key);

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};
    int key;

    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d  ", *(arr[i] + j));     // pointer notation
        }
        printf("\n");
    }

    printf("\nEnter value to search: ");
    scanf("%d", &key);

    searchElement(arr, ROWS, key);

    return 0;
}

void searchElement(int arr[][COLS], int rows, int key) {
    int found = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            if (*(arr[i] + j) == key) {        // pointer notation to access element
                printf("Found %d at Row: %d, Column: %d\n", key, i, j);
                found = 1;
            }
        }
    }

    if (!found)
        printf("%d not found in the matrix.\n", key);
}
