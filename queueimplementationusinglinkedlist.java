class Node {
    int data;
    Node next;

    public Node(int value) {
        data = value;
        next = null;
    }
}

class Queue {
    private Node front;
    private Node rear;

    public Queue() {
        front = null;
        rear = null;
    }

    public void do_enqueue(int value) {
        Node new_node = new Node(value);// creating a new node
        if (front == null) {
            front = new_node;
            rear = new_node;
        } else {
            rear.next = new_node;
            rear = new_node;
        }
    }

    public void display() {
        Node current = front;
        if (current == null) {
            System.out.println("Queue is empty");
            return;
        }
        while (current != null) {
            System.out.print(current.data + "  < - ");
            current = current.next;
        }
        System.out.println("rear");
    }

    public int do_dequeue() {
        if (front == null) {
            System.out.println("Queue is empty, cannot dequeue");
            return -1;
        } else {
            Node temp = front;
            front = front.next;
            if (front == null) {
                rear = null;
            }
            int dequeuedValue = temp.data;
            return dequeuedValue;
        }
    }
}

class queueimplementationusinglinkedlist {
    public static void main(String[] args) {
        Queue queue = new Queue();
        queue.do_enqueue(1);
        queue.do_enqueue(2);
        queue.do_enqueue(3);

        queue.display();

        int dequeuedValue = queue.do_dequeue();
        System.out.println("Dequeued value: " + dequeuedValue);

        queue.display();
    }
}