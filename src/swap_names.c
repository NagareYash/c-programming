#include <stdio.h>

int main()
{
    char str1[] = "Alice";
    char str2[] = "Bob";
    char str3[] = "Charlie";

    char *names[3];
    names[0] = str1;
    names[1] = str2;
    names[2] = str3;

    printf("Before swap:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, names[i]);
    }

    // Swap first two using a temporary pointer
    char *temp = names[0];
    names[0] = names[1];
    names[1] = temp;

    printf("\nAfter swap:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}