// Write a C program to find the maximum element in an array using pointers

#include<stdio.h>

int main() {
        
    int a[10];
    int max;
    
    printf("Enter the elements of the array:\n");
    for(int i=0; i<10; i++) {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    
    max = *a;
    
    for(int i=0; i<10; i++) {
        if(*(a+i)>max) {
            max = *(a+i);
        }
    }
    
    printf("Maximum value in array: %d",max);
    
    return 0;
}

/*
OUTPUT:
Enter the elements of the array:
a[0]: 10
a[1]: 20
a[2]: 30
a[3]: 40
a[4]: 50
a[5]: 60
a[6]: 70
a[7]: 80
a[8]: 90
a[9]: 100
Maximum value in array: 100
*/
