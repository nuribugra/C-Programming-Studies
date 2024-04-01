#include <stdio.h>

int addition(int array[], int size) {
	int *arrayp, i, total = 0;
	
	arrayp = &array[0]; // arrayp = array;
	
	for (i = 0; i < size; i++) {
		total += *(arrayp + i);
	}
	
	return total;
}

int main() {
	int numbers[10] = {2,3,5,-1,9,13,7,8,21,11};
	int result;
	
	result = addition(numbers, 10);
	
	printf("The sum of the given array : %d", result);
	
	return 0;
}
