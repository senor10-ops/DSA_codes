#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int a = 10, b = 20;
    int result = multiply(a, b);
    printf("the multiplied value is %d ", result);
    return 0;
}
