// Write a C program that prints the factorial of a given number

#include <stdio.h>

int main() {
    
    int fact=1;
    int n;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++) {
        fact*=i;
    }
    
    printf("Factorial of %d is %d",n,fact);
    return 0;
}

/*
OUTPUT:
Enter a number: 4
Factorial of 4 is 24
*/
