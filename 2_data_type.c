#include <stdio.h>

// -------- User-defined types --------
struct Student {
    int id;
    char name[20];
};

union Data {
    int i;
    float f;
};

enum Day { MON, TUE, WED };

// typedef example
typedef unsigned int uint;

int add(int a, int b) {
    return a + b;
}

int main() {

    // -------- Basic data types --------
    int a = 10;
    short b = 2;
    long c = 100000L;
    long long d = 10000000000LL;

    unsigned int e = 20;

    char ch = 'A';

    float f = 3.14f;
    double g = 3.14159;
    long double h = 3.1415926535;

    // void pointer
    void *vp;
    vp = &a;

    // -------- Derived data types --------
    
    // Array
    int arr[3] = {1, 2, 3};

    // Pointer
    int *p = &a;

    // Function pointer
    int (*fp)(int, int) = add;

    // -------- User-defined data types --------

    struct Student s1 = {1, "John"};

    union Data data;
    data.i = 10;

    enum Day today = MON;

    uint num = 50;

    // -------- Output --------
    printf("Basic Types:\n");
    printf("int: %d\n", a);
    printf("short: %d\n", b);
    printf("long: %ld\n", c);
    printf("long long: %lld\n", d);
    printf("unsigned int: %u\n", e);
    printf("char: %c\n", ch);
    printf("float: %.2f\n", f);
    printf("double: %.5lf\n", g);
    printf("long double: %.10Lf\n", h);

    printf("\nDerived Types:\n");
    printf("array[0]: %d\n", arr[0]);
    printf("pointer: %d\n", *p);
    printf("function pointer (add): %d\n", fp(2, 3));

    printf("\nUser-defined Types:\n");
    printf("struct: id=%d, name=%s\n", s1.id, s1.name);
    printf("union (int): %d\n", data.i);
    printf("enum: %d\n", today);
    printf("typedef uint: %u\n", num);

    return 0;
}
