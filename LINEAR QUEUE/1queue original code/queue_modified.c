#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define max 100

int queue[max];
int front=-1;
int rear=-1;

bool isFull(){
    if(rear==max-1){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(){
    if(front==-1){
        return true;
    }else{
        return false;
    }
}

void enqueue(){
    int n;
    if(isFull()){
        printf("queue is full \n");
    }else if(isEmpty()){
        front=0;
        rear=0;
        printf("enter an element : ");
        scanf("%d",&n);
        queue[rear]=n;
    }else{
        printf("enter an element : ");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;
    }
}

void dequeue(){
    if(isEmpty()||front>rear){
        printf("queue is empty \n");
    }else{
        printf("dequeued element : %d",queue[front]);
        front++;
    }
}

void display(){
    if(isEmpty()){
        printf("queue is empty \n");
    }else{
        for(int i=front;i<=rear;i++){
            printf("%d  ",queue[i]);
        }
    }
}

void peek(){
    if(isEmpty()){
        printf("queue is empty \n");
    }else{
        printf("front element is %d",queue[front]);
    }
}

int main(){
    int option;
    for(int i=0;i<100;i++){
        printf("\nselect an option \n");
        printf("1.enqueue\n2.dequeue\n3.display\n4.peek\n5.end\n  :");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            peek();
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("\n invalid choice ");
        }
    }
}
