#include <stdio.h>

typedef enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Day;

int main() {
    int input;

    printf("Enter day number (0=Monday, 6=Sunday): ");
    scanf("%d", &input);

    Day d = (Day)input;

    switch (d) {
        case MONDAY:
            printf("MONDAY is a weekday.\n");
            break;
        case TUESDAY:
            printf("TUESDAY is a weekday.\n");
            break;
        case WEDNESDAY:
            printf("WEDNESDAY is a weekday.\n");
            break;
        case THURSDAY:
            printf("THURSDAY is a weekday.\n");
            break;
        case FRIDAY:
            printf("FRIDAY is a weekday.\n");
            break;
        case SATURDAY:
            printf("SATURDAY is a weekend day.\n");
            break;
        case SUNDAY:
            printf("SUNDAY is a weekend day.\n");
            break;
        default:
            printf("Invalid day number!\n");
            break;
    }

    return 0;
}