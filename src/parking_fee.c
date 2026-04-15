#include <stdio.h>
#include <time.h>

int main() {
    printf("=== Parking Lot Fee Calculator ===\n\n");

    time_t entry = time(NULL);
    printf("Vehicle entered at: %s\n", ctime(&entry));

    printf("Press Enter when the vehicle exits...");
    getchar();

    time_t exit_time = time(NULL);
    printf("\nVehicle exited at:  %s\n", ctime(&exit_time));

    double seconds = difftime(exit_time, entry);
    double fee = seconds * 0.05;

    printf("Duration: %.2f seconds\n", seconds);
    printf("Fee: $%.2f\n", fee);

    return 0;
}
