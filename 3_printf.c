#include <stdio.h>

int main() {

    // =========================
    // 1. BASIC PRINTING
    // =========================
    printf("=== BASIC PRINTING ===\n");
    // Output:
    // === BASIC PRINTING ===

    printf("Hello, World!\n");
    // Output:
    // Hello, World!

    int a = 10;
    float b = 3.14;
    char c = 'X';
    char str[] = "ChatGPT";

    printf("Integer: %d\n", a);
    // Output:
    // Integer: 10
    printf("Float: %f\n", b);
    // Output:
    // Float: 3.140000
    printf("Character: %c\n", c);
    // Output:
    // Character: X
    printf("String: %s\n", str);
    // Output:
    // String: ChatGPT


    // =========================
    // 2. FORMAT SPECIFIERS
    // =========================
    printf("\n=== FORMAT SPECIFIERS ===\n");
    // Output:
    // === FORMAT SPECIFIERS ===

    printf("Decimal: %d\n", 255);
    // Output: Decimal: 255
    printf("Octal: %o\n", 255);
    // Output: Octal: 377
    printf("Hex (lower): %x\n", 255);
    // Output: Hex (lower): ff
    printf("Hex (upper): %X\n", 255);
    // Output: Hex (upper): FF
    printf("Unsigned: %u\n", 255);
    // Output: Unsigned: 255


    // =========================
    // 3. FLOAT PRECISION
    // =========================
    printf("\n=== FLOAT PRECISION ===\n");
    // Output: === FLOAT PRECISION ===

    float pi = 3.1415926535;

    printf("Default: %f\n", pi);
    // Output: Default: 3.141593
    printf("2 decimal places: %.2f\n", pi);
    // Output: 2 decimal places: 3.14
    printf("5 decimal places: %.5f\n", pi);
    // Output: 5 decimal places: 3.14159


    // =========================
    // 4. WIDTH & ALIGNMENT
    // =========================
    printf("\n=== WIDTH & ALIGNMENT ===\n");
    // Output: === WIDTH & ALIGNMENT ===

    printf("Right aligned (width 10): '%10d'\n", 123);
    // Output: Right aligned (width 10): '       123'
    printf("Left aligned (width 10): '%-10d'\n", 123);
    // Output: Left aligned (width 10): '123       '
    printf("Zero padded: '%010d'\n", 123);
    // Output: Zero padded: '0000000123'


    // =========================
    // 5. MULTIPLE VARIABLES
    // =========================
    printf("\n=== MULTIPLE VARIABLES ===\n");
    // Output: === MULTIPLE VARIABLES ===

    printf("a = %d, b = %.2f, c = %c\n", a, b, c);
    // Output: a = 10, b = 3.14, c = X


    // =========================
    // 6. ESCAPE SEQUENCES
    // =========================
    printf("\n=== ESCAPE SEQUENCES ===\n");
    // Output: === ESCAPE SEQUENCES ===

    printf("New line -> First line\nSecond line\n");
    // Output:
    // New line -> First line
    // Second line
    printf("Tab -> Hello\tWorld\n");
    // Output: Tab -> Hello    World
    printf("Quote -> \"C Programming\"\n");
    // Output: Quote -> "C Programming"


    // =========================
    // 7. SPECIAL FORMAT FLAGS
    // =========================
    printf("\n=== FLAGS ===\n");
    // Output: === FLAGS ===

    printf("Always show sign: %+d\n", 10);
    // Output: Always show sign: +10
    printf("Space before positive: % d\n", 10);
    // Output: Space before positive:  10
    printf("Alternate form (hex): %#x\n", 255);
    // Output: Alternate form (hex): 0xff
    printf("Alternate form (octal): %#o\n", 255);
    // Output: Alternate form (octal): 0377


    // =========================
    // 8. SCIENTIFIC NOTATION
    // =========================
    printf("\n=== SCIENTIFIC NOTATION ===\n");
    // Output: === SCIENTIFIC NOTATION ===

    printf("Scientific (lower): %e\n", pi);
    // Output: Scientific (lower): 3.141593e+00
    printf("Scientific (upper): %E\n", pi);
    // Output: Scientific (upper): 3.141593E+00


    // =========================
    // 9. DYNAMIC WIDTH & PRECISION
    // =========================
    printf("\n=== DYNAMIC WIDTH & PRECISION ===\n");
    // Output: === DYNAMIC WIDTH & PRECISION ===

    int width = 10;
    int precision = 3;

    printf("Width *: '%*d'\n", width, 123);
    // Output: Width *: '       123'
    printf("Precision *: '%.*f'\n", precision, pi);
    // Output: Precision *: '3.142'


    // =========================
    // 10. POINTERS
    // =========================
    printf("\n=== POINTERS ===\n");
    // Output: === POINTERS ===

    int x = 100;
    printf("Address of x: %p\n", &x);
    // Output (will vary): Address of x: 0x7ffee3b9a98c


    // =========================
    // 11. STRING FORMATTING ADVANCED
    // =========================
    printf("\n=== STRING FORMATTING ===\n");
    // Output: === STRING FORMATTING ===

    printf("Limit string length: %.4s\n", "Programming");
    // Output: Limit string length: Prog
    printf("Right align string: '%10s'\n", "Hi");
    // Output: Right align string: '        Hi'
    printf("Left align string: '%-10s'\n", "Hi");
    // Output: Left align string: 'Hi        '


    // =========================
    // 12. LONG, SHORT, DOUBLE
    // =========================
    printf("\n=== DATA TYPE MODIFIERS ===\n");
    // Output: === DATA TYPE MODIFIERS ===

    long int li = 1234567890;
    short int si = 32000;
    double d = 123.456789;

    printf("Long: %ld\n", li);
    // Output: Long: 1234567890
    printf("Short: %hd\n", si);
    // Output: Short: 32000
    printf("Double: %lf\n", d);
    // Output: Double: 123.456789


    // =========================
    // 13. PRINTF RETURN VALUE
    // =========================
    printf("\n=== PRINTF RETURN VALUE ===\n");
    // Output: === PRINTF RETURN VALUE ===

    int count = printf("Hello!");
    // Output: Hello!
    printf("\nCharacters printed: %d\n", count);
    // Output: Characters printed: 6


    // =========================
    // 14. ADVANCED TRICKS
    // =========================
    printf("\n=== ADVANCED TRICKS ===\n");
    // Output: === ADVANCED TRICKS ===

    printf("Mix all: %+-10.3f END\n", pi);
    // Output: Mix all: +3.142     END
    printf("Hex with padding: %#08x\n", 255);
    // Output: Hex with padding: 0x0000ff


    return 0;
}
