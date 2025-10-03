#include <stdio.h>

int main()
{
    int number;

    do
    {
        printf("Enter a positive number (0 to exit): ");
        scanf("%d", &number); // Read user input into the 'number' variable

        printf("Number: %d\n", number); // Print the entered number

    } while (number != 5); // Continue the loop until the user enters 0

    printf("Loop finished.\n");

    return 0;
}