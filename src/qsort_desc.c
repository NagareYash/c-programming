#include <stdio.h>
#include <stdlib.h>

int compare_desc(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x > y)
        return -1;
    if (x < y)
        return 1;
    return 0;
}

int main()
{
    int arr[] = {22, 674, 99, 11, 32, 101};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    qsort(arr, n, sizeof(arr[0]), compare_desc);

    printf("After sorting:  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}