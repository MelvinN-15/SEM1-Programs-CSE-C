// Write a c program to Swap Two Numbers using call by Value Method

#include<stdio.h>

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("\nValue of A after swapping: %d",a);
    printf("\nValue of B after swapping: %d",b);
}

int main() {
    int a,b;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}

/*
OUTPUT:
Enter the value of A: 12
Enter the value of B: 34

Value of A after swapping: 34
Value of B after swapping: 12
*/
