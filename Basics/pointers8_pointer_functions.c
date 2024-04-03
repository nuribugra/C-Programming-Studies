#include <stdio.h>

int *send(int array[], int size) {
	int min, *p, i;
	
	min = array[0];
	p = &array[0]; // p = array;
	
	for (i = 0; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
			p = &array[i];
		}
	}
	
	return p;
}

int main() {
	int numbers[] = {10,20,15,30,4,32,51};
	int *q;
	
	q = send(numbers, 7);
	
	printf("The minimum value is %d", *q);
	
	return 0;
}
