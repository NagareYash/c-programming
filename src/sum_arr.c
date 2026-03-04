#include <stdio.h>
#define MAX 8

int computeSum(int *arr, int size);

int main() {
    int arr[MAX] = {3, 5, 8, 7, 9, 2, 34, 29};
    int sum;

    sum = computeSum(arr, MAX);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}

int computeSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);    // pointer arithmetic to access each element
    }
    return sum;
}
