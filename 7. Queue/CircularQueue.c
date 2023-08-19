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
    if(front == -1){
        front++;
    }
    rear = (rear + 1) % size;
    arr[rear] = value;
    printf("Inserted %d, front %d, rear %d after enqueue\n",value,front,rear);
}

void deQueue(){
    if(isEmpty() == 1){
        printf("Queue is Empty\n");
        return;
    }
    printf("removed %d\n",arr[front]);
    if(front == rear){
        front=-1;
        rear=-1;
        return;
    }
    front = (front + 1)%size;
    printf("front %d, rear %d after dequeue \n",front,rear);
}

int isEmpty(){
    if(front==-1){
        return 1;
    }
    return 0;
}

int isFull(){
    if ((rear == size-1 && front == 0) || ( front == rear+1)){
        return 1;
    }
    return 0;
}

void display(){
    int i;
    if(front==-1){
        printf("Empty Queue \n");
        return;
    }
    printf("Queue is....\n");
    for(i = front; i != rear;i = (i+1) % size){
        printf("%d->",arr[i]);
    }
    printf("%d\n",arr[i]);
}

int main(){
    enQueue(0);
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    display();
    deQueue();
    enQueue(5);
    display();
}
