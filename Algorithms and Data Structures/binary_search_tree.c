#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int* createRandomArray (int n, int a, int b) {
    if(n <= 0 || b <= 0) {
        return NULL;
    }

    int* array = (int*) malloc(n * sizeof(int));

    int i;
    for (i = 0; i < n; i++) {
        array[i] = rand() % (b - a) + a;
    }

    return array;
}

void printArray(int* array, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return;
}

int BST_left(int i) {
    return i * 2 + 1;
}

int BST_right(int i) {
    return i * 2 + 2;
}

void addBST(int* tree, int value) {
    int i = 0;

    while (tree[i] != 0) {
        if (value < tree[i]) {
            i = BST_left(i);
        } else {
            i = BST_right(i);
        }
    }

    tree[i] = value;
    return;
}

int searchBST(int* tree, int value) {
    int i = 0;

    while (tree[i] != value && tree[i] != 0) {
        if (value < tree[i]) {
            i = BST_left(i);
        } else {
            i = BST_right(i);
        }
    }

    if (tree[i] == value) {
        return i;
    } else {
        return -1;
    }
}

int* createBSTfromArray(int* array, int n) {
    int* tree = (int*)calloc((int)pow(2,n), sizeof(int));

    int i;
    for (i = 0; i < n; i++) {
        addBST(tree, array[i]);
    }

    return tree;
}

int searchArray(int* array, int n, int value) {
    int i;

    for(i = 0; i < n; i++) {
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    srand(time(0));

    int* myArray = createRandomArray(n, 1, 100);
    int* tree = createBSTfromArray(myArray, n);

    printArray(myArray, n);
    printArray(tree, (int)pow(2, n));

    printf("\n%d\n", searchBST(tree, 0));

    return 0;
}