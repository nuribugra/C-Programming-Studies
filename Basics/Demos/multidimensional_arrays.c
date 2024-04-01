#include <stdio.h>

int main() {
	int i, j, matrix[3][5], result;
	int temp;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("Addition of the columns: \n");
	
	for (i = 0; i < 5; i++) {
		temp = 0;
		for (j = 0; j < 3; j++) {
			temp += matrix[j][i];
		}
		printf("%3d", temp);
	}
	
	return 0;
}
