#include<stdio.h>
#include<stdlib.h>
#define max 5
typedef struct {
    int q[max];
    int front,rear;
}queue;
void enqueue(queue *q,int x){
    if(q->rear==max-1){
        printf("queue is full\n");
        return ;
    }
    if(q->front==-1){
     q->front=0;
    }
    q->rear+=1;
    q->q[q->rear]=x;
}
void dequeue(queue *q){
    if(q->front > q->rear || q->front==-1){
        printf("queue is empty");
        return;
    }
if(q->front==q->rear){
    q->front=q->rear=-1;
}else{
    printf("deleted:%d\n",q->q[q->front]);
    q->front++;
}
}
void display(queue *q){
    if(q->front==-1 ||q->front>q->rear){
        printf("empty");
        return;
    }
    for(int i=q->front;i<=q->rear;i++){
        printf("%d ",q->q[i]);

    }
    printf("\n");
}
void main(){
    queue q;
    q.front=-1;
    q.rear=-1;
    int ch,data;
    while(1){
        printf("---MENU---\n1.enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("enter the choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter the data");
            scanf("%d",&data);
            enqueue(&q,data);
            break;
            case 2:
            dequeue(&q);
            break;
            case 3:
            display(&q);
            break;
            case 4:
            exit(0);
            default:
            printf("invalid choice\n");

        }

    }
}