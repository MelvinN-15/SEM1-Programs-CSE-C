// Create a C program to store and display transaction records (date, amount, description) in sequential file

#include <stdio.h>

struct Transaction {
    char date[15];        
    float amount;
    char description[100];
};


void input_transaction_text(FILE *fp);
void display_transactions_text(FILE *fp);

int main() {

    FILE *fp;
    fp = fopen("transactions.txt", "a+");

    if (fp == NULL) {
        fprintf(stdout,"Error opening file 'transactions.txt'\n");
        return 1;
    }

    int choice;

    while (1) {
        printf("\n--- Transaction Menu ---\n");
        printf("1. Add a new transaction\n");
        printf("2. View all transactions\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        while (getchar() != '\n'); // Clear input buffer

        switch (choice) {
            case 1:
                input_transaction_text(fp);
                break;
            case 2:
                display_transactions_text(fp);
                break;
            case 3:
                fclose(fp);
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to get input from the user and write to the text file using fprintf
void input_transaction_text(FILE *fp) {
    struct Transaction t;

    printf("\nEnter date (DD-MM-YYYY): ");
    scanf("%[^\n]",t.date);
    
    printf("Enter amount: ");
    scanf("%f", &t.amount);
    
    while (getchar() != '\n'); // Clear buffer

    printf("Enter description: ");
    scanf("%[^\n]",t.description);
    
    fprintf(fp, "%s, %.2f, %s\n", t.date, t.amount, t.description);
    printf("Transaction recorded successfully!\n");
}

void display_transactions_text(FILE *fp) {
    struct Transaction t;

    rewind(fp); // Move pointer to start

    printf("\n--- All Recorded Transactions ---\n");
    printf("%-12s %-10s %-50s\n", "Date", "Amount", "Description");
    printf("------------------------------------------------------------------\n");

    while (fscanf(fp, "%[^,], %f, %[^\n]\n", t.date, &t.amount, t.description) == 3) {
        printf("%-12s Rs:%-9.2f %-50s\n", t.date, t.amount, t.description);
    }

    printf("------------------------------------------------------------------\n");
}
