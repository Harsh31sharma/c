#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node* next ;
};
void traversal(struct node*ptr){
    while (ptr != NULL)

    {printf ("node  %d\n", ptr->data);
   ptr = ptr->next;
   }
}
struct node*deletin (struct node*head , int index){
    struct node * ptr = head ;
    int i = 1;
    while ( i != index-1){
        ptr = ptr->next;
        i++;
    }
    struct node* delete = ptr->next;
    ptr->next  = ptr->next->next;
    free(delete);
    return head;

    

}
int main (){
    struct node*head = (struct node*) malloc (sizeof(struct node));
    struct node*second = (struct node*) malloc (sizeof(struct node));
    struct node*third = (struct node*) malloc (sizeof(struct node));
    struct node*fourth = (struct node*) malloc (sizeof(struct node));
    
    head->data = 1;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 121;
    third->next = fourth;
    fourth->data = 123;
    fourth->next = NULL;
    traversal (head);
    int node = 2;
    head = deletin (head,node);

    traversal (head);
    return 0;
}