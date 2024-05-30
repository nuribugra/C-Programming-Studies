#include <stdio.h>
#include <stdlib.h>

int main() {
    char fileName[81], fileContent[256];
    FILE *filePtr;

    printf("Enter the file name: ");
    gets(fileName); // gets() is used to read strings with spaces. scanf() can't read strings with spaces.

    filePtr = fopen(fileName, "r");

    if(filePtr == NULL) {
        printf("File could not be opened\n");
        exit(0);
    }

    while(fgets(fileContent, 256, filePtr) != NULL) {
        puts(fileContent); // puts() is used to print strings with spaces. printf() can't print strings with spaces.
    }

    printf("Process completed\n");
    fclose(filePtr);

    return 0;
}
