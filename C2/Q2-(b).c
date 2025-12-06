// Write a Program to read a character until a * is encountered.Also Count the number of upper caase, loweer case and numbers entered by the users

#include<stdio.h>
#include<ctype.h>

int main() {
    
    char ch;
    int uc=0, lc=0, nc=0;
    
    while(1) {
        printf("Enter a character: ");
        scanf(" %c",&ch);
        if(ch=='*')
            break;
        else {
            if(isupper(ch))
                uc++;
            if(islower(ch))
                lc++;
            if(isdigit(ch))
                nc++;
        }
    }
        printf("\n\nNo. of uppercase characters entered: %d",uc);
        printf("\nNo. of lowercase characters entered: %d",lc);
        printf("\nNo. of digits entered: %d\n",nc);
    
    return 0;
}

/*
OUTPUT:
Enter a character: a
Enter a character: b
Enter a character: c
Enter a character: A
Enter a character: B
Enter a character: C
Enter a character: 1
Enter a character: 2
Enter a character: 3
Enter a character: *


No. of uppercase characters entered: 3
No. of lowercase characters entered: 3
No. of digits entered: 3
*/

