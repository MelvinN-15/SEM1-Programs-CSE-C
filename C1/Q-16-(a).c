// Write a C program that takes a user's grade percentage and converts it to a letter grade (A, B, C, D, F)

#include <stdio.h>

int main () {
    
    int g;
    char grade;
    
    printf("Enter the grade percentage: e.g. 90: ");
    scanf("%d",&g);
    
    if(g>100 || g<0) {
        printf("Wrong value entered! Try again!");
        return 1;
    }
    
    if(g>=90) {
        grade='A';
    }else if(g>=80) {
        grade='B';
    }else if(g>=70) {
        grade='C';
    }else if(g>=45) {
        grade='D';
    }else{
        grade='F';
    }
    
    printf("Letter grade: %c",grade);
    
    return 0;
}

/*
OUTPUT:
Enter the grade percentage: e.g. 90: 75
Letter grade: C
*/
