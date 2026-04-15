#include <stdio.h>

int main() {
    const char *messages[5] = {
        "C programming is powerful.",
        "Pointers can be tricky at first.",
        "Structures bundle related data.",
        "File I/O makes data persistent.",
        "Practice is the key to mastery."
    };

    /* Write to the file */
    FILE *fp = fopen("notes.txt", "w");
    if (fp == NULL) {
        printf("Could not open notes.txt for writing!\n");
        return 1;
    }

    printf("Writing to notes.txt...\n");
    for (int i = 0; i < 5; i++) {
        fprintf(fp, "Line %d: %s\n", i + 1, messages[i]);
    }
    fclose(fp);
    printf("Done writing.\n\n");

    /* Read it back */
    fp = fopen("notes.txt", "r");
    if (fp == NULL) {
        printf("Could not open notes.txt for reading!\n");
        return 1;
    }

    printf("Reading from notes.txt:\n");
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
