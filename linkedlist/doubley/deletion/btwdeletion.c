#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next ;
    struct node *pev ;
};

void traveral(struct node *head){
while (head != NULL){
    printf("%d\n", head->data);
    head = head->next;
}}

struct node* dobdeletion(struct node*head, int index )
{
    struct node*ptr = head;
    int i = 1;
    while (i!=index){
        ptr = ptr -> next;
        i++;
    }
    struct node* delete = ptr->next;
    ptr->next = ptr->next -> next ;
    ptr->next -> pev = ptr ;
    free (delete);
    return head;

    
    }

int main(){
struct node * head = (struct node*) malloc(sizeof(struct node));
struct node * second = (struct node*) malloc(sizeof(struct node));
struct node * third = (struct node*) malloc(sizeof(struct node));
struct node * forth = (struct node*) malloc(sizeof(struct node));

head -> data = 10;
head -> next = second;
head-> pev = NULL;

second -> data = 20 ;
second -> next = third;
second-> pev = head;

third-> data = 30;
third-> next = forth;
third-> pev = second;

forth -> data = 40 ;
forth-> next = NULL;
forth-> pev = third;
printf("doubley linked list traversal:\n");
//call the traversal
traveral (head);
int index  = 2;
//call  delete the node at the 1st position
head = dobdeletion(head , index);
printf("doubley linked list after delete:\n");
// traversal after the delete
traveral (head);

return 0;
}