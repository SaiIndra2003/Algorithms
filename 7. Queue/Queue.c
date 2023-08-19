#include <stdio.h>
#include <stdlib.h>
#define size 5

int arr[size];
int front=-1 , rear=-1;

void enQueue(int value){
    if(isFull() == 1){
        printf("Queue is full\n");
        return;
    }
    if(front = -1){
        front++;
    }
    rear++;
    arr[rear] = value;
}

void deQueue(){
    if(isEmpty() == 1){
        printf("Queue is Empty\n");
        return;
    }
    printf("removed %d\n",arr[front]);
    front++;
    if(front>rear){
        front=-1;
        rear=-1;
    }
}

int isEmpty(){
    if(front==-1){
        return 1;
    }
    return 0;
}

int isFull(){
    if (rear == size-1){
        return 1;
    }
    return 0;
}

void display(){
    if(front==-1){
        printf("Empty Queue \n");
        return;
    }
    printf("Queue is....\n");
    for(int i=front; i<=rear;i++){
        printf("%d->",arr[i]);
    }
    printf("end\n");
}


int main(){
    enQueue(0);
    enQueue(1);
    enQueue(2);
    enQueue(3);
    display();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    display();
}