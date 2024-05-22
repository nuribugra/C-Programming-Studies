// Nested Structs 
#include <stdio.h> 
#include <string.h> // strcpy()

// Nested structs are structs that are declared inside another struct. 

struct Address {
    char street[50];
    char city[50]; 
    char state[50]; 
    char zip[10]; // "postal code"
};

struct Student {
    char name[50];
    int age;
    int number;
    struct Address address; // Nested struct
};

int main() {

    struct Student student1; // Declare a struct variable

    strcpy(student1.name, "Nuri Bugra Demir");
    student1.age = 21;
    student1.number = 88;

    strcpy(student1.address.street, "123 Main Street");
    strcpy(student1.address.city, "Izmir");
    strcpy(student1.address.state, "Turkey");
    strcpy(student1.address.zip, "35000");

    printf("Name:    %-48s \n", student1.name);
    printf("Age:     %-48d \n", student1.age);
    printf("Number:  %-48d \n", student1.number);
    printf("Address: %-48s \n", student1.address.street);
    printf("City:    %-48s \n", student1.address.city);
    printf("State:   %-48s \n", student1.address.state);
    printf("Zip:     %-48s \n", student1.address.zip);

    return 0;
}