//Write a C program to create an array of pointers and perform operations on it

#include<stdio.h>

int main() {
    
    char *p[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    
    int dayno;
    
    printf("Enter day number (1-7): ");
    scanf("%d",&dayno);
    
    printf("Day corresponding to day number %d is %s",dayno,p[dayno-1]);
    
    return 0;
}

/*
OUTPUT:
Enter day number (1-7): 5
Day corresponding to day number 5 is Friday
*/
