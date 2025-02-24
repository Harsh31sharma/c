#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * next;
};

// for display the linked list
void display(struct node**head){
    if (*head == NULL){
        printf("No linked list");
    }
    struct node * temp = *head;
    int i =1;
    while (temp !=NULL){
        printf ("the %d node of linked list is %d\n" ,i,temp->data);
        i++;
        temp = temp->next;

    }
    

}


// for dyanamically allocation
void insertNode (struct node**head , int data){
    struct node * newNode = malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;
    if (*head == NULL){
        *head = newNode;
        return;
    }

    struct node * temp = *head;
    while (temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = newNode;    
}


struct node* evenodd(struct node *head){
    if (head == NULL) return head;
    if (head->next == NULL) return head;


    struct node * odd = head;
    struct node * even = head->next;
    struct node * evenhead = even;
    struct node * oddhead = odd;
    while(odd->next != NULL && odd->next->next){
        odd->next = odd->next->next;
        odd = odd->next;

        even->next = even->next->next;
        even = even->next;
    }
    odd->next = evenhead;
    printf("After\n");
    return head;
}



int main() {
    struct node * linkedlist = NULL;

    insertNode(&linkedlist , 1);
    insertNode(&linkedlist , 2);
    insertNode(&linkedlist , 3);
    insertNode(&linkedlist , 4);
    insertNode(&linkedlist , 5);
    insertNode(&linkedlist , 6);
    insertNode(&linkedlist , 7);
    display(&linkedlist);
    struct node*LL=evenodd(linkedlist);
    display(&LL);

    return 0;
}