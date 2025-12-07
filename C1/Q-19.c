// Write a C program to store and display a union of student and employee information

#include <stdio.h>
#include <string.h>

struct data {
    char occ;
    char name[50];
    union{
        int empid;
        int rollno;
    };
    int age;
};

int main() {
    struct data A;
    
    printf("Enter your occupation - Student(S) / Employee(E) e.g. S: ");
    scanf("%c",&A.occ);
    
    printf("Enter your name: ");
    scanf("%s",A.name);
    printf("Enter your age: ");
    scanf("%d",&A.age);
    
    if(A.occ=='S') {
        printf("Enter your roll number: ");
        scanf("%d",&A.rollno);
    }
    else if(A.occ=='E') {
        printf("Enter your employee id: ");
        scanf("%d",&A.empid);
    }
    
    printf("\nDisplaying data: ");
    
    printf("\nOccupation: ");
    printf((A.occ=='S'?"Student":"Employee"));
    printf("\nName: %s",A.name);
    
    if(A.occ=='E')
        printf("\nEmp ID: %d",A.empid);
    else
        printf("\nRoll no: %d",A.rollno);
    printf("\nAge: %d",A.age);
    
    return 0;
}

/*
OUTPUT:
Enter your occupation - Student(S) / Employee(E) e.g. S: S
Enter your name: Name
Enter your age: 18
Enter your roll number: 123

Displaying data: 
Occupation: Student
Name: Name
Roll no: 123
Age: 18
*/
