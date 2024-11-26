#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef unsigned long long int uint64;

uint64* randomArray(uint64 n, uint64 a, uint64 b) {
	
	if (a >= b) {
		return NULL;
	}
	
	uint64* array;
	uint64 i;
	
	srand(time(0));
	
	array = (uint64*) malloc (n * sizeof(uint64*));
	
	for (i = 0; i < n; i++) {
		array[i] = rand() % (b - a) + a;
	}
	
	return array;
}

void printArray(uint64* array, uint64 n) {
	uint64 i;
	
	for (i = 0; i < n; i++) {
		printf("%llu ", array[i]);
	}
}

void addToArray(uint64* array, uint64 n, uint64 number) {
	
	array = (uint64) realloc (array, (n + 1) * sizeof(uint64));
	
	array[n] = number;
	
	return;
}




int main() {
	uint64 n;
	
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	
	uint64* array = randomArray(n, 5, 115);
	
	printArray(array, n);
	
	addToArray(array, n, 200);
	
	printArray(array, n + 1);
	
	
	return 0;
}
