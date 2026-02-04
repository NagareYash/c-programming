#include <stdio.h>

int main() {
    int rows = 5;
    
    printf("Printing star pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
