#include <stdio.h>

#define MAX 50

void selection_sort(int array[], int size) {
	int i, j, temp, min;
	
	for (i = 0; i < size; i++) {
		min = i;
		
		for (j = i + 1; j < size; j++) {
			if (array[j] < array[min]) {
				min = j;
			}
		}
		
		temp = array[i];
		
		array[i] = array[min];
		
		array[min] = temp;
	}
}

int main() {
	int i, size, numbers[MAX];
	
	printf("Enter the array size: ");
	scanf("%d", &size);
	
	for (i = 0; i < size; i++) {
		printf("Enter a number: ");
		scanf("%d", &numbers[i]);
	}
	
	selection_sort(numbers, size);
	
	for (i = 0; i < size; i++) {
		printf("%d ", numbers[i]);
	}
	
	return 0;
}
