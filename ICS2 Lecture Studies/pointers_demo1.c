#include <stdio.h>

float calculate(int a, int b, int c) {
	
	// a! / b*c
	
	int factorial = 1, i;
	
	for (i = 1; i <= a; i++) {
		factorial *= i;
	}
	
	return (float)(factorial / (b * c));
}

void max_result(float *resultp, int *ap, int *bp, int *cp) {
	static int a3, b3, c3;
	static float enb;
	static int k = 0;
	
	k++;
	
	if (k == 1) {
		enb = *resultp; 
		a3 = *ap; 
		b3 = *bp; 
		c3 = *cp;
	}
	
	if (*resultp >= enb) {
		enb = *resultp; 
		a3 = *ap; 
		b3 = *bp; 
		c3 = *cp;
	}
	
	if (k == 5) {
		enb = *resultp; 
		a3 = *ap; 
		b3 = *bp; 
		c3 = *cp;
	}
}

int main() {
	int a, b, c, i;
	float result;
	
	for (i = 0; i <= 5; i++) {
		printf("Enter a number: ");
		scanf("%d", &a);
		
		printf("Enter a number: ");
		scanf("%d", &b);
		
		printf("Enter a number: ");
		scanf("%d", &c);
		
		result = calculate(a,b,c);
		
		printf("Calculation: %f\n", result);
		
		max_result(&result,&a,&b,&c);
	}
	
	printf("Result: %f, a = %d, b = %d, c = %d", result, a, b, c);
	
	
	return 0;
}
