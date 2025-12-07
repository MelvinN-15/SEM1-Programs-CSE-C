// Develop a C program to store and display date (day, month, year) using structures

#include <stdio.h>

typedef struct
{
	int day;
	int mon;
	int yr;
} DATE;

int main() {

	DATE d1;

	printf("Enter date (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&d1.day,&d1.mon,&d1.yr);

	printf("\nThe stored date is printed showing its components: ");
	printf("\nDay: %d",d1.day);
	printf("\nMonth: %d",d1.mon);
	printf("\nYear: %d",d1.yr);

	return 0;
}

/*
OUTPUT:
Enter date (dd/mm/yyyy): 15/11/2007

The stored date is printed showing its components: 
Day: 15
Month: 11
Year: 2007
*/
