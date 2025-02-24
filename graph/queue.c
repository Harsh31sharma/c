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
eneque(&q ,12);
eneque(&q ,4863);
eneque(&q ,67);
for (int i = 0 ; i<q.size ; i++){
    printf ("%d\n", q.arr[i]);
}
printf("the dequeue element %d", dequeue(&q));
    return 0;
}