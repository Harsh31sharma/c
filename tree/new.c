#include<stdio.h>
#include <stdlib.h>
int lefth;
int righth;
struct node 
{
    struct node* left;
    int data;
    struct node* right;
};

int height(struct node*ptr){
    if(ptr!=NULL){
       int lDepth = height(ptr->left);
    int rDepth = height(ptr->right);

    return (lDepth > rDepth ? lDepth : rDepth) + 1;
    }
}
struct node* newnode(int data) { 
    struct node* node =(struct node*) malloc(sizeof(struct node));
  
    node->data = data;
    node->left = NULL;
    node->right = NULL;  
    return node;
}
int main () {
     struct node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    
    printf("Max height\n");
    printf("%d", height(root));
    return 0;
}