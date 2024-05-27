#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int number;
    int age;
};

void changeValue(struct Student *p) {
    strcpy(p->name, "Deniz Berk Demir");
    p->number = 41;
    p->age = 7;
}

void show(struct Student *p) {

    printf("Student's info:\n");
    printf("Name: %s\n", p->name);
    printf("Number: %d\n", p->number);
    printf("Age: %d", p->age);
}

int main() {

    struct Student student1 = {"Nuri Bugra Demir", 88, 21};

    changeValue(&student1);

    show(&student1);

    return 0;
} 