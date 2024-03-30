#include <stdio.h>
#define n 3

/* Symmetric
int main() {
	int i, j, A[n][n], control = 1;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("A[%d][%d]: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (A[i][j] != A[j][i]) {
				control = 0;
			}
		}
	}
	
	if (control == 0) {
		printf("This is not a symmetric matrix");
	} else {
		printf("This is a symmetric matrix");
	}
	
	
	return 0;
}*/

// Skew-symmetric Matrix
int main() {
	int i, j, A[n][n], control = 1;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("A[%d][%d]: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (A[i][j] != (-1)*A[j][i]) {
				control = 0;
			}
		}
	}
	
	if (control == 0) {
		printf("This is not a skew-symmetric matrix");
	} else {
		printf("This is a skew-symmetric matrix");
	}
	
	
	return 0;
}
