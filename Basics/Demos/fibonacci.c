#include <stdio.h>

// 1 1 2 3 5 8 13 21 34 ...

int main() {
	int i, first_number = 1, second_number = 1, temp;
	
	printf("%d, %d, ", first_number, second_number);
	
	for (i = 1; i <= 10; i++) {
		temp = second_number;
		
		second_number += first_number; 
		
		first_number = temp;
		
		printf("%d, ", second_number);
	} 
	
	
	return 0;
}
