#include <stdio.h>

// Recursive function to calculate factorial
int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

// Non-recursive (iterative) function to calculate factorial
int factorial_non_recursive(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    // Input number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using recursion
        int result_recursive = factorial_recursive(number);
        printf("Factorial of %d (recursive) = %d\n", number, result_recursive);

        // Calculate factorial using iteration
        int result_non_recursive = factorial_non_recursive(number);
        printf("Factorial of %d (non-recursive) = %d\n", number, result_non_recursive);
    }

    return 0;
}
