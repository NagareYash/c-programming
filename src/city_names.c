#include <stdio.h>
#include <string.h>

int main()
{
    char cities[5][50];
    char *ptr[5];

    printf("Enter 5 city names:\n");
    for (int i = 0; i < 5; i++)
    {
        fgets(cities[i], 50, stdin);
        // Remove trailing newline that fgets keeps
        cities[i][strcspn(cities[i], "\n")] = '\0';
        ptr[i] = cities[i];
    }

    printf("\nCities entered:\n");
    for (int i = 0; i < 5; i++)
    {
        puts(ptr[i]);
    }

    return 0;
}