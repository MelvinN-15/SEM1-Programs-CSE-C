// Write a C program to find the length of a given string using built-in function

#include <stdio.h>
#include <string.h>

int main () {
    char str[50];
    printf("Enter a string to find its length: ");
    scanf("%s",str);
    
    int len = strlen(str);
    
    printf("Length of the string: %d",len);
    
    return 0;
}

/*
OUTPUT:
Enter a string to find its length: computer
Length of the string: 8
*/
