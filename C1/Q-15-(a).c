// Write a C program to perform transpose a matrix

// Write a C program to perform transpose a matrix

#include <stdio.h>

int main() {
    
    int a,b;
    
    printf("Enter the order of matrix A (aXb): ");
    scanf("%dX%d",&a,&b);
    
    int A[a][b];
    int AT[b][a];
    
    printf("Enter values of matrix A:\n");
    for(int i=0; i<a; i++) {
        for(int j=0; j<b; j++) {
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("The transpose of matrix A: \n");
    
    for(int i=0; i<b; i++) {
        for(int j=0; j<a; j++) {
            
            AT[i][j] = A[j][i];
            printf("%4d",AT[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:
Enter the order of matrix A (aXb): 2X3
Enter values of matrix A:
A[0][0]: 1
A[0][1]: 2
A[0][2]: 3
A[1][0]: 4
A[1][1]: 5
A[1][2]: 6
The transpose of matrix A: 
   1   4
   2   5
   3   6
*/
