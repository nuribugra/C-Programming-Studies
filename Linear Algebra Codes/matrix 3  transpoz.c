#include <stdio.h>
#define m 2
#define n 3

int main() {
	int A[m][n], T[m][n];
	int i, j;
	
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("A[%d][%d]: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	for (i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			T[i][j] = A[j][i];
		}
	}
	
	printf("Matrix A\n");
	
	for (i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
	
	printf("Transpose Matrix\n");
	
	for (i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			printf("%3d", T[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
