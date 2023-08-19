#include <stdio.h>
#include <stdlib.h>
#define size 5

int arr[size];
int front=-1 , rear=-1;

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

void insertFront(int value){
    if(isFull()){
        printf("Queue is full...\n");
        return;
    }
    if(front == -1){
        front=rear=0;
        arr[front]=value;
        printf("Inserted %d at front, Front: %d, Rear: %d\n",arr[front],front,rear);
        display();
        return;
    }
    if(front == 0){
        front=size-1;
    }
    else{
        front = front - 1;
    }
    arr[front] = value;
    printf("Inserted %d at front, Front: %d, Rear: %d\n",arr[front],front,rear);
    display();
    
}

void insertRear(int val){
    if(isFull()){
        printf("Overflow...\n");
        return;
    }
    if(front == -1){
        front=rear=0;
        arr[front]=val;
        return;
    }
    if(rear == size-1){
        rear=0;
    }
    else{
        rear=rear+1;
    }
    arr[rear]=val;
    printf("Inserted %d ar Rear, Front: %d, Rear: %d\n",val,front,rear);
    display();
}

void delFront(){
    if(isEmpty()){
        printf("Array is already Empty... \n");
        return;
    }

    int removedEle = arr[front];
    if(front == rear){
        front = -1;
        rear = -1;
        printf("Removed front element %d, Front: %d, Rear: %d\n",removedEle,front,rear);
        return;
    }
    if(front == size-1){
        front = 0;
    }else{
        front++;
    }
    printf("Removed front element %d, Front: %d, Rear: %d\n",removedEle,front,rear);
    display();
}

void delRear(){
    if(isEmpty()){
        printf("Queue is empty...\n");
        return;
    }
    int removedEle = arr[rear];
    if(front == rear){
        front=rear=-1;
    }
    else if(rear == 0){
        rear = size-1;
    }
    else{
        rear = rear - 1;
    }
    printf("Removed the rear element %d, front: %d, rear: %d \n",removedEle,front,rear);
    display();
}

int isEmpty(){
    if(front == -1){
        return 1;
    }
    return 0;
}

int isFull(){
    if((front == rear+1)|| (front == 0 && rear == size-1)){
        return 1;
    }
    return 0;
}

int main(){
    insertFront(1);
    insertFront(0);
    insertRear(2);
    insertRear(3);
    insertRear(4);
    delFront();
    delRear();
}