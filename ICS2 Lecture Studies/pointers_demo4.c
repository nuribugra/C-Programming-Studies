#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n, *numbers;
	
	printf("What is the array size: ");
	scanf("%d", &n);
	
	numbers = (int*)malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++) {
		printf("Enter a number: ");
		scanf("%d", &numbers[i]);
	}
	
	for (i = 0; i < n; i++) {
		printf("%d ", numbers[i]);
	}
	
	free(numbers);
	return 0;
}
