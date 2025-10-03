#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: "); 
    scanf("%d", &number);       

    if (number % 2 == 0)
    {
        printf("The number is even.\n"); // If the number is divisible by 2, it is even
    }
    else
    {
        printf("The number is odd.\n"); // If the number is not divisible by 2, it is odd
    }

    return 0;
}