#include <stdio.h>

// #define DEBUG   /* Comment this line out to disable debug mode */

int main() {
    int x = 10;

#ifdef DEBUG
    printf("DEBUG mode: ON\n");
    printf("DEBUG: Initial value of x = %d\n", x);
#else
    printf("DEBUG mode: OFF\n");
#endif

    x++;

#ifdef DEBUG
    printf("DEBUG: After increment, x = %d\n", x);
#endif

    printf("Final value: %d\n", x);
    return 0;
}