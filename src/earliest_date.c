#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int compareDates(Date d1, Date d2) {
    if (d1.year < d2.year) return -1;
    if (d1.year > d2.year) return  1;

    if (d1.month < d2.month) return -1;
    if (d1.month > d2.month) return  1;

    if (d1.day < d2.day) return -1;
    if (d1.day > d2.day) return  1;

    return 0;
}

Date findEarliest(Date dates[], int n) {
    Date earliest = dates[0];
    for (int i = 1; i < n; i++) {
        if (compareDates(dates[i], earliest) < 0) {
            earliest = dates[i];
        }
    }
    return earliest;
}

int main() {
    Date dates[4];

    printf("Enter 4 dates (day month year):\n");
    for (int i = 0; i < 4; i++) {
        printf("Date %d: ", i + 1);
        scanf("%d %d %d", &dates[i].day, &dates[i].month, &dates[i].year);
    }

    Date result = findEarliest(dates, 4);

    printf("\nEarliest date: %d/%d/%d\n", result.day, result.month, result.year);
    return 0;
}