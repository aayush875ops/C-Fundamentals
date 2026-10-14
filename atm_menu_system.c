#include <stdio.h>

int main() {
    int balance = 5000;
    int amount;
    int choice = 0;

    while (choice != 4) {
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter the choice\n");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Choice is wrong. Input choice between 1 to 4\n");
        }
        else if (choice == 1) {
            printf("Balance = %d\n", balance);
        }
        else if (choice == 2) {
            printf("Enter deposit amount: ");
            scanf("%d", &amount);
            
            if (amount <= 0) {
                printf("Deposit failed. Amount must be greater than zero.\n");
            } else {
                balance += amount;
                printf("Deposit successful. Total Balance = %d\n", balance);
            }
        }
        else if (choice == 3) {
            printf("Enter withdrawal amount: ");
            scanf("%d", &amount);

            if (amount <= 0) {
                printf("Withdrawal failed. Amount must be positive.\n");
            } 
            else if (amount > balance) {
                printf("Withdrawal failed. Amount cannot be greater than balance\n");
            } 
            else {
                balance -= amount;
                printf("Withdrawal successful. Total Balance = %d\n", balance);
            }
        }
        else if (choice == 4) {
            printf("Thank you\n");
        }
    }

    return 0;
}