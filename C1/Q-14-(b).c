// Write a C program to reverse a given string using built-in function

#include <stdio.h>
#include <string.h>

// THIS PART IS NOT NEEDED FOR TURBO C -- BUT NEEDS TO BE WRITTEN FOR ALL THE OTHER COMPILERS -- LEARN AS REFERENCE
//void strrev(char* str) {
//     int len = strlen(str);
    
//     int i=0;
//     int j=len-1;
    
//     while(i<j) {
//         int t = str[i];
//         str[i] = str[j];
//         str[j] = t;
        
//         i++;
//         j--;
//     }
// }

int main() {
    char str[50];
    
    printf("Enter a string to be reversed: ");
    scanf("%[^\n]",str);
    
    strrev(str);
    
    printf("Reversed string: ");
    puts(str);
}

/*
OUTPUT:
Enter a string to be reversed: we have college tmrw
Reversed string: wrmt egelloc evah ew
*/
