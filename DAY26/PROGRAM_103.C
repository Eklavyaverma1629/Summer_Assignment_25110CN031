#include <stdio.h>
#include <stdlib.h>
float balance = 5000.00; 
int pin = 1234;    
void checkBalance();
void cashWithdrawal();
void cashDeposit();
int main() {
    int enteredPin, attempts = 0;
    int choice;
    while (attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);
        if (enteredPin == pin) {
            printf("\nPIN authenticated successfully!\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. You have %d attempt(s) left.\n\n", 3 - attempts);
        }
        if (attempts == 3) {
            printf("Too many incorrect attempts. Your card has been blocked.\n");
            return 0;
        }
    }
    while (1) {
        printf("            ATM MAIN MENU             \n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                cashWithdrawal();
                break;
            case 3:
                cashDeposit();
                break;
            case 4:
                printf("\nThank you for using Bank ATM.\n");
                exit(0);
            default:
                printf("\nInvalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}
void checkBalance() {
    printf("Your current available balance is: $%.2f\n", balance);
}
void cashWithdrawal() {
    float amount;
    printf("ENTER AMOUNT TO WITHDRAW: $");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Invalid input amount. Transaction failed.\n");
    } else if (amount > balance) {
        printf("Insufficient funds! Your balance is only $%.2f\n", balance);
    } else {
        balance -= amount;
        printf("\nPlease collect your cash.\n");
        printf("Successfully withdrawn: $%.2f\n", amount);
        printf("Your new balance is: $%.2f\n", balance);
    }
    printf("\n");
}
void cashDeposit() {
    float amount;
    printf("ENTER AMOUNT TO DEPOSIT: $");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid deposit amount. Transaction failed.\n");
    } else {
        balance += amount;
        printf("\nSuccessfully deposited: $%.2f\n", amount);
        printf("Your new balance is: $%.2f\n", balance);
    }
    printf("--------------------------------------\n");
}
