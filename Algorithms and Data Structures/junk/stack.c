#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	double* data;
	int top;
	int size;
} stack;

void reverseStack(double* myStack) {
	// bunu tamamla
}

stack* createStack (int size) {
	stack* newStack = (stack*) malloc(sizeof(stack));
	
	newStack->data = (double*) malloc(sizeof(double) * size);
	newStack->top = 0;
	newStack->size = size;
	
	return newStack;
}

void push(stack* myStack, double item) {
	if (myStack->top == myStack->size) {
		printf("Stack is full..\n");
		return;
	} else {
		myStack->data[myStack->top] = item;
		myStack->top += 1;
	}
	
	
	return;
}

double peek(stack* myStack) {
	if (myStack->top == 0) {
		printf("Stack is empty..\n");
		return NAN;
	} 
	
	return myStack->data[myStack->top - 1];
}

double pop(stack* myStack) {
	double item = peek(myStack);
	myStack->top -= 1;
	
	return item;
}

void stackPrintBackdoor(stack* myStack) {
	int i;
	
	for (i = 0; i < myStack->top; i++) {
		printf("%.2f ", myStack->data[i]);
	}
	
	printf("\n");
	
	return;
}

int main() {
	int n;
	
	printf("Enter the size of the stack: ");
	scanf("%d", &n);
	
	stack* myStack = createStack(n);
	
	push(myStack, 42.2);
    push(myStack, 13.5);
    push(myStack, 9.8);
	
	stackPrintBackdoor(myStack);
	
	printf("Top element: %.2f\n", peek(myStack));
	
	printf("Popped element: %.2f\n", pop(myStack));
	
    stackPrintBackdoor(myStack);
    
    reverseStack(myStack);
    
    stackPrintBackdoor(myStack);
	
	return 0;
}
