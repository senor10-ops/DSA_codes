
class Node {
    int data;   
    Node next;  

    Node(int new_data) {
        data = new_data;
        next = null;
    }
}

public class insertnodeatfirst {
    
    public static Node insertAtFront(Node head, int new_data) {
        // Create a new node with the given data
        Node new_node = new Node(new_data);
        
        // Make the next of the new node point to the current head
        new_node.next = head;
        
        // Return the new node as the new head of the list
        return new_node;
    }

    // Function to print the contents of the linked list
    public static void printList(Node head) {
        // Start from the head of the list
        Node curr = head;
        
        // Traverse the list
        while (curr != null) {
            // Print the current node's data
            System.out.print(" " + curr.data);
            
            // Move to the next node
            curr = curr.next;
        }
        
        // Print a newline at the end
        System.out.println();
        
    }
    

    // Driver code to test the functions
    public static void main(String[] args) {
        // Create the linked list 2->3->4->5
        Node head = new Node(2);
        head.next = new Node(3);
        head.next.next = new Node(4);
        head.next.next.next = new Node(5);

        // Print the original list
        System.out.println("Original Linked List:");
        printList(head);

        // Insert a new node at the front of the list
        System.out.println("After inserting Nodes at the front:");
        int data = 1;
        head = insertAtFront(head, data);
        
        // Print the updated list
        printList(head);
    }
}




