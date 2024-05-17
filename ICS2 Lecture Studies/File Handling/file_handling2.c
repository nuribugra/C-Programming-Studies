#include <stdio.h>
#include <stdlib.h>

int main() {
    char sss[81], string[256], c;
    FILE *di;

    printf("Enter the file name: ");
    gets(sss);

    di = fopen(sss, "r");

    if(di == NULL) {
        printf("File could not be opened\n");
        exit(0);
    }

    while(fgets(string, 256, di) != NULL) {
        puts(string);
    }

    printf("Process completed\n");
    fclose(di);

    return 0;
}
