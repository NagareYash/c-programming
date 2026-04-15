#include <stdio.h>

typedef struct {
    char name[50];
    int  account_number;
    float balance;
} BankAccount;

void deposit(BankAccount *acc, float amount) {
    acc->balance += amount;
}

void withdraw(BankAccount *acc, float amount) {
    if (amount > acc->balance) {
        printf("Error: Insufficient funds!\n");
        return;
    }
    acc->balance -= amount;
}

int main() {
    BankAccount acc = {
        .name = "Alice",
        .account_number = 10001,
        .balance = 1000.00f
    };

    printf("Account: %s (#%d)\n", acc.name, acc.account_number);
    printf("Initial Balance: $%.2f\n\n", acc.balance);

    printf("Depositing $500.00...\n");
    deposit(&acc, 500.00f);
    printf("New Balance: $%.2f\n\n", acc.balance);

    printf("Withdrawing $300.00...\n");
    withdraw(&acc, 300.00f);
    printf("New Balance: $%.2f\n\n", acc.balance);

    printf("Withdrawing $5000.00...\n");
    withdraw(&acc, 5000.00f);
    printf("Current Balance: $%.2f\n", acc.balance);

    return 0;
}