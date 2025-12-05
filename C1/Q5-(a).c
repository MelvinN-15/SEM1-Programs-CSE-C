// Write a C program that asks the user for their age and prints whether they are eligible to vote or not

#include<stdio.h>

int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    
    if(age>=18)
        printf("You are eligible to vote");
    else
        printf("You are not eligible to vote");
    
    return 0;
}

/*
OUTPUT:
Enter your age: 18
You are eligible to vote
*/
