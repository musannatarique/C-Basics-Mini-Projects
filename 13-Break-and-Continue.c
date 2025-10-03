#include <stdio.h>

int main() {
    int i;

    // Example of break statement
    printf("Example of break statement:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // Example of continue statement
    printf("Example of continue statement:\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}