#include <stdio.h>

int main() {
    FILE *fp;
    int ch;
    char c;
    fp = fopen("test1.txt", "w"); // It creates the file if it doesn't exist

    if (fp == NULL) {
        printf("File didn't open for writing");
        return -1;
    } else {
        for (ch = 'a'; ch <= 'z'; ch++) {
            fputc(ch, fp); // It writes the character to the file
        }
        fclose(fp);
    }

    fp = fopen("test1.txt", "r");

    printf("Informations in the file\n");

    while(!feof(fp)) { // It reads the file until the end of the file
        c = fgetc(fp); // It reads the character from the file
        printf("%c\n", c);
    }
    // feof() function returns 1 if the end of the file is reached, otherwise it returns 0
    return 0;
}