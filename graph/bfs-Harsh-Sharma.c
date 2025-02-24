#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size ;
    int * arr;
    int f ;
    int r;
};
int isempty(struct queue*q){
    if (q->f ==- 1){
        return 1 ;
    }
}
int isfull (struct queue*q ){
    if (q->r == (q->size-1)){
        return 1;
    }
}
void eneque (struct queue *q , int val){
    if (isfull(q)==1){
        printf ("overflow");
    }
    else if (q->f==-1 && q->r==-1 ){
        q->f=q->r = 0;
        q->arr[q->r]= val;
    }
    else{
        q->r += 1 ;
        q->arr[q->r] = val;

    }


}
int dequeue (struct queue *q){
    if (isempty(q)==1){
        printf("Queue under flow");
    }
    int temp = q->arr[q->f];
    q->f = q->f++;
    return temp;
}

int main (){
struct queue q;
q.size = 100;
q.r=q.f = -1;
q.arr = (int *) malloc(q.size*sizeof (int));
//BFS implementation 
int u ; 
int i = 0;// source node
int visited[7]={0,0,0,0,0,0,0};
int arr[7][7] ={
    {0,1,1,1,0,0,0},
    {1,0,1,0,0,0,0},
    {1,1,0,1,1,0,0},
    {1,0,1,0,1,0,0},
    {0,0,1,1,0,1,1},
    {0,0,0,0,1,0,0},
    {0,0,0,0,1,0,0},
};
printf ("%d\n", i);
visited[i]=1;
eneque(&q , i);// enqueue for expolaration
while (!isempty(&q)){
    int u = dequeue(&q);
    for (int j = 0 ; j <7 ; j++){
        if (arr[u][j]==1 && visited[j]==0){
            printf ("%d\n", j );
            visited[j] = 1 ; 
            eneque(&q , j);
        }
    }
}
    return 0;
}