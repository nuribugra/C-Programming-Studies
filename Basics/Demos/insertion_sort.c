#include <stdio.h>

#define MAX 50

void insertion_sort(int array[], int size) {
	int i, j, temp;
	
	for (i = 1; i < size; i++) {
		temp = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > temp) {
			array[j + 1] = array[j];
			j--;
		}

		array[j + 1] = temp;
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
	
	insertion_sort(numbers, size);
	
	for (i = 0; i < size; i++) {
		printf("%d ", numbers[i]);
	}
	
	return 0;
}
