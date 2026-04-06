#define SIZE 10
const int size = 10;

//Preprocessor vs Compiler
// 2. Type Safety (VERY IMPORTANT)
//define -> ❌ No type checking
//const -> ✅ Type-safe

// 3. Memory
//define -> no memory allocation
//const -> memory allocation

// 4. Debugging (Interview Favorite)

// 5. Scope (Your Point—Refined)
// #define
// Global (unless undefined)
// No real scope control
// const int
// Follows C++ scope rules

// 6. Example Problem
// #define SQUARE(x) x*x
// SQUARE(2+3) → 2+3*2+3 = 11 ❌
// const int square(int x) { return x*x; }

// 👉 Correct result = 25 ✅

// #define is a preprocessor macro with no type or scope, 
//while const int is a typed constant handled by the compiler. z
//const provides type safety, better debugging, and proper 
//scoping, making it preferable in modern C++ and embedded systems.
