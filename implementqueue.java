import java.util.Scanner;

public class implementqueue {
    static final int N = 5;
    int[] queue = new int[N];
    int front = -1, rear = -1;

    void enqueue(int x) {
        if(rear == N - 1) {
            System.out.println("Queue is full");
        } 
        else if(front == -1 && rear == -1) {
            front = rear = 0;
            queue[rear] = x;
            System.out.println(x + " enqueued to queue");
        } 
        else {
            rear++;
            queue[rear] = x;
            System.out.println(x + " enqueued to queue");
        }
    }

   
    void dequeue() {
        if(front == -1 && rear == -1) {
            System.out.println("Queue is empty");
        } 
        else if(front == rear) {
            System.out.println(queue[front] + " dequeued from queue");
            front = rear = -1;
        } 
        else {
            System.out.println(queue[front] + " dequeued from queue");
            front++;
        }
    }

   
    void display() {
        if(front == -1 && rear == -1) {
            System.out.println("Queue is empty");
        } 
        else {
            System.out.print("Queue elements are: ");
            for(int i = front; i <= rear; i++) {
                System.out.print(queue[i] + " ");
            }
            System.out.println();
        }
    }

    
    public static void main(String[] args) {
        implementqueue q = new implementqueue();
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);
        q.enqueue(60); // This will show the queue is full
        q.display();
        q.dequeue();
        q.dequeue();
        q.display();
    }
}
