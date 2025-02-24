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
struct node * btwinserstion (struct node * head , int data , int index ){
    struct node *newnode = (struct node *) malloc(sizeof(struct node));
    struct node * temp = head;
    int i = 0;
    while (i != index-1 ){
        temp = temp->next;        i++;
    }
    newnode->next= temp->next;
    temp -> next = newnode;
    newnode->data = data;
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
int data = 31;
int index =3;
traversal(head);
//function
  head = btwinserstion ( head ,  data ,  index );
traversal(head);


    return 0 ;
}