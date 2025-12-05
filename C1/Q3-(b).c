//Write a C program to demonstrate pointer arithmetic operations

//I have written a program to find addition of two numbers using pointer arithmetic operations

#include<stdio.h>

int main() {
    
    int a,b;
    int *p=&a;
    int *q=&b;
    
    printf("Enter value of a: ");
    scanf("%d",p);
    printf("Enter the value of b: ");
    scanf("%d",q);
    
    int sum = *p + *q;
    
    printf("Sum of a and b using pointers: %d",sum);
    
    return 0;
}

/*
OUTPUT:
Enter value of a: 10
Enter the value of b: 12
Sum of a and b using pointers: 22
*/
