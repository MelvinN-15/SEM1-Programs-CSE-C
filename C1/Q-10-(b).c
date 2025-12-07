// Write a C program to check if a given string is a palindrome

#include <stdio.h>
#include <string.h>
int main() {

	char str1[50];
	char str2[50];
	printf("Enter a string: ");
	scanf("%[^\n]",str1);

	int len = strlen(str1);

	for(int i=0; i<len; i++) {

		str2[i] = str1[len-1-i];

	}
	str2[len] = '\0';

	if(strcmp(str1,str2)==0) {
		printf("The string is a palindrome");
	}
	else {
		printf("The string is not a palindrome");
	}

	return 0;
}

/*
OUTPUT:
Enter a string: racecar
The string is a palindrome
*/
