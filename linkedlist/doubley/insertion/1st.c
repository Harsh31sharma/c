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

struct node* dobinsertion(struct node*head ,int data)
{
    struct node*newnode = (struct node*) malloc(sizeof(struct node));
    newnode-> data=data;
    newnode -> next = head;
    head -> pev = newnode;
    newnode-> pev = NULL;
    head = newnode;
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
traveral (head);
int data = 104;
head = dobinsertion(head , data);
printf("doubley linked list insertion:\n");
traveral (head);

return 0;
}