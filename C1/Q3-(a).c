//Write a C program to calculate the simple interest

#include<stdio.h>

int main() {
    
    int p,r,t;
    float si;
    printf("Enter the principal: ");
    scanf("%d",&p);
    printf("Enter the rate of interest: ");
    scanf("%d",&r);
    printf("Enter the time period: ");
    scanf("%d",&t);
    
    si=(p*r*t)/100;
    
    printf("\nSimple Interest: %.2f",si);
    
    return 0;
}

/*
OUTPUT:
Enter the principal: 5000
Enter the rate of interest: 5
Enter the time period: 2

Simple Interest: 500.00
*/
