#include<stdio.h>
#define N 5

int queue[N];
int front = -1, rear = -1;

void enqueue(int x) {
    if(rear == N - 1) {
        printf("Queue is full\n");
    } 
    else if(front == -1 && rear == -1) { 
        front = rear = 0;
        queue[rear] = x;
        printf("%d enqueued to queue\n", x);
    } 
    else {
        rear++;
        queue[rear] = x;
        printf("%d enqueued to queue\n", x);
    }
}

void dequeue() {
    if(front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } 
    else if(front == rear) {
        printf("%d dequeued from queue\n", queue[front]);
        front = rear = -1;
    } 
    else {
        printf("%d dequeued from queue\n", queue[front]);
        front++;
    }
}

void display() {
    if(front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } 
    else {
        printf("Queue elements are: ");
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60); 
    display();
    dequeue();
    dequeue();
    display();
    return 0;
}
