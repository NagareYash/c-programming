#include <stdio.h>

int main() {
    int counter = 0;

    while (1) {
        counter++;
        printf("Counter: %d\n", counter);

        if (counter == 5) {
            break;   // exit loop when counter reaches 5
        }
    }

    printf("Loop exited at counter: %d\n", counter);

    return 0;
}
