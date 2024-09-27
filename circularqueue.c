#include <stdio.h>

#define N 5
int queue[N];
int rear = -1, front = -1;


void enqueue(int x) {
    
    if ((rear + 1) % N == front) {
        printf("Queue is full\n");
    } 
    else {
       
        if (front == -1 && rear == -1) {
            front = rear = 0;
        } 
        else {
           
            rear = (rear + 1) % N;
        }
        queue[rear] = x;
        printf("Enqueued %d\n", x);
    }
}


void dequeue() {
   
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } 
    else if (front == rear) {
      
        printf("Dequeued %d\n", queue[front]);
        front = rear = -1;
    } 
    else {
        
        printf("Dequeued %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

// Display the queue
void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } 
    else {
        printf("Queue: ");
        int i = front;
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d\n", queue[rear]); 
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); 
    
    display();
    
    dequeue();
    display();
    
    enqueue(60);
    display();
    
    dequeue();
    dequeue();
    display();

    return 0;
}
