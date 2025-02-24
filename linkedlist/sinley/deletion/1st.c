#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node* next ;
};
void traversal(struct node*ptr){
    while (ptr != NULL)
    {printf ("Element: %d\n", ptr->data);
   ptr = ptr->next;
   }
}
struct node*deletin (struct node*head){
    struct node * ptr = head ;
    head=head->next;
    free(ptr);
    return head;

    

}
int main (){
    struct node*head = (struct node*) malloc (sizeof(struct node));
    struct node*second = (struct node*) malloc (sizeof(struct node));
    struct node*third = (struct node*) malloc (sizeof(struct node));

    head->data = 1;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 123;
    third->next = NULL;
    traversal (head);
    head = deletin (head);

    traversal (head);

}
