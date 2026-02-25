#include <stdio.h>

#define TRUE  1
#define FALSE 0
typedef int BOOLEAN;

int main() {
    int num;
    BOOLEAN result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num) {
        result = TRUE;
    } else {
        result = FALSE;
    }

    if (result) {
        printf("%d is nonzero: TRUE\n", num);
    } else {
        printf("%d is nonzero: FALSE\n", num);
    }

    return 0;
}
