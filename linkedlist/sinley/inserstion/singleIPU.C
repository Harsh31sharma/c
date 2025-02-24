#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
   struct node* next ;
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

int a,b,c ;
scanf("%d", &a );r
scanf("%d", &b);
scanf("%d", &c );
// node first
    head->data = a ; 
    head->next = second;
    // node second
    second->data = b ; 
    second->next = third;
    // node third
    third->data = c ; 
    third->next = NULL;

  traversal(head);

    return 0 ;
}
