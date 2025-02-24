#include <stdio.h>
#define MAX 50
int stack[MAX];
int top = -1;

int isFull(){
    return top == (MAX -1);
}

int isEmpty(){
    return top ==-1;
}

void push(int data){
    if (isFull()){
        printf("stack overflow");
        return;
    }
    top +=1;
    stack[top] = data;
    return;
}

int pop (){
    if (isEmpty()){
        printf("stack underflow");
        return -1;
    }
    int temp = stack[top];
    top -=1;
    return temp;
}

int peek(){
    if(isEmpty()){
        printf("stack is empty");
        return -1;
    }
    return stack[top];
}
void print(){
    for (int i = top ; i>=0 ; i--){
        printf("%d " , stack[i]);
    }
}

int main (){

    push(10);
    push(20);
    push(30);
    print();
    int popped = pop();
    printf("\nthe poped element%d\n",popped);
    print();
    return 0;
}