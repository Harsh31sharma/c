#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

// Function to check if the stack is empty
int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

// Function to check if the stack is full
int isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}

// Push function
void push(struct stack *ptr, int val) {
    if (isFull(ptr)) {
        printf("Stack overflow: %d cannot be pushed onto the stack\n", val);
    } else {
        ptr->arr[++ptr->top] = val;
        printf("%d pushed onto the stack\n", val);
    }
}

// Pop function
int pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack underflow: cannot pop from the stack\n");
        return -1; // Indicating an error
    } else {
        return ptr->arr[ptr->top--]; // Return the popped value
    }
}

// Peek function
int peek(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack is empty: cannot peek\n");
        return -1; // Indicating an error
    } else {
        return ptr->arr[ptr->top];
    }
}

// Print stack function
void printStack(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= ptr->top; i++) {
            printf("%d ", ptr->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int val;
    // Creating stack using array
    struct stack *s = malloc(sizeof(struct stack));
    s->size = 100;
    s->top = -1;
    s->arr = (int*) malloc(s->size * sizeof(int));
    printf("Stack has been created\n");

    while (1) {
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Peek\n");
        printf("4: Print Stack\n");
        printf("5: Quit\n");
        printf("Enter your choice (1-5): ");
        int choice;
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter data item: ");
                scanf("%d", &val);
                push(s, val);
                break;
            case 2:
                val = pop(s);
                if (val != -1) {
                    printf("%d popped from the stack\n", val);
                }
                break;
            case 3:
                val = peek(s);
                if (val != -1) {
                    printf("Top element is: %d\n", val);
                }
                break;
            case 4:
                printStack(s);
                break;
            case 5:
                free(s->arr);
                free(s);
                exit(0);
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}
