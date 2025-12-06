// Write a program to print the multiplication table

#include<stdio.h>

int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("\nMultiplication Table for %d\n",n);
    
    for(int i=1; i<=10; i++) {
        printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
}


/*
OUTPUT:
Enter a number: 2

Multiplication Table for 2
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
*/
