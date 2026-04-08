#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a line of text: ");
    scanf("%[A-Za-z]", str);

    printf("Filtered text: %s\n", str);
    return 0;
}