#include <stdio.h>
#define MAX 10

int countOccurrences(int *arr, int size, int x);

int main() {
    int arr[MAX] = {1, 1, 2, 2, 2, 3, 3, 4, 5, 5};
    int x = 2;
    int count;

    count = countOccurrences(arr, MAX, x);
    printf("Number of occurrences of %d: %d\n", x, count);

    return 0;
}

int countOccurrences(int *arr, int size, int x) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == x)    // pointer arithmetic to access each element
            count++;
    }
    return count;
}
