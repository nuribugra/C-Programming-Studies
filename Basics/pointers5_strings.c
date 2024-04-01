#include <stdio.h>
#include <string.h>

int string_length(char *p) {
	int length = 0, i;
	
	for (i = 0; p[i] != '\0'; i++) {
		length++;
	}
	
	return length;
}

int main() {
	
	char text[] = "bugra";
	
	printf("The length of the text is %d", string_length(text));
	
	return 0;
}
