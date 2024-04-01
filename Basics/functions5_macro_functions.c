#include <stdio.h>
#define globeArea(r) 3.14 * r*r

int main() {
	float r, area;
	
	printf("Enter the radius: ");
	scanf("%f", &r);
	
	area = globeArea(r);
	
	printf("Globe Area: %f", area);
	
	return 0;
}
