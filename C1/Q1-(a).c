//Write a C program to compute Area and circumference of circle
#include<stdio.h>

int main() {
    
    int radius;
    float area,circumference;
    
    printf("Enter radius: ");
    scanf("%d",&radius);
    
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    
    printf("\nArea of the circle: %.2f",area);
    printf("\nCircumference of the circle: %.2f",circumference);
    
    return 0;
}
/*
OUTPUT:
Enter radius: 13
Area of the circle: 530.66
Circumference of the circle: 81.64
*/
