#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int number;
};

int main() {
    int i;

    struct Student students[3]; // Array of structs

    for (i = 0; i < 3; i++) {
        printf("Enter the informations of student %d\n", i + 1);
        scanf("%s", students[i].name);
        scanf("%d", &students[i].age);
        scanf("%d", &students[i].number);
    }

    for (i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Number: %d\n", students[i].number);
    }

    return 0;
}