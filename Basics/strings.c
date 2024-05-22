#include <stdio.h>

// gets(), puts()

int main() {
	char name[10];
	int i;
	
	printf("What is your name?\n");
	gets(name); // If we want to print a string we can use puts() function. But, in many cases, we use printf() function with %s format specifier.
	
	printf("Hello %s, how are you today?\n", name);	
	
	for(i = 0; name[i] != '\0'; i++) { // '\0' blank character
		printf("%c\n", name[i]);
	}
	
	return 0;
}
