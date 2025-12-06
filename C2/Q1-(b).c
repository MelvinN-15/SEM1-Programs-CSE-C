// Write a Program to calculate simple interest and compound interest
//Similar to Simple interest program in C1 Q3-(a).c

#include <stdio.h>
#include <math.h>

int main() {
    

    printf("\nSimple Interest\n");
    
    int p;
    float r,SI,t;
    printf("Enter the principal: ");
    scanf("%d",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time period: ");
    scanf("%f",&t);
    
    SI=(p*r*t)/100;
    
    printf("\nSimple Interest: %.2f",SI);

    printf("\n---------------------------------");
    
    printf("\nCompound Interest\n");
    float A,P,R,CI;
    int n;
    
    printf("Enter the Principal amount: ");
    scanf("%f",&P);
    printf("Enter the rate of interest: ");
    scanf("%f",&R);
    printf("Enter the number of years it is compounded: ");
    scanf("%f",&t);
    printf("Enter the number of times it is compounded in a year: ");
    scanf("%d",&n);
    
    r = R/100;
    A = P*pow(1+(r/n),n*t);
    CI = A - P;
    
    printf("\nCompound Interest: %.2f",CI);
    return 0;
}


/*
OUTPUT:
Simple Interest
Enter the principal: 2000
Enter the rate of interest: 10
Enter the time period: 1

Simple Interest: 200.00
---------------------------------
Compound Interest
Enter the Principal amount: 2000
Enter the rate of interest: 10
Enter the number of years it is compounded: 1.5
Enter the number of times it is compounded in a year: 2
*/
