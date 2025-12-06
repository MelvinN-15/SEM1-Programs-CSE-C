// Write a Program to print the count of even numbers between 1 and 200.Also print their sum

#include<stdio.h>

int main() {
    
    int sum=0;
    int c=0;
    
    for(int i=1; i<=200; i++) {
        if(i%2==0) {
            sum+=i;
            c++;
        }
    }

    printf("Sum of even numbers from 1 to 200: %d\n",sum);
    printf("Count of even numbers from 1 to 200: %d\n",c);
    return 0;
}


/*
OUTPUT:
Sum of even numbers from 1 to 200: 10100
Count of even numbers from 1 to 200: 100

*/
