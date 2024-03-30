#include <stdio.h> 

int main () {
	int midterm, final;
	float gpa;
	
	printf("Enter the midterm grade: ");
	scanf("%d", &midterm);
	
	printf("Enter the final grade: ");
	scanf("%d", &final);
	
	gpa = (midterm * 0.40) + (final * 0.60);
	
	if (gpa >= 90) {
		printf("You take AA!");
	} else if (gpa >= 80) {
		printf("You take BA!");
	} else if (gpa >= 70) {
		printf("You take BB!");
	} else if (gpa >= 60) {
		printf("You take CB!");
	} else if (gpa >= 50) {
		printf("You take CC!");
	} else if (gpa >= 40) {
		printf("You take DC!");
	} else if (gpa >= 30) {
		printf("You take DD!");
	} else if (gpa >= 20) {
		printf("You failed");
	}
	
	
	return 0;
}
