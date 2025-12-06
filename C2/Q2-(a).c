// Write a Program to  calculate the average of first n numbers

#include<stdio.h>

int main() {
    
    int n;
    float sum=0;
    float average;
    
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    
    for(int i=0; i<n; i++) {
            sum+=i;
    }

    average = sum/n;

    printf("Average of first %d numbers: %.2f",n,average);
    return 0;
}

/*
OUTPUT:
Enter the value of n: 4
Average of first 4 numbers: 1.50
*/
