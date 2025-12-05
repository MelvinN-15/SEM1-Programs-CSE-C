// Write a C program with functions to manage a bank account, including deposit, withdrawal, and balance inquiry

#include<stdio.h>

struct bank {
    int balance;
    int arr[10];
}acc;

void addmem(int amt) {
    for(int i=0; i<9; i++) {
        acc.arr[i] = acc.arr[i+1];
    }
    acc.arr[9] = 0;
    acc.arr[9] = amt;
}

void deposit(int amt) {
    acc.balance += amt;
    addmem(amt);
}

void withdraw(int amt) {
    acc.balance -= amt;
    addmem(-amt);
}

void inquiry() {
    printf("Balance amount: %d\n",acc.balance);
    for(int i=0; i<10; i++) {
        if(acc.arr[i]<0)
            printf("Debited: %d\n",acc.arr[i]);
        else if(acc.arr[i]>0)
            printf("Credited: %d\n",acc.arr[i]);
    }
}

int main() {

    int choice;
    int amt;
    
    acc.balance=0;
    
    do
    {
        printf("\n\n- - - MENU - - -\n");
        printf("1. Deposit\n");
        printf("2. Withdrawal\n");
        printf("3. Bank inquiry\n");
        printf("4. Exit\n");
        printf("Enter your choice (1/2/3/4): ");
        scanf("%d",&choice);
        
        switch(choice) {
            case 1:
                printf("\nDeposit\n");
                printf("Enter the amount to deposit: ");
                scanf("%d",&amt);
                deposit(amt);
		printf("Amount deposited successfully!\n-----------------------------");
                break;
            case 2:
                printf("\nWithdrawal\n");
                printf("Enter the amount to withdraw: ");
                scanf("%d",&amt);
                withdraw(amt);
		printf("Amount withdrawn successfully!\n-----------------------------");
                break;
            case 3:
                printf("\nBank Inquiry\n");
                inquiry();
                break;
            case 4:
                printf("\nExiting program\n-----------------------------\n");
                return 0;
            default:
                printf("Wrong choice entered. Please enter right choice!\n");
        }
    }
    while(1);
    
    return 0;
}

/*
OUTPUT:


- - - MENU - - -
1. Deposit
2. Withdrawal
3. Bank inquiry
4. Exit
Enter your choice (1/2/3/4): 1

Deposit
Enter the amount to deposit: 100
Amount deposited successfully!
-----------------------------

- - - MENU - - -
1. Deposit
2. Withdrawal
3. Bank inquiry
4. Exit
Enter your choice (1/2/3/4): 2

Withdrawal
Enter the amount to withdraw: 50
Amount withdrawn successfully!
-----------------------------

- - - MENU - - -
1. Deposit
2. Withdrawal
3. Bank inquiry
4. Exit
Enter your choice (1/2/3/4): 3

Bank Inquiry
Balance amount: 50
Debited: 100
Credited: -50


- - - MENU - - -
1. Deposit
2. Withdrawal
3. Bank inquiry
4. Exit
Enter your choice (1/2/3/4): 4

Exiting program
-----------------------------
*/
