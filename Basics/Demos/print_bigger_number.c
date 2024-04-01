#include <stdio.h>

int bigger(int, int); // prototype

int main() {
	int number1, number2;
	
	printf("Enter the number 1: ");
	scanf("%d", &number1);
	
	printf("Enter the number 2: ");
	scanf("%d", &number2);
	
	printf("The bigger number is %d", bigger(number1, number2));
	
	return 0;
}

int bigger(int x, int y) {
	if (x > y) {
		return x;
	}else {
		return y;
	}
}
