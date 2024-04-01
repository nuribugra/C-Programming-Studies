#include <stdio.h>

void print_error(int code) {
	printf("Error Code : %d", code);
}

int main() {
	int number;
	
	printf("Enter a nonnegative number: ");
	scanf("%d", &number);
	
	if (number < 0) {
		print_error(404);
	} else {
		printf("Congratulations!");
	}
	
	return 0;
}
