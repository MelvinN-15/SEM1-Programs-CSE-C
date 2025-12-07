// Write a program to find biggest of three integers using functions


#include <stdio.h>

int big(int a,int b,int c) {
    
    if(a>=b && a>=c)
        return a;
    if(b>=a && b>=c)
        return b;
    if(c>=a && c>=b)
        return c;
}

int main() {
    
    int x,y,z;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    
    int max = big(x,y,z);
    
    printf("The biggest of the three numbers is %d",max);
    
    return 0;
}

/*
OUTPUT:
Enter three numbers: 10 20 30
The biggest of the three numbers is 30
*/
