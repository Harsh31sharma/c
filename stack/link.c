#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node *next;
};

// Define the Stack structure
struct Stack {
    struct node *top;
};

// Initialize the stack
void init(struct Stack *stack) {
    stack->top = NULL;
}

// Push an element onto the stack
void push(struct Stack *stack, int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (!newnode) {
        printf("Memory error\n");
        return; // Return if memory allocation fails
    } else {
        newnode->data = data;
        newnode->next = stack->top; // Corrected variable name to `stack`
        stack->top = newnode;       // Corrected variable name to `stack`
    }
}

// Pop an element from the stack
int pop(struct Stack *stack) {
    if (stack->top == NULL) { // Corrected comparison from `=` to `==`
        printf("Stack underflow\n");
        return -1; // Return a special value to indicate stack is empty
    } else {
        int val = stack->top->data;
        struct node *temp = stack->top; // Changed type from `struct Stack*` to `struct node*`
        stack->top = stack->top->next;
        free(temp); // Added missing semicolon
        return val;
    }
}

// Peek at the top element of the stack
int peek(struct Stack *stack) {
    if (stack->top == NULL) { // Corrected comparison from `=` to `==`
        printf("Stack is empty\n");
        return -1; // Return a special value for an empty stack
    }
    return stack->top->data;
}

// Print the stack elements
void print(struct Stack *stack) {
    struct node *current = stack->top; // Use a temporary pointer to traverse the stack
    while (current != NULL) {
        printf("%d ", current->data); // Print the data
        current = current->next;     // Move to the next node
    }
    printf("\n"); // Newline for better output formatting
}

int main() {
    struct Stack st ; // Declare a stack variable
    init(&st);       // Initialize the stack

    push(&st, 10);
    push(&st, 16);
    push(&st, 34);
    push(&st, 30);

    printf("Stack elements: ");
    print(&st); // Print stack after pushing elements

    pop(&st); // Pop the top element

    printf("Stack after popping: ");
    print(&st); // Print stack after popping

    return 0;
}
