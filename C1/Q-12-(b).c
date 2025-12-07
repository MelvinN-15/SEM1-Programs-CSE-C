// Write a C program to dynamically deallocate memory allocated using malloc() or calloc()

#include <stdio.h>
#include <stdlib.h>

int main() {
    
	int *ptr;
	int n = 5;

	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	printf("Memory successfully allocated using malloc.\n");

	for (int i = 0; i < n; i++) {
		ptr[i] = i + 1;
	}

	printf("The elements of the array are: ");
	for (int i = 0; i < n; i++) {
    printf("%d ", ptr[i]);
	}
	printf("\n");

	free(ptr);

	printf("Memory successfully deallocated using free().\n");
  
	return 0;
}

/*
OUTPUT:
Memory successfully allocated using malloc.
The elements of the array are: 1 2 3 4 5 
Memory successfully deallocated using free()
*/
