#include <stdio.h>

typedef enum { RED, YELLOW, GREEN } TrafficLight;

void printLight(TrafficLight light) {
    switch (light) {
        case RED:    printf("RED");    break;
        case YELLOW: printf("YELLOW"); break;
        case GREEN:  printf("GREEN");  break;
    }
}

void nextLight(TrafficLight *current) {
    switch (*current) {
        case RED:    *current = GREEN;  break;
        case GREEN:  *current = YELLOW; break;
        case YELLOW: *current = RED;    break;
    }
}

int main() {
    TrafficLight light = RED;

    printf("Current: ");
    printLight(light);
    printf("\n");

    for (int i = 0; i < 5; i++) {
        nextLight(&light);
        printf("After change: ");
        printLight(light);
        printf("\n");
    }

    return 0;
}