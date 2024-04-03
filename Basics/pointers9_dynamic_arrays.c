#include <stdio.h>
#include <stdlib.h>

// malloc, calloc, reallloc, free (Memory Manegement)

/*
int main() {
	
	int *p;
	
	p = (int*)malloc(5 * sizeof(int)); // An integer array has 5 element
	
	free(p);
	
	return 0;
}
*/

int main() {
	int *numbers;
	int i, size, sum = 0;
	float average;
	
	printf("Enter size of the array: ");
	scanf("%d", &size);
	
	numbers = (int*)malloc(sizeof(int) * size);
	
	for (i = 0; i < size; i++) {
		printf("Enter a number: ");
		scanf("%d", &numbers[i]);
		
		sum += numbers[i];
	}
	
	free(numbers);
	
	average = (float)(sum / size);
	
	printf("Average: %f", average);	
	
	return 0;
}
