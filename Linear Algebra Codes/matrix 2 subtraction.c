#include <stdio.h>
#define m 2
#define n 3

int main() {
	int i, j, A[m][n], B[m][n], C[m][n];
	
	// Matrix A
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("A[%d][%d]: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	// Matrix B
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("B[%d][%d]: ", i+1, j+1);
			scanf("%d", &B[i][j]);
		}
	}
	
	// Multiplication
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			B[i][j] = B[i][j] * (-1);
		}
	}
	
	// Addition
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	// Print Matrix C
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%4d", C[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
