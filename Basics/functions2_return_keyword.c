#include <stdio.h>

int factorial(int number) {
	int result = 1;
	
	for(; number > 0; number--) {
		result *= number;
	}
	// when it reachs to zero, It won't enter the loop!!
	
	return result; // result is a integer value
}

int main() {
	int number;
	
	printf("Enter the number: ");
	scanf("%d", &number);
	
	printf("Factorial of the %d is %d", number, factorial(number));
	
	return 0;
}
