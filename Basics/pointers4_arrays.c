#include <stdio.h>

int max_number(int *arrayp, int size) {
	int i, max;
	
	max = arrayp[0];
	
	for (i = 0; i < size; i++) {
		if (arrayp[i] > max) {
			max = arrayp[i];
		}
	}
	
	return max;
}

int main() {
	
	int numbers[5] = {5,13,-1,62,37};
	int max;
	
	max = max_number(numbers, 5);
	
	printf("The biggest number is %d", max);
	
	return 0;
}
