import java.util.*;

class CircularQueue {
    final int N = 5;
    int[] queue = new int[N];
    int rear = -1, front = -1;

    
    public void enqueue(int x) {
      
        if ((rear + 1) % N == front) {
            System.out.println("Queue is full");
        } else {
            
            if (front == -1 && rear == -1) {
                front = rear = 0;
            } else {
                
                rear = (rear + 1) % N;
            }
            queue[rear] = x;
            System.out.println("Enqueued " + x);
        }
    }

    
    public void dequeue() {
        
        if (front == -1 && rear == -1) {
            System.out.println("Queue is empty");
        } else if (front == rear) {
            
            System.out.println("Dequeued " + queue[front]);
            front = rear = -1;
        } else {
            
            System.out.println("Dequeued " + queue[front]);
            front = (front + 1) % N;
        }
    }

    
    public void display() {
        if (front == -1 && rear == -1) {
            System.out.println("Queue is empty");
        } else {
            System.out.print("Queue: ");
            int i = front;
            while (i != rear) {
                System.out.print(queue[i] + " ");
                i = (i + 1) % N;
            }
            System.out.println(queue[rear]); 
        }
    }

    public static void main(String[] args) {
        CircularQueue q  = new CircularQueue();
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50); 

        q.display();

        q.dequeue();
        q.display();

        q.enqueue(60);
        q.display();

        q.dequeue();
        q.dequeue();
        q.display();
    }
}
