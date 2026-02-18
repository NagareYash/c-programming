#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fp;
    printf("Enter a floating point number: ");
    scanf("%f", &fp);

    // 1. 2 decimal places
    printf("2 decimal places: %.2f\n", fp);

    // 2. Right-aligned in a 10-character space
    printf("Right-aligned (10 chars): %10.2f\n", fp);

    // 3. Left-aligned with visible sign
    printf("Left-aligned with sign: %-+10.2f\n", fp);

    return 0;
}
