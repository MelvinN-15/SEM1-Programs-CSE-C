// Write a C program that asks the user for a number and prints whether it's even or odd

#include <stdio.h>
int main() {

	int x;
	printf("Enter a number: ");
	scanf("%d",&x);

	if(x%2==0) {
		printf("%d is an even number",x);
	}
	else {
		printf("%d is an odd number",x);
	}

	return 0;
}

/*
OUTPUT:
Enter a number: 12
12 is an even number
*/
