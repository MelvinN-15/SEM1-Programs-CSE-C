// Write a function that receives an array and its size, and returns the second largest element

#include<stdio.h>
#include<limits.h>

int secmax(int arr[],int size) {
    int max=INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    for(int i=0; i<size; i++) {
        if(arr[i] > smax && arr[i] < max) {
            smax = arr[i];
        }
    }
    
    return smax;
}

int main() {
    
    int arr[5];
    int size;
    
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    printf("Enter the values of array:\n");
    for(int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    
    int secondmax = secmax(arr,size);
    printf("\nSecond Maximum value in array: %d",secondmax);

    return 0;
}

/*
OUTPUT:
Enter the size of array: 5
Enter the values of array:
10 20 30 100 90

Second Maximum value in array: 90
*/

