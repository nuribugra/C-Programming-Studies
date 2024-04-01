#include <stdio.h>
#include <string.h>

char *return_pointer(char *p, int index) {
	int length;
	
	length = strlen(p);
	
	if (index > length) {
		return NULL; // return 0;
	} else {
		return p + index;
	}
	
}

int main() {
	char text[] = "software";	
	char *p;
	
	p = return_pointer(text, 4);
	
	if (p == NULL) {
		printf("Pointer NULL");
	} else {
		printf("%s", p);
	}
	
	return 0;
}
