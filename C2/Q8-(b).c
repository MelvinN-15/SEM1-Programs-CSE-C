// Write a Program to read a character until a * is encountered.Also Count the number of upper caase, loweer case and numbers entered by the users

#include<stdio.h>
#include<ctype.h>

int main() {
    
    char str[50];
    int uc=0, lc=0, sc=0;

    printf("Enter a string: ");
    scanf("%[^\n]",str);
    

        int i=0;
        while(str[i]!='\0') {
            
            char ch = str[i];
            
            if(isalpha(ch))
                uc++;
            else if(isdigit(ch))
                lc++;
            else
                sc++;
        
            i++;
        }
        
        
        printf("\nNo. of alphabets: %d",uc);
        printf("\nNo. of digits: %d",lc);
        printf("\nNo. of special characters: %d\n",sc);
    
    return 0;
}

/*
OUTPUT:
Enter a string: abc 123 .!!@

No. of alphabets: 3
No. of digits: 3
No. of special characters: 6*/
