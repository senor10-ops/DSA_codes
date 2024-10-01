#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp;
    int choice = 1;

    // Loop for adding nodes to the list
    while (choice) {
        newnode = (struct node*) malloc(sizeof(struct node));  // memory allocation
        printf("Enter data: ");
        scanf("%d", &newnode->data);  // taking input of node data
        newnode->next = NULL;  // Initialize the next pointer to NULL(incase of single node)

        if (head == NULL) {
            head = temp = newnode;  // First node
        } else {
            temp->next = newnode;  // Link new node to the end of the list
            temp = newnode;  // Move temp to the new node
        }

        printf("Do you want to continue (0/1)? ");
        scanf("%d", &choice);  
    }

    //printing
    temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
