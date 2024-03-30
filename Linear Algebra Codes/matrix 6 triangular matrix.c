#include <stdio.h>
#define n 4


// Triangular Matrices
int main() {
	int i, j, A[n][n], control = 1, control2 = 1;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("A[%d][%d]: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i > j && A[i][j] != 0) {
				control = 0;
			}
			if (i < j && A[i][j] != 0) {
				control2 = 0;
			}
		}
	}
	
	if (control == 0) {
		printf("This is not a upper triangular matrix.\n");
	} else {
		printf("This is a upper triangular matrix.\n");
	}
	
	if (control2 == 0) {
		printf("This is not a lower triangular matrix.\n");
	} else {
		printf("This is a lower triangular matrix.\n");
	}
	
	
	return 0;
}
