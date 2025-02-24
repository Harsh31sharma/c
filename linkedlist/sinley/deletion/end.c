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
struct node*enddeletin (struct node*head , int index){
    struct node * ptr = head ;
    
    while(ptr->next->next!=NULL ){
        ptr =ptr->next;
    }
    
    ptr->next = NULL;
    free(ptr->next);
    
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
printf("before deletion ::::\n");
    traversal (head);
    int node = 2;
    head = enddeletin (head,node);
printf("after deletion ::::\n");
    traversal (head);
    return 0;}