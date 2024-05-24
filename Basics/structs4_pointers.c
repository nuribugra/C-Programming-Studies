#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    int number;
};


int main() {
    struct Student student1;
    struct Student *pointer;

    strcpy(student1.name, "Nuri Bugra Demir");
    student1.age = 21;
    student1.number = 88;

    pointer = &student1;

    printf("%s %d %d", pointer->name, pointer->age, pointer->number);


    return 0;
}