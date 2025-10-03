#include <stdio.h>

int main()
{
    int counter = 0; 

    while (counter < 5)
    {                                     // Execute the loop as long as the counter is less than 5
        printf("Counter: %d\n", counter); // Print the current value of the counter
        counter++;                        // Increment the counter by 1
    }

    printf("Loop finished.\n"); // Print "Loop finished"

    return 0;
}