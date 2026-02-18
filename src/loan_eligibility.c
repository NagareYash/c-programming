#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, income, fico;
    char okay;

    printf("Enter the following:\n");
    printf("Person's age: ");
    scanf("%d", &age);

    printf("Person's income: ");
    scanf("%d", &income);

    printf("Person's FICO score: ");
    scanf("%d", &fico);

    if (age >= 21 && income > 10000 && fico >= 700) {
        printf("Person is eligible for a loan\n");
    }
    else if (age >= 21 && fico >= 700 && income <= 10000) {
        printf("Income is low. Can someone co-sign the loan? Enter y or n: ");
        // note the space before %c to eat the leftover newline
        scanf(" %c", &okay);

        if (okay == 'y' || okay == 'Y')
            printf("Person is eligible for a loan with a co-signer\n");
        else
            printf("Person is ineligible for a loan\n");
    }
    else {
        printf("Person is ineligible for a loan\n");
    }

    return 0;
}
