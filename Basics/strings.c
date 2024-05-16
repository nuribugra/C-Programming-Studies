#include <stdio.h>

// gets(), puts()

int main() {
	char name[10];
	int i;
	
	printf("What is your name?\n");
	gets(name);
	
	printf("Hello %s, how are you today?\n", name);	
	
	for(i = 0; name[i] != '\0'; i++) { // '\0' blank character
		printf("%c\n", name[i]);
	}
	
	return 0;
}
