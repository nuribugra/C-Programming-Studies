#include <stdio.h>

int main(int argc, char **argv) {
    // Dosya işaretçisi
    FILE *filePointer;

    // Komut satırından girilen argüman sayısı yeterli mi kontrolü
    if (argc < 3) {
        printf("Usage: %s <filename> <character>\n", argv[0]);
        return 1;
    }

    // Dosyayı okuma modunda aç
    filePointer = fopen(argv[1], "r");
    if (filePointer == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Karakter değişkeni ve sayaç değişkeni
    char currentCharacter;
    int characterCount = 0;

    // Dosyayı karakter karakter oku ve belirtilen karakteri say
    while ((currentCharacter = getc(filePointer)) != EOF) {
        if (currentCharacter == argv[2][0]) {
            characterCount++;
        }
    }

    // Dosyayı kapat
    fclose(filePointer);

    // Sonuçları ekrana yazdır
    printf("File name: %s\nCharacter: %c\nCount: %d\n", argv[1], argv[2][0], characterCount);

    return 0;
}
