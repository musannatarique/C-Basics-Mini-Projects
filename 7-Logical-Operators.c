#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;

    // Logical AND (&&)
    if (a > 0 && b < 15)
    {
        printf("Both conditions are true.\n");
    }
    else
    {
        printf("At least one condition is false.\n");
    }

    // Logical OR (||)
    if (a > 0 || b > 15)
    {
        printf("At least one condition is true.\n");
    }
    else
    {
        printf("Both conditions are false.\n");
    }

    // Logical NOT (!)
    if (!(a > 10))
    {
        printf("The condition is true.\n");
    }
    else
    {
        printf("The condition is false.\n");
    }

    return 0;
}