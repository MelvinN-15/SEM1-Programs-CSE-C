// Write a C program to store and display a union of student and employee information


#include <stdio.h>
#include <string.h>

struct student {

    char name[50];
    int rollno;
    int age;
};

struct employee {
    
    char name[50];
    int empid;
    int age;
};

union {

  struct student S;
  struct employee E;

}U;

int main() {

    char occ;
    
    printf("Enter your occupation - Student(S) / Employee(E) e.g. S: ");
    scanf("%c",&occ);
    
    
    if(occ=='S') {
        printf("Enter your name: ");
        scanf("%s",U.S.name);
        printf("Enter your age: ");
        scanf("%d",&U.S.age);
        printf("Enter your roll number: ");
        scanf("%d",&U.S.rollno);
    }
    else if(occ=='E') {
        printf("Enter your name: ");
        scanf("%s",U.E.name);
        printf("Enter your age: ");
        scanf("%d",&U.E.age);
        printf("Enter your employee id: ");
        scanf("%d",&U.E.empid);
    }
    
    printf("\nDisplaying data: ");
    
    printf("\nOccupation: ");
    printf((occ=='S'?"Student":"Employee"));
    
    if(occ=='E') {
        printf("\nName: %s",U.E.name);
        printf("\nEmp ID: %d",U.E.empid);
        printf("\nAge: %d",U.E.age);
    }else{
        printf("\nName: %s",U.S.name);
        printf("\nRoll no: %d",U.S.rollno);
        printf("\nAge: %d",U.S.age);
    }   
        
    
    
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
