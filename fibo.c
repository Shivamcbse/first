#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    // Prompt the user to enter a number
    printf("Enter the number of terms in the Fibonacci sequence to print: ");
    scanf("%d", &n);

    // Print the Fibonacci sequence
    printf("Fibonacci sequence up to %d terms:\n", n);
    
    // Check if the number of terms is less than 1
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Print the Fibonacci sequence
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    printf("\n");

    return 0; // Exit the program successfully
}
