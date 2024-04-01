#include <stdio.h>

int total(int n) {
	if (n == 0) {
		return 0;
	} else {
		return n + total(n - 1); // recursive
	}
}

int main() {
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	printf("Result is %d", total(number));
	
	return 0;
}
