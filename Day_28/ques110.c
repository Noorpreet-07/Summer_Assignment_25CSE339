#include <stdio.h>

struct Account 
{
    int accNo;
    char name[50];
    float balance;
};

struct Account a;
 

void createAccount() 
{
    printf("\nEnter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    printf("Account Created Successfully!\n");
}


void deposit() 
{
    float amt;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amt);

    a.balance += amt;
    printf("Amount Deposited!\n");
}


void withdraw() 
{
    float amt;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amt);

    if(amt <= a.balance) 
    {
        a.balance -= amt;
        printf("Withdrawal Successful!\n");
    } 
    else 
    {
        printf("Insufficient Balance!\n");
    }
}


void checkBalance() 
{
    printf("\nAccount No: %d", a.accNo);
    printf("\nName: %s", a.name);
    printf("\nBalance: %.2f\n", a.balance);
}


int main() 
{
    int choice;

    while(1) 
    {
        printf("\n--- Bank Menu ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}