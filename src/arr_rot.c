#include <stdio.h> 
#define MAX 5

// function prototypes
void rotateLeft(int *arr, int size, int k);
void printArray(int *arr, int size);

int main() {

    int arr[MAX] = {1, 2, 3, 4, 5};
    int k = 2;       

    printf("Before rotation: ");
    printArray(arr, MAX);

    rotateLeft(arr, MAX, k);

    printf("After rotating left by %d: ", k);
    printArray(arr, MAX);

    return 0;
}


// function that rotates the array to the left
void rotateLeft(int *arr, int size, int k) {

    // repeat the rotation process k times
    for (int i = 0; i < k; i++) {

        int tmp = *arr;   // store first element of array (arr[0]) in tmp

        // shift all elements one position to the left
        for (int j = 0; j < size - 1; j++) {

            // *(arr + j) is same as arr[j]
            // *(arr + j + 1) is same as arr[j+1]
            *(arr + j) = *(arr + j + 1);   // move next element into current position
        }

        // place the saved first element at the last position
        *(arr + size - 1) = tmp;   // arr[size-1] = tmp
    }
}


// function to print array elements
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        // *(arr + i) is same as arr[i]
        printf("%d ", *(arr + i));   // print each element
    }
    printf("\n");
}