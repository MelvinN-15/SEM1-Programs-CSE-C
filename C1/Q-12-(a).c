// Write a C program to find the largest and smallest element in an array

#include<stdio.h>
#include<limits.h>

int main() {

	int a[10];
	int max = INT_MIN;
	int min = INT_MAX;

	printf("Enter the elements of the array:\n");
	for(int i=0; i<10; i++) {
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}


	for(int i=0; i<10; i++) {
		if(a[i]>max) {
			max = a[i];
		}
		if(a[i]<min) {
		    min = a[i];
		}
	}

	printf("\nMaximum value in array: %d",max);
	printf("\nMinimum value in array: %d",min);

	return 0;
}

/*
OUTPUT:
Enter the elements of the array:
a[0]: 1
a[1]: 2
a[2]: 3
a[3]: 4
a[4]: 5
a[5]: 6
a[6]: 7
a[7]: 8
a[8]: 9
a[9]: 10

Maximum value in array: 10
Minimum value in array: 1
*/
