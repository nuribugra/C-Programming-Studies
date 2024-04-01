#include <stdio.h>

int perfect_number(int number) {
	int i, total = 0;
	
	for (i = 1; i < number; i++) {
		if (number % i == 0) {
			total += i;
		}
	}
	
	if (number == total) {
		return 1;
	}else {
		return 0;
	}
}

float calculate_average(int array[], int size) {
	int i, sum = 0;
	float average;
	
	for(i = 0; i < size; i++) {
		sum += array[i];
	}
	
	average = (float)sum / size;
	
	return average;	
}

int main() {
	int i, numbers[10], isPerfect; 
	float average;
	
	for(i = 0; i < 10; i++) {
		printf("Enter a number: ");
		scanf("%d", &numbers[i]);
	}
	
	average = calculate_average(numbers, 10);
	
	printf("Average: %.2f\n", average);
	
	isPerfect = perfect_number((int)average);
	
	if (isPerfect == 1) {
		printf("%d is a perfect number.\n", (int)average);
	}else {
		printf("%d is not a perfect number.\n", (int)average);	
	}
	
	return 0;
}
