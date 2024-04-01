#include <stdio.h>

void change_value(int *a, int *b) {
	int temp;
	
	temp = *a;
	
	*a = *b;
	*b = temp;
}

/*
The locally created pointer variables here point to the address of the x and y variables. 
Therefore, the contents of these pointers are the contents of x and y. 
For this reason, we can easily make the change.
*/

int main() {
	
	int x = 5, y = 8;
	
	change_value(&x, &y);
	
	printf("x: %d, y: %d", x, y);
	
	return 0;
}
