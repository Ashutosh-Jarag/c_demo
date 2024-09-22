#include <stdio.h>
#include <stdlib.h>

#define MAX 5  

int stack[MAX], top = -1;


void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto stack\n", value);
    }
}


void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop from an empty stack\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}


void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

int isEmpty() {
    return top == -1;
}


int isFull() {
    return top == MAX - 1;
}


int main() {
    int choice, value;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Check if Empty\n5. Check if Full\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                if (isEmpty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack is not empty\n");
                }
                break;
            case 5:
                if (isFull()) {
                    printf("Stack is full\n");
                } else {
                    printf("Stack is not full\n");
                }
                break;
            case 6:
                exit(0);  
            default:
                printf("Invalid choice, please try again\n");
        }
    }

    return 0;
}
