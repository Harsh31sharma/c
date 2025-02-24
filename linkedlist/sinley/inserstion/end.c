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
   struct node * endinsertion (struct node *head , int data){
    struct node * newnode = (struct node *) malloc(sizeof(struct node));

   struct node *temp =head;

   while(temp ->next!= NULL){
    temp=temp->next;
   }
   temp->next = newnode;
   newnode->next = NULL;
   newnode-> data = data;
   return head;


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
int data= 1;
   head =  endinsertion (head , data);
  traversal(head);

    return 0 ;
}