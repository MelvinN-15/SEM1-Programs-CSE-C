// Write a Program to find the Sum of all Elements in 3D array

#include <stdio.h>

int main() {
    
    int a=1,b=5,c=5;
    int arr[1][5][5] = { { {1,2,3,4,5}  ,  {1,2,3,4,5}  ,  {1,2,3,4,5}  ,  {1,2,3,4,5}  ,  {1,2,3,4,5} } };
    
    int sum=0;
    
    for(int i=0; i<a; i++) {
        for(int j=0; j<b; j++) {
           for(int k=0; k<c; k++) {
                sum+=arr[i][j][k];
            }
        }
    }
    
    printf("Sum of 3D array elements: %d",sum);

    return 0;
}

/*
OUTPUT:
Sum of 3D array elements: 75
*/
