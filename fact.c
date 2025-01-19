#include <stdio.h>

fact() { 
    int num, i;
    unsigned long long factorial = 1;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for valid input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        // Display the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }


}

