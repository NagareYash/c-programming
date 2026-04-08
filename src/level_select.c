#include <stdio.h>

#define LEVEL 2   /* Change this to 1, 2, 3, or anything else and recompile */

int main() {
#if LEVEL == 1
    printf("Level: Beginner\n");
#elif LEVEL == 2
    printf("Level: Intermediate\n");
#elif LEVEL == 3
    printf("Level: Advanced\n");
#else
    printf("Level: Unknown level\n");
#endif

    return 0;
}