#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for one integer
    ptr = malloc(sizeof(int));

    // Check if memory allocation was successful
    if (ptr != NULL) {
        *ptr = 10; // Assign a value
        printf("%d\n", *ptr); // Print the value
        free(ptr); // Free the allocated memory
    }

    return 0;
}

