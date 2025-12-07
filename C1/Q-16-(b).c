// Write a C program to print the sum of integers passed as command line arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    int sum=0;
    
    for(int i=1; i<argc; i++) {
        int num = atoi(argv[i]);
        sum+=num;
    }
    
    printf("Sum: %d",sum);
}

/*
OUTPUT:
C:\Users\Melvin\Desktop>gcc p2.c

C:\Users\Melvin\Desktop>.\a.exe 10 20 30
Sum: 60
*/
