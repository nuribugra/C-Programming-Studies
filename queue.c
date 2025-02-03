#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double* items;
    int head, tail;
    int capacity;
} queue;

queue* createQueue(int capacity) {
    queue* newQueue = (queue*) malloc(sizeof(queue));

    newQueue->items = (double*) malloc(capacity * sizeof(double));
    newQueue->head = 0;
    newQueue->tail = -1;
    newQueue->capacity = capacity;

    return newQueue;
}

void enqueue(queue* currentQueue, double item) {
    int newSlot = (currentQueue->tail + 1) % currentQueue->capacity;

    if (currentQueue->tail != -1) {
        if (newSlot == currentQueue->head) {
            printf("The queque is full.");
            return;
        }
    }

    currentQueue->tail = newSlot;
    currentQueue->items[newSlot] = item;
}

double dequeue(queue* currentQueue) {
    if (currentQueue->tail == -1) {
        printf("The queue is empty.");
        return -INFINITY;
    }

    double item = currentQueue->items[currentQueue->head];

    if (currentQueue->tail == currentQueue->head) {
        currentQueue->tail = -1;
        currentQueue->head = 0;
    } else {
        currentQueue->head = (currentQueue->head + 1) % currentQueue->capacity;
    }

    return item;
}

int main() {

    queue* myQueue = createQueue(3);

    enqueue(myQueue, 0.3);
    enqueue(myQueue, 0.25);
    enqueue(myQueue, 323);

    dequeue(myQueue);

    while (myQueue->tail != -1) {
        printf("%.2lf\n", dequeue(myQueue));
    }

    return 0;
}