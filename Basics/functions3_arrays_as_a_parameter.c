#include <stdio.h>

// One-dimensional array as a parameter

/*
int multiplication(int array[], int size) {
	
	int i, result = 1;
	
	for(i = 0; i < size; i++) {
		result *= array[i];
	}
	
	return result;	
	
}

int main() {
	
	int numbers[5] = {1,2,3,4,5};
	
	printf("%d", multiplication(numbers, 5));
	
	return 0;
}*/

// Two-dimensional array as a parameter

void print_matrix(int matrix[][4], int size) { // this size value identify the row size;
	int i, j;
	
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) {
			printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}
}

int main() {
	
	int i, j, matrix[3][4];
	
	for(i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("Matrix[%d][%d]: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	print_matrix(matrix, 3);
	
	return 0;
}

