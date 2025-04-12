#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void removeVowels(char text[]) {
    int i, j = 0;
    char newText[100];

    for (i = 0; text[i] != '\0'; i++) {
        if (!isVowel(text[i])) {
            newText[j++] = text[i];
        }
    }

    newText[j] = '\0';

    strcpy(text, newText);
}

void reverse(char text[], int length) {
    char temp;
    int i;

    for (i = 0; i < length / 2; i++) {
        temp = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temp;
    }
}

int main() {
    char text[100];

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);


    int length = strlen(text);

    if (text[length - 1] == '\n') {
        text[length - 1] = '\0';
        length--;
    }

    printf("Original: %s\n", text);

    removeVowels(text);

    printf("Without vowels: %s\n", text);
    
    return 0;
}