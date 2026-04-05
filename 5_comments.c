#include <stdio.h>

/*
 * Program: Demonstration of Comments in C
 * Author: Student
 * Description: Shows single-line, multi-line, and inline comments
 */

int main() {

    // Variable declaration
    int a = 10, b = 5;

    /* Performing addition */
    int sum = a + b;

    // Performing subtraction
    int diff = a - b;

    /* 
       Printing results:
       printf prints output to console
    */
    printf("Sum = %d\n", sum);      // Output: Sum = 15
    printf("Difference = %d\n", diff); // Output: Difference = 5

    // Checking condition
    if (a > b) {
        printf("a is greater than b\n"); // Output: a is greater than b
    }

    /*
    Multi-line comment used to disable code:
    printf("This will not execute");
    */

    return 0; // Program ends successfully
}
