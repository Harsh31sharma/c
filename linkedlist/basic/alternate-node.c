#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node*next;
};

void traversal(struct node* head){
    int count = 0;
    struct node*ptr = head;

    // WE GET STUCK INTO THE NULL
    // while (ptr!= NULL){
        // printf("%d ", ptr->data);
    //     ptr = ptr->next->next;
    // }

    while (ptr!= NULL){
        if (count%2 == 0){
        printf("%d ", ptr->data);
        }
        ptr = ptr->next;
        count++;

    }
}



int main (){
    struct node*head = malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;

    struct node * second = malloc(sizeof(struct node));
    head->next = second;
    second->data = 20;
    second->next = NULL;

    struct node * third = malloc(sizeof(struct node));
    second->next = third;
    third->data = 30;
    third->next = NULL;

    struct node * fourth = malloc(sizeof(struct node));
    third->next = fourth;
    fourth->data = 40;
    fourth->next = NULL;

    struct node * five = malloc(sizeof(struct node));
    fourth->next = five;
    five->data = 50;
    five->next = NULL;

    printf("Linked list element : ");
    traversal(head);


    return 0;
}