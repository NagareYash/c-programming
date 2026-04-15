#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;

float distance(Point p1, Point p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1, p2, p3;

    printf("Enter Point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter Point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    printf("Enter Point 3 (x y): ");
    scanf("%f %f", &p3.x, &p3.y);

    printf("\nDistance P1 to P2: %.2f\n", distance(p1, p2));
    printf("Distance P2 to P3: %.2f\n", distance(p2, p3));
    printf("Distance P1 to P3: %.2f\n", distance(p1, p3));

    return 0;
}