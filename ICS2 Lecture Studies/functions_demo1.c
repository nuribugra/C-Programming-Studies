#include <stdio.h>

int max(int matrix[2][3]) {
	int i, j, max;
	
	max = matrix[0][0];
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}
	
	return max;
}

void normalising(int a[2][3], double an[2][3]) {
	int i, j, maxi;
	
	maxi = max(a);
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			an[i][j] = (double)a[i][j] / maxi;
		}
	}
}

int main(){
	int matrix[2][3] = {{1,2,3},{4,5,6}};
	int i, j;
	double normal_matrix[2][3];
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("%d\n", max(matrix));
	
	printf("Normalize Matrix: \n");
	
	normalising(matrix, normal_matrix);
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%5.2lf", normal_matrix[i][j]);
		}
		printf("\n");
	}
	
return 0;
}

