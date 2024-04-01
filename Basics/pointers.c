#include <stdio.h>

// Basic pointer usage
/*
int main() {
	
	int a = 5, *ap;
	float b = 3.2, *bp;
	double c = 3.412, *cp;
	char d = 'a', *dp;
	
	int numbers[5] = {1,2,3,4,5};
	int *arrayp;
	
	// Identify the addresses of the variables
		
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	
	arrayp = &numbers[1];
	
	printf("%d integer value in %u address.\n", *ap, ap);
	printf("%.2f float value in %u address.\n", *bp, bp);
	printf("%.4lf double value in %u address.\n", *cp, cp);
	printf("%c char value in %u address.\n", *dp, dp);
	
	printf("%d element in an array in %u address.\n", *arrayp, arrayp);
	
	return 0;
}
*/

int main() {
	
	int i, j = 1;
	int *jp1, *jp2 = &j;
	
	jp1 = jp2;
	
	i = ++(*jp2); 
	
	/*Since jp1 and jp2 pointers point to the same place, changing 
	only the *jp2 content will also change the value pointed by jp1 pointer.*/
	
	*jp2 = *jp1 + i;
	
	printf("i = %d, j = %d, *jp1 = %d, *jp2 = %d\n", i, j, *jp1, *jp2);
	
	return 0;
}
