// Write a C program that prints the sum of the first 20 odd numbers

#include<stdio.h>

int main() {
    
    int sum=0;
    int c=0;
    
    for(int i=0; c<20; i++) {
        if(i%2==1) {
            sum+=i;
            c++;
        }
    }

    printf("Sum of first 20 odd numbers: %d",sum);
    return 0;
}

/*
OUTPUT:
Sum of first 20 odd numbers: 400
*/
