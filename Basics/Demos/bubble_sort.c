#include <stdio.h>

#define MAX 50

void bubble_sort(int array[], int size) {
	int i, j, temp;
	
	for (i = 0; i < size; i++) {
		for (j = 1; j < size - i; j++) {
			if (array[j - 1] > array[j]) {
				temp = array[j];
				
				array[j] = array[j - 1];
				
				array[j - 1] = temp;
			}
		}
	}
}

int main() {
	int numbers[MAX], size, i;
	
	printf("Enter the array size: ");
	scanf("%d", &size);
	
	for (i = 0; i < size; i++) {
		printf("Enter a number: ");
		scanf("%d", &numbers[i]);
	}
	
	bubble_sort(numbers, size);
	
	for (i = 0; i < size; i++) {
		printf("%d ", numbers[i]);
	}
	
	return 0;
}
