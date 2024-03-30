#include <stdio.h>
#define n 3

/* Diagonal
int main() {
	int i, j, control = 1;
	int A[n][n];
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("A[%d][%d]: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i != j && A[i][j] != 0) {
				control = 0;
			}
		}
	}
	
	if (control == 0) {
		printf("This is not a diagonal matrix.");
	} else {
		printf("This is a diagonal matrix.");
	}
	
	
	return 0;
}*/

// Skalar Matrix

int main() {
	int i, j, control = 1, control2 = 1, temp;
	int A[n][n];
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("A[%d][%d]: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i != j && A[i][j] != 0) {
				control = 0;
			}
		}
	}
	
	if (control == 1) {
		temp = A[0][0];
		
		for (i = 1; i < n; i++) {
			if (A[i][i] != temp) {
				control2 = 0;
			}
		}
	} 
	
	if (control == 0 || control2 == 0) {
		printf("This is not a skalar matrix.");
	} else {
		printf("This is a skalar matrix.");
	}
	
	
	return 0;
}
