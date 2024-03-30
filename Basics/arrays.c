#include <stdio.h>

int main() {
	int i, numbers[5], total = 0;
	float average;
	
	printf("Enter 5 numbers: \n");
	
	for (i = 0; i < 5; i++) {
		scanf("%d", &numbers[i]);
	}
	
	for (i = 0; i < 5; i++) {
		total += numbers[i]; 
	}
	
	average = (float)total / 5;

	printf("The average of the numbers is %.2f", average);	
	return 0;
}
