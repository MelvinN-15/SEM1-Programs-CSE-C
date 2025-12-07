// Using a union, store either date (dd, mm, yyyy) or time (hh, mm, ss) and display based on user choice.

#include <stdio.h>

struct date {
    int dd;
    int mm;
    int yyyy;
};

struct time {
    int hh;
    int mm;
    int ss;
};


int main() {

    union{
        struct date DATE;
        struct time TIME;
    }u1;
    
    char ch;
    printf("Do you want to enter date(D) or time(T): ");
    scanf("%s",&ch);
    
    if(ch=='D') {
        printf("\nEnter the day: ");
        scanf("%d",&u1.DATE.dd);
        printf("Enter the month: ");
        scanf("%d",&u1.DATE.mm);
        printf("Enter the year: ");
        scanf("%d",&u1.DATE.yyyy);
        
        printf("\nThe entered date is: %d/%d/%d",u1.DATE.dd,u1.DATE.mm,u1.DATE.yyyy);
        
    }else if(ch=='T') {
        printf("\nEnter the hours: ");
        scanf("%d",&u1.TIME.hh);
        printf("Enter the minutes: ");
        scanf("%d",&u1.TIME.mm);
        printf("Enter the seconds: ");
        scanf("%d",&u1.TIME.ss);
        
        printf("\nThe entered time is: %d:%d:%d",u1.TIME.hh,u1.TIME.mm,u1.TIME.ss);
    }

    return 0;
}

/*
OUTPUT:
Do you want to enter date(D) or time(T): D

Enter the day: 1
Enter the month: 1
Enter the year: 2025

The entered date is: 1/1/2025
*/
