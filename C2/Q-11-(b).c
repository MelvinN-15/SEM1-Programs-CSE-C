// Write a program to insert a number in an array that is already sorted in ascending order

#include <stdio.h>

int main() {
    
    int arr[10] = {1,2,3,5,6};
    int x,a,t;
    
    printf("Enter a number to insert: ");
    scanf("%d",&x);
    
    int n = 5;
    t = n;
    
    for(int i=0; i<n;i++) {
        if(arr[i]>x) {
            t=i;
            break;
        }
    }
    
    for(int i=n-1; i>=t; i--) {
        arr[i+1] = arr[i];
    }
    arr[t] = x;
    
    printf("Printing new array: ");
    
    n++;
    
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

/*
OUTPUT:
Enter a number to insert: 4
Printing new array: 1 2 3 4 5 6
*/
