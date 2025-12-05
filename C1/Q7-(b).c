// Write a C program to calculate the power of a number using recursion

#include<stdio.h>

int power(int a,int b) {
    if(b==0)
        return 1;
    else
        return (a*power(a,b-1));
}

int main() {
    
    int x,y;
    printf("Enter a number and its power: ");
    scanf("%d %d",&x,&y);
    
    int ans = power(x,y);
    printf("Power of %d raised to %d: %d",x,y,ans);
    
    return 0;
}

/*
OUTPUT:
Enter a number and its power: 8 2
Power of 8 raised to 2: 64
*/
