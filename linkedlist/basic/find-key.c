#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node*next;
};

void traversal(struct node* head , int key){
    struct node*ptr = head;
    while(ptr !=NULL){
        if (ptr->data == key){
            printf("yes");
            return;
        }
        ptr = ptr->next;
    }

    printf("no");
    return;
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

    printf("Enter a key to search ");
    int key;
    scanf("%d", &key);


    traversal(head , key);
    return 0;
}