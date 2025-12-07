#include <stdio.h>

void sum(int a,int b) {
int sum = a+b;
printf("\nSum: %d",sum);
}

void average(int a,int b) {
int avg = (a+b)/2;
printf("\nAverage: %d",avg);
}

int main() {

int a,b;
printf("Enter a number A: "),
scanf("%d",&a);
printf("Enter a number B: "),
scanf("%d",&b);
sum(a,b);
average(a,b);
return 0;
}
