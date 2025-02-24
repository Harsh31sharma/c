#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int coefficient;
    int exponent;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int coefficient, int exponent) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertNode(struct Node** head, int coefficient, int exponent) {
    struct Node* newNode = createNode(coefficient, exponent);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the polynomial
void displayPolynomial(struct Node* head) {
    if (head == NULL) {
        printf("0\n");
        return;
    }
    
    while (head != NULL) {
        printf("%dx^%d", head->coefficient, head->exponent);
        head = head->next;
        if (head != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

// Function to add two polynomials
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;

    // Traverse both lists
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exponent > poly2->exponent) {
            insertNode(&result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        } 
        else if (poly1->exponent < poly2->exponent) {
            insertNode(&result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        } 
        else {
            int sum = poly1->coefficient + poly2->coefficient;
            if (sum != 0) {
                insertNode(&result, sum, poly1->exponent);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    // Add remaining terms from poly1 or poly2
    while (poly1 != NULL) {
        insertNode(&result, poly1->coefficient, poly1->exponent);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        insertNode(&result, poly2->coefficient, poly2->exponent);
        poly2 = poly2->next;
    }

    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* sum = NULL;

    // Insert terms into the first polynomial
    insertNode(&poly1, 3, 3); // 3x^3
    insertNode(&poly1, 4, 2); // 4x^2
    insertNode(&poly1, 2, 0); // 2x^0

    // Insert terms into the second polynomial
    insertNode(&poly2, 5, 2); // 5x^2
    insertNode(&poly2, 1, 1); // 1x^1
    insertNode(&poly2, 2, 0); // 2x^0

    // Display both polynomials
    printf("Polynomial 1: ");
    displayPolynomial(poly1);
    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    // Add the two polynomials
    sum = addPolynomials(poly1, poly2);

    // Display the result
    printf("Sum: ");
    displayPolynomial(sum);

    return 0;
}

