// Write a C program to convert a string to uppercase or lowercase

#include <stdio.h>
#include <ctype.h>

int main() {

	char str[50];
	char choice;

	printf("Enter a string: ");
	scanf("%s", str);
	printf("Convert to Uppercase (U) or Lowercase (L) - (U/L): ");
	scanf(" %c", &choice);

	if (choice == 'U' || choice == 'u') {
		for (int i = 0; str[i] != '\0'; i++) {
			str[i] = toupper(str[i]);
		}
	}
	else if (choice == 'L' || choice == 'l') {
		for (int i = 0; str[i] != '\0'; i++) {
			str[i] = tolower(str[i]);
		}
	}
	else {
		printf("Wrong choice. Try again!");
		return 0;
	}

	printf("Ans: %s", str);

	return 0;
}

/*
OUTPUT:
Enter a string: mElVin
Convert to Uppercase (U) or Lowercase (L) - (U/L): U
Ans: MELVIN
*/
