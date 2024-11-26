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

int main(){
    uint64 n;

    printf("Enter the size of the array\n");
    scanf("%llu", &n);

    uint64* myArray = createArray(n, 1, 50);
    printArray(n, myArray);

    free(myArray);


    return 0;
}
