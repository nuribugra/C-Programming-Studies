#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int increase(int *p, int *size) {
	int new_size;
	
	if (*size == 1) {
		new_size = (*size) * 2;
	}else  {
		new_size = (int)pow(*size, 2);
	}
	
	p = (int*)realloc(p, new_size * sizeof(int));
	
	if (p != NULL) {
		printf("Yeni Bellek Boyutu: %d\n\n", new_size);
		
		*size = new_size;
		
		return 1;
	}
	
	return 0;
}

int main() {
	int size, number, b, i = 0, j; 
	int *a;
	
	printf("Enter the size: ");
	scanf("%d", &size);
	
	a = (int*)malloc(size * sizeof(int));
	
	while (1) {
		printf("Enter a number: ");
		scanf("%d", &number);
		
		if (number == -1) {
			break;
		}
		
		*(a + i) = number;
		i++;
		
		if ( i > size) {
			b = increase(a, &size);
			
			if (b == 0) {
				printf("Bellek ayrilmadi.");
				break;
			}
		}
	}
	
	printf("Entered Array: \n");
	
	for (j = 0; j < i; j++) {
		printf("%d ", a[j]);
	}
	
	free(a);
	
	return 0;
} 
