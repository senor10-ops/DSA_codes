#include <stdio.h>

// Function prototype
void printMessage();

int main()
{
    // Calling the function that does not return a value
    printMessage();
    return 0;
}

void printMessage()
{
    printf("Hello, this is a simple void function!\n");
}
