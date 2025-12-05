//Write a C program with a function to check if a given number is prime or not.

#include<stdio.h>

int isprime(int n) {
    int c=0;
    for(int i=1; i<n+1; i++) {
        if(n%i==0)
            c++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}

int main() {
    
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    if(isprime(number)) {
        printf("\n%d is a prime number",number);
    }else{
        printf("\n%d is not a prime number",number);
    }
    
    return 0;
}

/*
OUTPUT:
Enter number: 13
13 is a prime number
*/
