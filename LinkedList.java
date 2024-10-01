import java.util.Scanner;

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;  
    }
}

public class LinkedList {
    public static void main(String[] args) {
        Node head = null, temp = null;
        Scanner sc = new Scanner(System.in);
        int choice = 1;

      
        while (choice == 1) {
            System.out.print("Enter data: ");
            int data = sc.nextInt();

           
            Node newNode = new Node(data);

            if (head == null) {
                head = temp = newNode;  
            } else {
                temp.next = newNode;  
                temp = newNode;  
            }

            System.out.print("Do you want to continue (0/1)? ");
            choice = sc.nextInt();  
        }

        temp = head;
        System.out.print("Linked List: ");
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("NULL");

        sc.close();  
    }
}
