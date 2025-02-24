#include<stdio.h>
#include <stdlib.h>
struct node 
{
    struct node* left;
    int data;
    struct node* right;
};
void pre(struct node*ptr){
    if (ptr!=NULL){
        printf("%d\n",ptr->data);
        pre(ptr->left);    
        pre(ptr->right);  
          }
}
void in(struct node*ptr){
    if (ptr!=NULL){
        pre(ptr->left);  
        printf("%d\n",ptr->data);
        pre(ptr->right);  
          }
}
void post(struct node*ptr){
    if (ptr!=NULL){
        pre(ptr->left);    
        pre(ptr->right);  
        printf("%d\n",ptr->data);
          }}
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
    printf("preorder tree\n");
    pre(root);
    printf("inorder tree\n");
    in(root);
    printf("postorder tree\n");
    post(root);
    return 0;
}