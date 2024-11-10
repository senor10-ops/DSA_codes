#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Define Queue structure with front and rear pointers
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

// Initialize an empty queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

// Enqueue operation
void do_enqueue(struct Queue* queue, int value) {
    struct Node* new_node = createNode(value);
    if (queue->rear == NULL) { // Queue is empty
        queue->front = new_node;
        queue->rear = new_node;
    } else {
        queue->rear->next = new_node;
        queue->rear = new_node;
    }
}

// Dequeue operation
int do_dequeue(struct Queue* queue) {
    if (queue->front == NULL) { // Queue is empty
        printf("Queue is empty, cannot dequeue\n");
        return -1;
    }
    struct Node* temp = queue->front;
    int dequeuedValue = temp->data;
    queue->front = queue->front->next;

    // If the queue becomes empty after dequeue
    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);
    return dequeuedValue;
}

// Display the queue
void display(struct Queue* queue) {
    struct Node* current = queue->front;
    if (current == NULL) {
        printf("Queue is empty\n");
        return;
    }
    while (current != NULL) {
        printf("%d <- ", current->data);
        current = current->next;
    }
    printf("rear\n");
}

// Main function to test the queue operations
int main() {
    struct Queue* queue = createQueue();

    do_enqueue(queue, 1);
    do_enqueue(queue, 2);
    do_enqueue(queue, 3);

    display(queue);

    int dequeuedValue = do_dequeue(queue);
    printf("Dequeued value: %d\n", dequeuedValue);

    display(queue);

    return 0;
}
