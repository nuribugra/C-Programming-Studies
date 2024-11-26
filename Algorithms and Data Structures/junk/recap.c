#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef unsigned long long int uint64;

uint64* randomArrayGenerator(uint64 n, int a, int b) {
	if (a >= b) {
		return NULL;
	}
	
	srand(time(0));
	
	uint64* array = (uint64*) malloc(sizeof(uint64) * n);
	
	uint64 i;
	
	for (i = 0; i < n; i++) {
		array[i] = rand() % (b - a) + a;
	}
	
	return array;
}

void printArray(uint64* array, uint64 n) {
	uint64 i;
	
	for(i = 0; i < n; i++) {
		printf("%llu ", array[i]);
	}
	
	printf("\n");
	
	return;
}

int main() {
	uint64 n;
	
	printf("Enter the size of the array: ");
	scanf("%llu", &n);
	
	uint64* array = randomArrayGenerator(n, 1, 50);
	
	printArray(array, n);
	
	
	
	return 0;
}
