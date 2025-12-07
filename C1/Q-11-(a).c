/*

Write a C program to print the following pattern:
   A
  B B
 C C C
D D D D

*/

#include <stdio.h>

int main() {

	for(int i=0; i<4; i++) {
		for(int k=3; k>i; k--) {
			printf(" ");
		}
		for(int j=0; j<=i; j++) {
			printf("%c ",(char)(65+i));
		}
		printf("\n");
	}

	return 0;
}


/*
OUTPUT:
   A 
  B B 
 C C C 
D D D D 
*/
