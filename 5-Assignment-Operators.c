#include <stdio.h>

int main()
{
    int a, b, result;
    // Input values
    printf("Enter the values of a: ");
    scanf("%d", &a);
    printf("\nEnter the values of b: ");
    scanf("%d", &b);

    // Simple assignment
    result = a;
    printf("Simple Assignment: %d\n", result);

    // Addition assignment
    result += b;
    printf("Addition Assignment: %d\n", result);

    // Subtraction assignment
    result -= b;
    printf("Subtraction Assignment: %d\n", result);

    // Multiplication assignment
    result *= b;
    printf("Multiplication Assignment: %d\n", result);

    // Division assignment
    result /= b;
    printf("Division Assignment: %d\n", result);

    // Modulo assignment
    result %= b;
    printf("Modulo Assignment: %d\n", result);

    return 0;
}