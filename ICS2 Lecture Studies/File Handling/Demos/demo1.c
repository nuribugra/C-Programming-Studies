#include <stdio.h>

int main() {
    FILE *f;
    // File should be in the same directory as the program

    f = fopen("deneme.txt", "r");

    if (f == NULL) {
        printf("File could not be opened\n");
        getchar();

        return -1;
    }

    while (!feof(f)) {
        printf("%c", fgetc(f));
    }

    fclose(f);
    getchar();

    return 0;
}