#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

                            // Swapping without a third variable
                            // X= 25 (First number), Y= 23 (second number)
                            // Swapping Logic:
                            // X = X + Y = 25 +23 = 48
                            // Y = X - Y = 48 - 23 = 25
                            // X = X -Y = 48 - 25 = 23
                            // and the numbers are swapped as X =23 and Y =25.
    x = x + y; 
    y = x - y; 
    x = x - y;

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
