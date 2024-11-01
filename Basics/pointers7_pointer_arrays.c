#include <stdio.h>

char *chosen_day(char *array[], int size, int day) {
	if (day >= 1 && day <= 7) {
		return array[day-1];
	} else {
		return NULL;
	}
}

int main() {
	char *days[7] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
	
	char *p;
	
	p = chosen_day(days, 7, 4);
	
	if (p == NULL) {
		printf("NULL");
	}else {
		printf("%s", p);
	}
	return 0;
}
