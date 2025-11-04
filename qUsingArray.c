#include<stdio.h>
#include<stdlib.h>
#define max 5
int q[max],front=-1,rear=-1;
void enqueue(int data){
    if(rear==max-1){
        printf("Oueue us full\n");
        return;
    }
    if(front==-1){
        front=0;
    }
    rear+=1;
    q[rear]=data;
}
void deque(){
    if(front>rear || front==-1){
        printf("Queue is empty\n");
        return;
    }
    printf("deleted:%d",q[front]);
    if(front==rear){
        front=rear=-1;
    }else{
    front+=1;
    }
}
void display(){
    if(front>rear || front==-1){
        printf("Queue is empty \n");
        return;
    }
    for(int i=front;i<=rear;i++){
        printf("%d ",q[i]);
    }
}
int main(){
    int ch, data;
    while(1){
    printf("---MENU---\n1.enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    printf("enter the choice:");
    scanf("%d",&ch);
    
    switch(ch){
        case 1:
        printf("enter the value to be inserted:");
        scanf("%d",&data);
        enqueue(data);
        break;
        case 2: deque();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        default:printf("invalid choice\n");

    }
}
    return 0;
}