// C program to delete the last node of linked list

#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to remove the last node of the linked list
struct Node* removeLastNode(struct Node* head)
{
    // If the list is empty, return NULL
    if (head == NULL) {
        return NULL;
    }

    // If the list has only one node, delete it and return
    // NULL
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    // Find the second last node
    struct Node* second_last = head;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }

    // Delete the last node
    free(second_last->next);

    // Change next of second last
    second_last->next = NULL;

    return head;
}

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
    struct Node* newNode
        = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    // Creating a static linked list
    // 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original list: ");
    printList(head);

    // Removing the last node
    head = removeLastNode(head);

    printf("List after removing the last node: ");
    printList(head);

    return 0;
}
