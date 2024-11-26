#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef unsigned long long int uint64;

uint64* createArray(uint64 n, uint64 a, uint64 b) {
    if (a >= b) {
        return NULL;
    }

    srand(time(0));
    
    uint64 i;

    uint64* array = (uint64*) malloc(n * sizeof(uint64));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        array[i] = rand() % (b - a) + a;
    }

    return array;
}

void printArray(uint64 n, uint64* array) {
    uint64 i;

    for (i = 0; i < n; i++) {
        printf("%llu ", array[i]);
    }
    printf("\n");
}

void appendToArray(uint64** array, uint64* n, uint64 value) {

    *array = (uint64*) realloc(*array, (*n + 1) * sizeof(uint64));
    if (*array == NULL) {
        printf("Memory reallocation failed!\n");
        exit(1);
    }

    (*array)[*n] = value;
    (*n)++;
}

void insertToArray(uint64** array, uint64* n, uint64 value, uint64 index) {
    uint64 i;

    if (index > *n) {
        printf("Index out of bounds!\n");
        return;
    }

    *array = (uint64*) realloc(*array, (*n + 1) * sizeof(uint64));
    if (*array == NULL) {
        printf("Memory reallocation failed!\n");
        exit(1);
    }

    // Slide to right
    for (i = *n; i > index; i--) {
       (*array)[i] = (*array)[i - 1];
    }

    (*array)[index] = value;
    (*n)++;
}

void deleteFromArray(uint64** array, uint64* n, uint64 value) {
    uint64 i, j;

    for (i = 0; i < *n; i++) {
        if ((*array)[i] == value) {

            // Slide to left
            for (j = i; j < *n - 1; j++) {
                (*array)[j] = (*array)[j + 1];
            }

            (*n)--;

            *array = (uint64*) realloc(*array, (*n) * sizeof(uint64));
            if (*array == NULL && *n > 0) {
                printf("Memory reallocation failed!\n");
                exit(1);
            }

            i--;
        }
    }
}

int main(){
    uint64 n;

    printf("Enter the size of the array: \n");
    scanf("%llu", &n);

    uint64* myArray = createArray(n, 1, 100);
    printArray(n, myArray);

    appendToArray(&myArray, &n, 35);
    printArray(n, myArray);

    insertToArray(&myArray, &n, 666, 3);
    printArray(n, myArray);

    deleteFromArray(&myArray, &n, 666);
    printArray(n, myArray);

    free(myArray);

    return 0;
}