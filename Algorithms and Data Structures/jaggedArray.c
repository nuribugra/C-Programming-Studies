#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** initJaggedArray(int rows, int a, int b, int* rowSizes) {
    srand(time(0));

    int** jaggedArray;
    int i, j;

    jaggedArray = (int**) malloc(rows * sizeof(int));

    for (i = 0; i < rows; i++) {
        int randomRowSize = rand() % (b - a) + a; // Fisher-Yates shuffle algorithm
        rowSizes[i] = randomRowSize;

        jaggedArray[i] = (int*) malloc(randomRowSize * sizeof(int));

        for (j = 0; j < randomRowSize; j++) {
            jaggedArray[i][j] = rand() % (b - a) + a;
        }
    }

    return jaggedArray;
}

void printArray(int rows, int** array, int* rowSizes) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rowSizes[i]; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int* rowSizes = (int*) malloc(rows * sizeof(int));
    int** myArray = initJaggedArray(rows, 1, 10, rowSizes); // using ** because of rows and columns

    printArray(rows, myArray, rowSizes);

    // Cleaning the memory

    for (i = 0; i < rows; i++) {
        free(myArray[i]);
    }

    free(myArray);
    free(rowSizes);

    return 0;
}