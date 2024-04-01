#include <stdio.h>

void change_value(int a, int b) { // Local variables
	int temp;
	
	temp = a;
	
	a = b;
	b = temp;
	
	printf("The first value is %d\nThe second value is %d\n", a, b); 	
}


int main() {
	
	int x = 5, y = 6;
	
	change_value(x,y);
	
	printf("The first value is %d\nThe second value is %d", x, y);
	
	// In the main function, values didn't change! 
	// Only values copied! (Call by value)
	
	return 0;
}
