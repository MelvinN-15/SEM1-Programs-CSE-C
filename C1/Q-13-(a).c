//Write a C program to store and display student grades in an array

#include <stdio.h>

int main() {

	int num;

	printf("Enter the number of students: ");
	scanf("%d", &num);
	
	if(num<=0) {
	    printf("Invalid input for number of students.\n");
		return 1;
    }
    
	float grades[num];

	printf("\nEnter the grades (e.g., 88.5):\n");
	for (int i = 0; i < num; i++) {
		printf("Grade for Student %d: ", i + 1);
		scanf("%f", &grades[i]);
	}

	printf("\n--- Displaying Student Grades ---\n");
	for (int i = 0; i < num; i++) {
		printf("Student %d Grade: %.2f\n", i + 1, grades[i]);
	}

	return 0;
}


/*
OUTPUT:
Enter the number of students: 5

Enter the grades (e.g., 88.5):
Grade for Student 1: 70
Grade for Student 2: 80
Grade for Student 3: 90
Grade for Student 4: 100
Grade for Student 5: 100

--- Displaying Student Grades ---
Student 1 Grade: 70.00
Student 2 Grade: 80.00
Student 3 Grade: 90.00
Student 4 Grade: 100.00
Student 5 Grade: 100.00

*/
