//Write a c program to Swap Two Numbers using call by Reference Method

#include<stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    
    swap(&a,&b);
    
    printf("\nValue after swapping:");
    printf("\nValue of a: %d",a);
    printf("\nValue of b: %d",b);
    
    return 0;
}

/*
OUTPUT:
Enter value of a: 12
Enter value of b: 21

Value after swapping:
Value of a: 21
Value of b: 12
*/
