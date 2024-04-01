#include <stdio.h>

int prime_number_test(int number) {
	int i;
	
	for (i = 2; i < number; i++) {
		
		if (number % i == 0) {
			return 0;
		}
	}
	
	return 1;
}

int main() {
	int number; 
	
	printf("Enter the number: ");
	scanf("%d", &number);
	
	int isPrime = prime_number_test(number);
	
	if (isPrime == 1) {
		printf("This is a prime number.");
	} else {
		printf("This is not a prime number.");
	}
	
	return 0; 
}
