#include <stdio.h>

void printFirstElement(int arr[], int size) {
    // This function uses a constant amount of space
    if (size > 0) {
        printf("%d\n", arr[0]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printFirstElement(arr, 5);
    
    return 0;
}
