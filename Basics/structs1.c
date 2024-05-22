#include <stdio.h>

/*
struct Student {
    char name[20];
    char surname[20];
    int age;
    int number;
};

int main() {
    struct Student student1 = {"Nuri Bugra", "Demir", 21, 88};

    printf("%s %s %d %d", student1.name, student1.surname, student1.age, student1.number);

    return 0;
}
*/

struct Creature {
    int arms;
    int legs;
    int eyes;
    int avrLife;
} human, freak;

int main() {
    human = (struct Creature){2, 2, 2, 80}; //In dev c++ dont have to add (struct Creature).

    printf("%d %d %d %d\n", human.arms, human.legs, human.eyes, human.avrLife);

    freak = human;

    printf("%d %d %d %d", freak.arms, freak.legs, freak.eyes, freak.avrLife);

    return 0;
}