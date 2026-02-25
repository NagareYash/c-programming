#include <stdio.h>

// Function Prototypes
void deposit(float *balance, float amount);
void withdraw(float *balance, float amount);
void checkBalance(float balance);

int main() {
    float balance = 1000.00;
    float amount;
    int choice;

    while (1) {
        printf("\n===== Bank Menu =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                deposit(&balance, amount);
                break;
            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                withdraw(&balance, amount);
                break;
            case 3:
                checkBalance(balance);
                break;
            case 4:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}

// Function Definitions
void deposit(float *balance, float amount) {
    *balance += amount;
    printf("Deposit successful!\n");
    printf("Current Balance: $%.2f\n", *balance);
}

void withdraw(float *balance, float amount) {
    if (amount > *balance) {
        printf("Error: Insufficient funds!\n");
    } else {
        *balance -= amount;
        printf("Withdrawal successful!\n");
    }
    printf("Current Balance: $%.2f\n", *balance);
}

void checkBalance(float balance) {
    printf("Current Balance: $%.2f\n", balance);
}
