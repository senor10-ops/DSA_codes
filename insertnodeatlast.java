
class Node {
    int data;
    Node next;

    
    Node(int newData) {
        data = newData;
        next = null;
    }
}

public class GfG {
    
    // Given the head of a list and an int, appends
    static Node append(Node head, int newData) {
      
        
        Node newNode = new Node(newData);

        
        if (head == null) {
            return newNode;
        }

    
        Node last = head;

       
        while (last.next != null) {
            last = last.next;
        }

        
        last.next = newNode;

        
        return head;
    }

    
    public static void printList(Node node) {
        while (node != null) {
            System.out.print(" " + node.data);
            node = node.next;
        }
    }

    
    public static void main(String[] args) {
      
        
        Node head = new Node(2);
        head.next = new Node(3);
        head.next.next = new Node(4);
        head.next.next.next = new Node(5);
        head.next.next.next.next = new Node(6);

        System.out.print("Created Linked list is:");
        printList(head);

        // Example of appending a node at the end
        head = append(head, 1);

        System.out.print("\nAfter inserting 1 at the end:");
        printList(head);
    }
}
