/*

Write a C program to print the following pattern:
*
* *
* * *
* * * *
* * *
* *
*

*/

#include <stdio.h>
int main() {

	for(int i=0; i<7; i++) {
		for(int j=0; j<7; j++) {
			if(j<=i && (i+j)<=6) {
				printf("* ");
			}
		}
		printf("\n");
	}

	return 0;
}


/*
OUTPUT:
* 
* * 
* * * 
* * * * 
* * * 
* * 
*
*/
