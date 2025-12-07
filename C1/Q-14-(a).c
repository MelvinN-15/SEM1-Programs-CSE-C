// Write a C program to perform matrix multiplication

#include <stdio.h>

int main() {
    
    int a,b,c,d;
    
    printf("Enter the order of matrix A (aXb): ");
    scanf("%dX%d",&a,&b);
    
    printf("Enter the order of matrix B (cXd): ");
    scanf("%dX%d",&c,&d);
    
    if(b==c) {
        printf("Resultant matrix is of order %dX%d\n",a,d);
    }else{
        printf("Matrix multiplication not possible");
        return 1;
    }
    
    int A[a][b];
    int B[c][d];
    int ans[a][d];
    
    printf("Enter values of matrix A:\n");
    for(int i=0; i<a; i++) {
        for(int j=0; j<b; j++) {
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Enter values of matrix B:\n");
    for(int i=0; i<c; i++) {
        for(int j=0; j<d; j++) {
            printf("B[%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    
    printf("The resultant matrix A X B: \n");
    
    for(int i=0; i<a; i++) {
        for(int j=0; j<d; j++) {
            
            ans[i][j] = 0;
            for(int x=0,y=0; x<d,y<a; x++,y++) {
                ans[i][j] += A[i][x] * B[y][j];
            }
            printf("%4d ",ans[i][j]);
            
        }
        printf("\n");
    }
    return 0;

/*
OUTPUT:
Enter the order of matrix A (aXb): 2X2
Enter the order of matrix B (cXd): 2X2
Resultant matrix is of order 2X2
Enter values of matrix A:
A[0][0]: 1
A[0][1]: 2
A[1][0]: 3
A[1][1]: 4
Enter values of matrix B:
B[0][0]: 4
B[0][1]: 3
B[1][0]: 2
B[1][1]: 1
The resultant matrix A X B: 
   8    5 
  20   13 
*/
}
