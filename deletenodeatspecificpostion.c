// C program to delete a linked list node at a given
// position

#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to delete a node at a given position
struct Node* deleteNode(struct Node* head, int position){
  
    struct Node* prev;
    struct Node* temp = head;

    // Base case if linked list is empty
    if (temp == NULL)
        return head;

    // Case 1: Head is to be deleted
    if (position == 1) {
        // make next node as head and free old head
        head = temp->next;
        return head;
    }

    // Case 2: Node to be deleted is in the middle
    // Traverse till the given position
    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    // If the given position is found, delete node
    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
    // If the given position is not present
    else {
        printf("Data not present\n");
    }

    return head;
}

void printList(struct Node* head){
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to create a new node
struct Node* createNode(int data){
    struct Node* node
        = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main(){
    // Creating a static linked list
    // 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original list: ");
    printList(head);

    // Deleting node at position 2
    int position = 2;
    head = deleteNode(head, position);

    printf("List after deletion: ");
    printList(head);


    return 0;
}
