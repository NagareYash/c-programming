#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[3], i;
    
    printf("Enter the first number between 1 and 9: ");
    scanf("%d", &num[0]);
    printf("Enter a second number also between 1 and 9: ");
    scanf("%d", &num[1]);
    printf("Enter the third number also between 1 and 9: ");
    scanf("%d", &num[2]);
    
    for(i = 0; i < 3; i++)
    {
        printf("\nNumber %d (%d):\n", i+1, num[i]);
        if(num[i] > 1)  printf("  - Is greater than 1\n");
        if(num[i] < 9)  printf("  - Is less than 9\n");
        if(num[i] == 1) printf("  - Is equal to 1\n");
        if(num[i] == 9) printf("  - Is equal to 9\n");
    }

    return 0;
}
