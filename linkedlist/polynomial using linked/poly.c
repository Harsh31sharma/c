#include <stdio.h>
#include <stdlib.h>

struct node {
    int coefficient;
    int exponent;
    struct node *next;
};

// Function to insert a new node into the linked list

void insert(struct node **head, int coefficient, int exponent) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;

    // Check whether the list is empty
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Traverse to the end of the list and add the new node
    struct node *ptr = *head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = newNode;
}

// Function to display the polynomial
void display(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d*X^%d", ptr->coefficient, ptr->exponent);
        if (ptr->next != NULL) {
            printf(" + ");
        }
        ptr = ptr->next;
    }
    printf("\n");
}


struct node * add (struct node * poly1 , struct node * poly2){
    struct node * result = NULL;

    while(poly1 != NULL && poly2 != NULL){
        //traverse both polynomial
        if (poly1->exponent > poly2->exponent){
            insert(&result , poly1->coefficient , poly1->exponent);
            poly1 = poly1->next;
        }
        else if (poly1->exponent < poly2->exponent){
         insert(&result , poly2->coefficient , poly2->exponent);
            poly2 = poly2->next;   
        }
        else {
            int sum = poly1->coefficient + poly2->coefficient ;
            if (sum != 0){
            insert(&result , sum , poly1->exponent);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    while(poly1!=NULL){
    insert(&result , poly1->coefficient , poly1->exponent);
        poly1 = poly1->next;
    }
    while (poly2 != NULL){
    insert(&result , poly2->coefficient , poly2->exponent);
       poly2 = poly2->next;   
    }
    return result;
}



int main() {
    struct node *poly1 = NULL;
    struct node *poly2 = NULL;
    struct node *sum = NULL;

    // Insert terms into the first polynomial
    insert(&poly1, 3, 4);
    insert(&poly1, 8, 2);
    insert(&poly1, 6, 1);
    insert(&poly1, 8, 0);

    // Display the polynomial
    printf("Polynomial 1: ");
    display(poly1);
  
//   POLY2
    insert(&poly2, 4,3);
    insert(&poly2, 8, 2);
    insert(&poly2, 6, 1);
    insert(&poly2, 8, 0);

    // Display the polynomial
    printf("Polynomial 2: ");
    display(poly2);

    sum = add(poly1 , poly2);

    printf ("Sum :");
    display(sum);
    return 0;
}
