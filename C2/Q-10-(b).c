// Write a program to calculate salary of an employee,, given his basic pay (to be entered by user),HRA= 10% of the basic pay,TA= 5% of basic pay.Define HRA and TA as Constant and use them to calculate the salary of the employee

#include <stdio.h>

int main() {
    
    float bpay,sal;
    
    printf("Enter the basic pay: ");
    scanf("%f",&bpay);
    
    const float hra = 0.10*bpay;
    const float ta = 0.05*bpay;
 
    sal = bpay + hra + ta;
    
    printf("Salary Calculation:");
    printf("\nBasic Pay: %.2f",bpay);
    printf("\nHRA: %.2f",hra);
    printf("\nTA: %.2f",ta);
    printf("\nSalary = %.2f",sal);
    
    return 0;
}

/*
OUTPUT:
Enter the basic pay: 1000
Salary Calculation:
Basic Pay: 1000.00
HRA: 100.00
TA: 50.00
Salary = 1150.00
*/

//adad**/
