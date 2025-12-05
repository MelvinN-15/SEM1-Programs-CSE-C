// Write a C program that asks the user for a character and prints whether it's a vowel or consonant

#include<stdio.h>
#include<ctype.h>

int main() {
    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);
    
    int ch = toupper(chr);
    
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("The given character '%c' is a vowel",chr);
    else
        printf("The given character '%c' is a consonant",chr);
    
    return 0;
}

/*
OUTPUT:
Enter a character: m
The given character 'm' is a consonant
*/
