#include <stdio.h>

int division(int a, int b, int *rest) {
	*rest = a % b;
	return a / b;
}

int main() {
	int number1, number2, rest, result;
	
	number1 = 17;
	number2 = 5;
	
	result = division(number1, number2, &rest);
	
	printf("Section: %d, Rest: %d \n", result, rest);
	
	return 0;
}
