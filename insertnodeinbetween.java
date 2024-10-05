
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class insertnodeinbetween {
  
    
    static Node
insertAtPosition(Node head, int position, int data) {
        Node newNode = new Node(data);

        // If inserting at the beginning
        if (position == 1) {
            newNode.next = head;
            head = newNode;
            return head;
        }

        Node current = head;
        for (int i = 1; i < position - 1 && current != null;
             ++i) {
            current = current.next;
        }

        // If the position is out of bounds
        if (current == null) {
            System.out.println(
                "Position is out of bounds.");
            return head;
        }

        newNode.next = current.next;
        current.next = newNode;
        return head;
    }

     static void printList(Node head) {
        while (head != null) {
            System.out.print(" " + head.data);
            head = head.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
      
        // Creating the list 3->5->8->10
        Node head = new Node(3);
        head.next = new Node(5);
        head.next.next = new Node(8);
        head.next.next.next = new Node(10);

        int data = 12, pos = 2;
        head = insertAtPosition(head, pos, data);
        printList(head);
    }
}
