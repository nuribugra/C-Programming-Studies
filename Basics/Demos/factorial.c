#include <stdio.h>

int main() {
	int i, number, result = 1;
	
	printf("Enter the number: ");
	scanf("%d", &number);
	
	for (i = 1 i <= number; i++) {
		result *= i;
	}
	
	printf("%d! = %d", number, result);
	
	return 0;
}
