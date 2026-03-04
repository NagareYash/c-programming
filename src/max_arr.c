#include <stdio.h>
#define MAX 9

int findMax(int *arr, int size);

int main() {
    int arr[MAX] = {3, 5, 89, 8, 72, 9, 2, 34, 29};
    int max;

    max = findMax(arr, MAX);
    printf("Maximum element in array: %d\n", max);

    return 0;
}

int findMax(int *arr, int size) {
    int max = *arr;               // assume first element is max
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max)     // pointer arithmetic to access each element
            max = *(arr + i);     // update max if larger element found
    }
    return max;
}
