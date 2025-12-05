//Write a C program to solve the Quadratic equation

#include<stdio.h>
#include<math.h>

void soleq(int a, int b, int c, float ans[]) {
    ans[0] = ((-b) + sqrt((b*b) - (4*a*c)))/(2*a);
    ans[1] = ((-b) - sqrt((b*b) - (4*a*c)))/(2*a);
}

int main() {
    
    int a,b,c;
    
    printf("A quadratic equation is represented as a(x*x) + b(x) + c = 0\n");
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);
    
    float ans[2];
    soleq(a,b,c,ans);

    printf("\nSolution for the equation:");
    printf("\nx1: %.2f",ans[0]);
    printf("\nx2: %.2f",ans[1]);
    
    return 0;
}

/*
OUTPUT:
A quadratic equation is represented as a(x*x) + b(x) + c = 0
Enter value of a: 4
Enter value of b: -5
Enter value of c: -12

Solution for the equation:
x1: 2.47
x2: -1.22
*/
