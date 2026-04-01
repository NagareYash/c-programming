#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[256];
    int alpha = 0, digits = 0, spaces = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    char *p = str;
    while (*p != '\0')
    {
        if (isalpha(*p))
        {
            alpha++;
        }
        else if (isdigit(*p))
        {
            digits++;
        }
        else if (isspace(*p))
        {
            spaces++;
        }
        p++;
    }

    printf("Alphabetic: %d\n", alpha);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}