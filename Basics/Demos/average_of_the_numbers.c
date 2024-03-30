#include <stdio.h>

int main() {
	int i, number;
	float average = 0;
	
	for (i = 0; i < 5; i++) {
		printf("Enter a number (Press 'e' to exit.)\n");
		scanf("%d", &number);
		
		average += number;
	}
	
	average = (float)average / 5;
	
	printf("Average: %.2f", average);
	return 0;
}
