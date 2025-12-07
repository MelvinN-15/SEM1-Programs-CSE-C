// Write a Program to Access Array Elements Using Pointers

#include <stdio.h>

int main() {
    
    int num[] = {1,2,3,4,5};
    int n = sizeof(num)/sizeof(int);
    
    int *p=num;
    
    printf("Printing array elements using pointer: \n");
    
    for(int i=0; i<n; i++) {
        printf("%d ",*(p+i));
    }
    
    return 0;
}

/*
OUTPUT:
Printing array elements using pointer: 
1 2 3 4 5 
*/
