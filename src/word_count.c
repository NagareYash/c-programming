#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[256];
    int count = 0;
    int in_word = 0;

    printf("Enter a line of text: ");
    fgets(str, 256, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace((unsigned char)str[i])) {
            if (in_word == 0) {
                count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    printf("Number of words: %d\n", count);
    return 0;
}