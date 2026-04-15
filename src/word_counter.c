#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("notes.txt", "r");
    if (fp == NULL) {
        printf("Could not open notes.txt!\n");
        return 1;
    }

    char line[256];
    int total_words = 0;

    while (fgets(line, sizeof(line), fp) != NULL) {
        int in_word = 0;
        for (int i = 0; line[i] != '\0'; i++) {
            if (!isspace((unsigned char)line[i])) {
                if (in_word == 0) {
                    total_words++;
                    in_word = 1;
                }
            } else {
                in_word = 0;
            }
        }
    }

    fclose(fp);

    printf("File: notes.txt\n");
    printf("Total words: %d\n", total_words);

    return 0;
}
