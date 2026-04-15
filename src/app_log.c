#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    time_t timestamp;
    char message[100];
} LogEntry;

int main() {
    const char *messages[3] = {
        "Application started",
        "User logged in",
        "Database connected"
    };

    /* Append 3 new log entries */
    FILE *fp = fopen("app.log", "ab");
    if (fp == NULL) {
        printf("Could not open app.log for appending!\n");
        return 1;
    }

    printf("Writing 3 log entries...\n");
    for (int i = 0; i < 3; i++) {
        LogEntry entry;
        entry.timestamp = time(NULL);
        strcpy(entry.message, messages[i]);
        fwrite(&entry, sizeof(LogEntry), 1, fp);
    }
    fclose(fp);
    printf("Done.\n\n");

    /* Read all existing entries */
    fp = fopen("app.log", "rb");
    if (fp == NULL) {
        printf("Could not open app.log for reading!\n");
        return 1;
    }

    printf("Reading all log entries:\n");
    LogEntry entry;
    while (fread(&entry, sizeof(LogEntry), 1, fp) == 1) {
        /* ctime returns a string ending with newline; trim it with %.*s width 24 */
        printf("[%.*s] %s\n", 24, ctime(&entry.timestamp), entry.message);
    }

    fclose(fp);
    return 0;
}
