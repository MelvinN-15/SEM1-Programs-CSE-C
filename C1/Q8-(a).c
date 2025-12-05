// Write a C program that takes a user's input and prints the Fibonacci sequence up to that number

#include<stdio.h>

int fibo(int n) {
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fibo(n-2) + fibo(n-1));
}

int main() {
    
    int num;
    printf("Enter a limit number: ");
    scanf("%d",&num);
    
    for(int i=0; fibo(i)<=num; i++) {
        printf("%d ",fibo(i));
    }
    
    return 0;
}

/*
OUTPUT:
Enter a limit number: 25
0 1 1 2 3 5 8 13 21
*/
