// Write a C program to dynamically allocate memory for strings and perform operation on  them

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main() {
    
    char buffer[100];
    char *ptr1,*ptr2;
    int n;
    
    printf("Enter the first string: ");
    scanf("%[^\n]",buffer);
    
    n = strlen(buffer) + 1;
    
    ptr1 = (char *)malloc(n*sizeof(char));
    if (ptr1 == NULL) {
        printf("Memory allocation failed for first string!\n");
        return 1;
    }
    
    strcpy(ptr1,buffer);

    printf("Enter the second string: ");
    scanf(" %[^\n]",buffer);
    
    n = strlen(buffer) + 1;
    
    ptr2 = (char *)malloc(n*sizeof(char));
    
    if (ptr2 == NULL) {
        printf("Memory allocation failed for first string!\n");
        return 1;
    }
    
    strcpy(ptr2,buffer);
    
    strcat(ptr1," ");    
    strcat(ptr1,ptr2);
    printf("Joining both the dynamically allocated strings: ");
    puts(ptr1);
    
    free(ptr1);
    free(ptr2);
    
    ptr1 = ptr2 = NULL;
    
    return 0;
}

/*
OUTPUT:
[?2004l
Enter the first string: We have to go to college tmrw
Enter the second string: to write our exam
Joining both the dynamically allocated strings: We have to go to college tmrw to write our exam
*/
