// Stack program using DMA

#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int top;
    int capacity;
    int* array;
} Stack;


Stack* createStack(int initialCapacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = initialCapacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}


int isFull(Stack* stack) {
    return stack->top == stack->capacity - 1;
}


int isEmpty(Stack* stack) {
    return stack->top == -1;
}
                                                    


void resizeStack(Stack* stack) {
    stack->capacity *= 2; 
    stack->array = (int*)realloc(stack->array, stack->capacity * sizeof(int));
    if (!stack->array) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
}


void push(Stack* stack, int item) {
    if (isFull(stack)) {
        resizeStack(stack);
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}


int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1; 
    }
    return stack->array[stack->top--];
}


int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1; 
    }
    return stack->array[stack->top];
}


void freeStack(Stack* stack) {
    free(stack->array);
    free(stack);
}

int main() {
    Stack* stack = createStack(2); 
    push(stack, 10);
    push(stack, 20);
    push(stack, 30); 

    printf("%d popped from stack\n", pop(stack));
    printf("Top element is %d\n", peek(stack));

    freeStack(stack); 
    return 0;
}
