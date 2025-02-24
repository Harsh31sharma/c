#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
   struct node*next ;
};

// traversal of linked list
void traversal(struct node*head){
    struct node*ptr = head;
    printf("%d\n", ptr->data);
    ptr = ptr->next;
    while (ptr!=head)
    {printf ("%d\n", ptr->data);
   ptr = ptr->next;
   } 
}
//circular insertion at starting...
struct node *circularInsert1 (struct node *head, int data){
    struct node * newnode = (struct node *) malloc(sizeof(struct node));
    newnode-> data = data;
    if (head == NULL) { 
        newnode->next = newnode; 
        return newnode; 
    }
    struct node* ptr = head ; 
    ptr = ptr->next ;
    while(ptr->next!=head){
        ptr = ptr->next;
    }
    newnode->next = head; 
    ptr->next = newnode;
    head = newnode;

    return head;




}


int main () {
                          // allocate memory for linked list in heap
    struct node *head = (struct node *) malloc(sizeof(struct node));
    struct node * second = (struct node *) malloc(sizeof(struct node));
    struct node * third = (struct node *) malloc(sizeof(struct node));
    struct node * forth = (struct node *) malloc(sizeof(struct node));
// node first
    head->data = 7 ; 
    head->next = second;
    // node second
    second->data = 17 ; 
    second->next = third;
    // node third
    third->data = 37 ; 
    third->next = forth;
    //node forth
    forth->data = 47 ; 
    forth->next = head;
    printf()
  traversal(head);
int data = -7;
head = circularInsert1(head, data);
traversal(head);
    return 0;
}