#include <stdio.h>

int main()
{
    int a = 10;
    int b = 4;

    // Equal to
    printf("%d\n", (a == b) ? 1 : 0); // 0

    // Not equal to
    printf("%d\n", (a != b) ? 1 : 0); // 1

    // Greater than
    printf("%d\n", (a > b) ? 1 : 0); // 1

    // Less than
    printf("%d\n", (a < b) ? 1 : 0); // 0

    // Greater than or equal to
    printf("%d\n", (a >= b) ? 1 : 0); // 1

    // Less than or equal to
    printf("%d\n", (a <= b) ? 1 : 0); // 0

    return 0;
}