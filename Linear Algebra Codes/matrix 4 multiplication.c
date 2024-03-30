#include <stdio.h>
#define m 3
#define n 2
#define p 3

int main() {
	int i, j, k, A[m][n], B[n][p], C[m][p];
	
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("A[%d][%d]: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < p; j++) {
			printf("B[%d][%d]: ", i+1, j+1);
			scanf("%d", &B[i][j]);
		}
	}
	
	for (i = 0; i < m; i++) {
		for (j = 0; j < p; j++) {
			C[i][j] = 0;
			for(k = 0; k < n; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	for (i = 0; i < m; i++) {
		for (j = 0; j < p; j++) {
			printf("%3d", C[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
