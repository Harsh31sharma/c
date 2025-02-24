#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
   struct node*next ;
};

// fun of traversal of linked list
void traversal(struct node*ptr){
    while (ptr != NULL)
    {printf ("Element: %d\n", ptr->data);
   ptr = ptr->next;
   }
}
// fun of insertion at the 1st node of linked list
struct node * linkedinsert(struct node*head , int data){
struct node * newnode = (struct node*) malloc(sizeof(struct node));
  newnode->data =data;
  newnode->next= head;
  head = newnode;
  return newnode;

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

  //intialize at first;
//   struct node * newnode = (struct node*) malloc(sizeof(struct node));
//   newnode->data = 10;
//   newnode->next= head;
//   head = newnode;
int data = 19;
 head = linkedinsert(head ,data ); // Insertion using function

  printf("after intialization at first position\n");
  traversal(head);


    return 0 ;
}