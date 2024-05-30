#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *pFile;

    srand(time(NULL));

    int i;
    int number = 1 + (rand() % 100); // %100 expression generates a random number between 0 and 99. Adding 1 makes it between 1 and 100. Defaulth "rand()" generates a random number between 0 and RAND_MAX(32767).

    if ((pFile = fopen("letters.txt", "w")) == NULL) {
        printf("File could not be opened.\n");
        return -1;
    }

    for(i = 0; i < number; i++) {
        putc('A' + (rand() % 26), pFile); // 'A' + (rand() % 26) generates a random letter between A and Z.
    }

    fclose(pFile);

    // Opening and reading the file

    if ((pFile = fopen("letters.txt", "r")) == NULL) {
        printf("File could not be read.\n");
        return 0;
    }

    while ((i = getc(pFile)) != EOF) { // EOF: End of file
        putchar(i);
    }

    fclose(pFile);

    return 0;
}