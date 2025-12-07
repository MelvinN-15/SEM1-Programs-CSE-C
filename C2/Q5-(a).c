// Create a structure for employee with name, id, salary. Write a program to display the employee with the highest salary

#include <stdio.h>
#include <limits.h>

struct employee {
    char name[20];
    int id;
    float salary;
};

int main() {
  
  int n;
  printf("Enter the number of employees: ");
  scanf("%d",&n);
  
  struct employee emp[n];
  
  for(int i=0; i<n; i++) {
      printf("Enter the details for emp %d\n",i+1);
      printf("Enter name: ");
      scanf("%s",emp[i].name);
      printf("Enter empid: ");
      scanf("%d",&emp[i].id);
      printf("Enter Salary: ");
      scanf("%f",&emp[i].salary);
      printf("--------------------------\n");
  }
  
  float sal=INT_MIN;
  int j;
  
  for(int i=0; i<n; i++) {
      if(emp[i].salary>sal) {
          sal = emp[i].salary;
          j=i;
      }
  }
  
  printf("Employee having highest Salary: %s\n",emp[j].name);
  printf("Highest Salary: %f",sal);
  
  return 0;
}

/*
OUTPUT:
Enter the number of employees: 2
Enter the details for emp 1
Enter name: e1
Enter empid: 1
Enter Salary: 123
--------------------------
Enter the details for emp 2
Enter name: e2
Enter empid: 2
Enter Salary: 321
--------------------------
Employee having highest Salary: e2
Highest Salary: 321.000000
*/
