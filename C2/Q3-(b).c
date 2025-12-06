// Write a Program to Print reverse  of a number

#include<stdio.h>

int main() {
    
    int n1,n2=0;
    printf("Enter a number: ");
    scanf("%d",&n1);
    
    while(n1!=0) {
        n2 = (n2*10) + (n1%10);
        n1/=10;
    }
    
    printf("Reversed number: %d",n2);
    return 0;
}

/*
OUTPUT:
Enter a number: 1234
Reversed number: 4321
*/
