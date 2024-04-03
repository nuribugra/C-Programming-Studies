#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

void secmeliSiralama(int *array, int size) {
	int min, temp, i, j;
	
	for (i = 0; i < size - 1; i++) {
		min = i;
		
		for (j = i + 1; j < size; j++) {
			if (array[j] < array[min]) {
				min = j;
				
				if (min != i) {
					temp = array[i];
					
					array[i] = array[min];
					
					array[min] = temp;
				}
			}
		}
	}
}

int main() {
	
	srand(time(NULL));
	
	int c, i = 0, numbers[6], control = 0, r, j;
	
	while (i < 6) {
		numbers[i] = 1 + rand()%54;
		
		for (j = i - 1; j >= 0; j--) {
			if (numbers[j] == numbers[i]) {
				numbers[i] = 1 + rand()%54;
				
				j = i - 1;
			}
		}
		
		i++;
	}
	
	secmeliSiralama(numbers, 6);
	
	for (i = 0; i < 6; i++) {
		printf("%3d", numbers[i]);
	}
	
	printf("\nNew number(Yes: 1 No: 0): ");
	scanf("%d", &c);
	
	if (c == 1) {
		main();
	}else {
		getch();	
	}
	
	
	return 0;
}
