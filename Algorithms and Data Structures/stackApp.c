#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct {
     double* data;
     int top;
     int capacity;
} stack;


stack *createStack(int capacity) {
    double* stackData = (double*) malloc (sizeof(double) * capacity);

    stack* newStack = (stack*)malloc(sizeof(stack));
    
    newStack->data = stackData;
    newStack->top = 0;
    newStack->capacity = capacity;

    return newStack;
}

void push(stack* currentStack, double value) {

    if (currentStack->top == currentStack->capacity) {
        printf("Stack is full!\n");
        return;
    }

    currentStack->data[currentStack->top] = value; // data is a array of doubles data[0], data[1], data[2], ...

    currentStack->top += 1;
}

double peek(stack* currentStack) {
    // Stack is empty?
    if(currentStack->top == 0)
        return -INFINITY;

    double data = currentStack->data[currentStack->top - 1];

    return data;
}

double pop(stack* currentStack) {
    double data = peek(currentStack);

    if (data != -INFINITY)
        currentStack->top -= 1;
    
    return data;
}

int main() {

    int capacity;
    printf("Enter the maximum capacity of the stack: ");
    scanf("%d", &capacity);

    stack* myStack = createStack(capacity);

    double* array = (double*) malloc(sizeof(double) * capacity);

    int i;

    srand(time(0)); // Seed for random number generation

    for (i = 0; i < capacity; i++) {
        array[i] = (double)(rand() % 101) / 100;
        printf("%.2f ", array[i]);
        push(myStack, array[i]);
    }
    printf("\n");

    while (myStack->top > 0) {
        printf("%.2lf ", pop(myStack));
    }


    return 0;
}