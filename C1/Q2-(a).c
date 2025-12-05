//Write a C program to store and display the elements of an array

#include<stdio.h>

int main() {
    
    int a[10];
    printf("Enter values for array\n");
    for(int i=0; i<10; i++) {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    
    printf("\nPrinting the array:\n");
    for(int i=0; i<10; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}

/*
OUTPUT:
Enter values for array
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
a[4] = 5
a[5] = 6
a[6] = 7
a[7] = 8
a[8] = 9
a[9] = 10

Printing the array:
1 2 3 4 5 6 7 8 9 10
*/
