#include <stdio.h>
#include <time.h>

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
		printf("%llu\n", array[i]);
	}
	
	return array;
}


int main() {
	uint64 n;
	
	randomArray(5, 1, 100);
	
	
	return 0;
}
