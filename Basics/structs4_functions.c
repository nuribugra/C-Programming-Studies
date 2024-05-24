#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int number;
};

void show(struct Student a) {
    printf("Student's info: %s %d %d", a.name, a.age, a.number);
}

struct Student giveInfo() {
    struct Student new;

    printf("Enter the student's info:\n");
    scanf("%s %d %d", new.name, &new.age, &new.number);

    return new;
}

int main() {

    struct Student student1 = giveInfo();

    show(student1);

    return 0;
}