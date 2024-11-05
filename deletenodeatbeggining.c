// C program to delete a node from the beginning of given
// linked list
#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};


// Function to delete the head node
struct Node* deleteHead(struct Node* head)
{
    // Base case if linked list is empty
    if (head == NULL)
        return NULL;

    // Store the current head in a temporary variable
    struct Node* temp = head;

    // Move the head to the next node
    head = head->next;

    // Free the memory of the old head node
    free(temp);

    // Return the new head
    return head;
}

// Function to print the linked list
void printList(struct Node* head)
{
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to create a new node
struct Node* createNode(int data)
{
    struct Node* node
        = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main()
{
    // Creating a linked list
    // 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original list: ");
    printList(head);

    // Deleting the head node
    head = deleteHead(head);

    printf("List after deleting the head: ");
    printList(head);

    return 0;
}
