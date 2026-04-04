#include <stdio.h>
#include <math.h>  // For advanced math functions

int main() {

    // =========================
    // 1. BASIC ARITHMETIC
    // =========================
    int a = 10, b = 3;
    float x = 5.5, y = 2.0;

    printf("=== BASIC ARITHMETIC ===\n");
    // Output: === BASIC ARITHMETIC ===

    printf("a = %d, b = %d\n", a, b);
    // Output: a = 10, b = 3

    printf("Addition: a + b = %d\n", a + b);
    // Output: Addition: a + b = 13
    printf("Subtraction: a - b = %d\n", a - b);
    // Output: Subtraction: a - b = 7
    printf("Multiplication: a * b = %d\n", a * b);
    // Output: Multiplication: a * b = 30
    printf("Division: a / b = %d\n", a / b);
    // Output: Division: a / b = 3
    printf("Modulus: a %% b = %d\n", a % b);
    // Output: Modulus: a % b = 1

    printf("Float division: x / y = %.2f\n", x / y);
    // Output: Float division: x / y = 2.75

    // =========================
    // 2. COMPOUND ASSIGNMENT
    // =========================
    printf("\n=== COMPOUND ASSIGNMENT ===\n");
    // Output: === COMPOUND ASSIGNMENT ===

    int c = 5;
    printf("c = %d\n", c);
    // Output: c = 5

    c += 3;
    printf("c += 3 -> %d\n", c);
    // Output: c += 3 -> 8
    c -= 2;
    printf("c -= 2 -> %d\n", c);
    // Output: c -= 2 -> 6
    c *= 4;
    printf("c *= 4 -> %d\n", c);
    // Output: c *= 4 -> 24
    c /= 6;
    printf("c /= 6 -> %d\n", c);
    // Output: c /= 6 -> 4
    c %= 3;
    printf("c %%= 3 -> %d\n", c);
    // Output: c %= 3 -> 1

    // =========================
    // 3. INCREMENT & DECREMENT
    // =========================
    printf("\n=== INCREMENT & DECREMENT ===\n");
    // Output: === INCREMENT & DECREMENT ===

    int d = 5;
    printf("d = %d\n", d);
    // Output: d = 5
    printf("d++ = %d\n", d++);
    // Output: d++ = 5
    printf("After d++: d = %d\n", d);
    // Output: After d++: d = 6
    printf("++d = %d\n", ++d);
    // Output: ++d = 7
    printf("d-- = %d\n", d--);
    // Output: d-- = 7
    printf("--d = %d\n", --d);
    // Output: --d = 5

    // =========================
    // 4. TYPE CASTING
    // =========================
    printf("\n=== TYPE CASTING ===\n");
    // Output: === TYPE CASTING ===

    int m = 7, n = 2;
    printf("Integer division: %d / %d = %d\n", m, n, m / n);
    // Output: Integer division: 7 / 2 = 3
    printf("Float division with cast: %d / %d = %.2f\n", m, n, (float)m / n);
    // Output: Float division with cast: 7 / 2 = 3.50

    // =========================
    // 5. MATHEMATICAL FUNCTIONS
    // =========================
    printf("\n=== MATH FUNCTIONS ===\n");
    // Output: === MATH FUNCTIONS ===

    double num = 9.0;
    printf("sqrt(%.1f) = %.2f\n", num, sqrt(num));
    // Output: sqrt(9.0) = 3.00
    printf("pow(2, 3) = %.0f\n", pow(2, 3));
    // Output: pow(2, 3) = 8
    printf("fabs(-5.5) = %.2f\n", fabs(-5.5));
    // Output: fabs(-5.5) = 5.50
    printf("ceil(2.3) = %.0f\n", ceil(2.3));
    // Output: ceil(2.3) = 3
    printf("floor(2.7) = %.0f\n", floor(2.7));
    // Output: floor(2.7) = 2
    printf("round(2.5) = %.0f\n", round(2.5));
    // Output: round(2.5) = 3

    // =========================
    // 6. CONSTANTS
    // =========================
    printf("\n=== CONSTANTS ===\n");
    // Output: === CONSTANTS ===

    const double PI = 3.14159;
    printf("PI = %.5f\n", PI);
    // Output: PI = 3.14159

    // =========================
    // 7. BITWISE OPERATIONS
    // =========================
    printf("\n=== BITWISE OPERATIONS ===\n");
    // Output: === BITWISE OPERATIONS ===

    int p = 5, q = 3;
    printf("p = %d, q = %d\n", p, q);
    // Output: p = 5, q = 3
    printf("p & q = %d\n", p & q);
    // Output: p & q = 1
    printf("p | q = %d\n", p | q);
    // Output: p | q = 7
    printf("p ^ q = %d\n", p ^ q);
    // Output: p ^ q = 6
    printf("~p = %d\n", ~p);
    // Output: ~p = -6
    printf("p << 1 = %d\n", p << 1);
    // Output: p << 1 = 10
    printf("p >> 1 = %d\n", p >> 1);
    // Output: p >> 1 = 2

    // =========================
    // 8. ADVANCED COMBINATION
    // =========================
    printf("\n=== ADVANCED COMBINATION ===\n");
    // Output: === ADVANCED COMBINATION ===

    int r = 7, s = 2;
    double result = pow((r + s), 2) / sqrt(r);
    printf("pow((%d+%d),2)/sqrt(%d) = %.2f\n", r, s, r, result);
    // Output: pow((7+2),2)/sqrt(7) = 34.29

    return 0;
}
