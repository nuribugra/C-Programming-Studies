#include <stdio.h>
#include <string.h>

/*
int return_length(char name[]) {
	int i, length = 0;
	
	// '\0' -> Null
	for(i = 0; name[i] != '\0'; i++) {	
		length++;
	}
	return length;
}

// This function is the f strlen() function that consist in string.h library.
background o
int main() {
	
	char name[] = "Burak";
	
	printf("%d", return_length(name));
	
	
	return 0;
}
*/


// Algorithm Knowledge
void reverse(char array[]) {
	int i, length, temp;
	
	length = strlen(array);
	
	for (i = 0; i < length / 2; i++) {
		temp = array[i];
		
		array[i] = array[length - 1 - i]; // length - 1  -> index (index - i)
		
		array[length - 1 - i] = temp;
	}
}

int main() {
	
	char text[200];
	
	printf("Enter a text: ");
	scanf("%s", text);
	
	reverse(text);
	
	printf("%s", text);
	
	return 0;
}
