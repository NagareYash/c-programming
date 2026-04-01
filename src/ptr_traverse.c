#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int *p = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("Address: %ld, Value: %d\n", (long)(p + i), *(p + i));
    }

    return 0;
}