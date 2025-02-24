#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
   struct node*next ;
};

// traversal of linked list
void traversal(struct node*ptr){
    while (ptr != NULL)
    {printf ("Element-%d\n", ptr->data);
   ptr = ptr->next;
   }
}

int main () {
                          // allocate memory for linked list in heap
    struct node *head = (struct node *) malloc(sizeof(struct node));
    struct node * second = (struct node *) malloc(sizeof(struct node));
    struct node * third = (struct node *) malloc(sizeof(struct node));
// node first
    head->data = 7 ; 
    head->next = second;
    // node second
    second->data = 17 ; 
    second->next = third;
    // node third
    third->data = 37 ; 
    third->next = NULL;

  traversal(head);

    return 0 ;
}
