//Write a Program to enter two points and then calculate the distance between them using Structure

#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
}POINT;

int main() {
    
    POINT x1,x2;
    
    printf("Enter x and y values of point X1: ");
    scanf("%d %d",&x1.x,&x1.y);
    
    printf("Enter x and y values of point X2: ");
    scanf("%d %d",&x2.x,&x2.y);
    
    float distance = sqrt((x2.x-x1.x)*(x2.x-x1.x) + (x2.y-x1.y)*(x2.y-x1.y));
    
    printf("Distance between the two points: %.2f",distance);
    
    return 0;
}

/*
OUTPUT:
Enter x and y values of point X1: 1 1
Enter x and y values of point X2: 1 1
Distance between the two points: 0.00
*/
