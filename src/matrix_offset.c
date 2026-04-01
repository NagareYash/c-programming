#include <stdio.h>

void fillOffsets(int *arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            *(arr + i * cols + j) = i * cols + j;
        }
    }
}

int main()
{
    int A[3][3];

    fillOffsets(&A[0][0], 3, 3);

    printf("Matrix filled with element offsets:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}