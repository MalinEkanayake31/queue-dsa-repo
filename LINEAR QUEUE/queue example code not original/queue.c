#include<stdio.h>
#include<stdbool.h>

#define max 10
int queue[max];
int front=-1;
int rear=-1;

bool isFull(){
    if(rear>=max-1){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(){
    if(front==-1&&rear==-1){
        return true;
    }else{
        return false;
    }
}

void enqueue(int new){
    if(isFull()){
        printf("queue is full \n");
        return 0;
    }else if(isEmpty()){
        rear=front=0;
        queue[rear]=new;
    }
    rear+=1;
    queue[rear]=new;
    return 0;
}

void dequeue(){
    if(isEmpty()){
        printf("queue is empty ");
        return 0;
    }else if(rear==front){
        rear=front=-1;
    }else{
        printf("dequeued element : %d\n",queue[front]);
        front+=1;
    }

}

int main(){
    int n;
    for(int i=0;i<max;i++){
        printf("element you want to enqueue :");
        scanf("%d",&n);
        enqueue(n);
    }
    for(int i=0;i<max;i++){
        dequeue();
    }

}
