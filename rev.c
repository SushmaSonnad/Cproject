#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;          // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        num /= 10;                      // Remove the last digit
    }
    return reversed;
}

rev() {
    int num = 12345;
    int reversedNum = reverseNumber(num);
    printf("Reversed number: %d\n", reversedNum);
}

