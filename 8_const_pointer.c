#include<stdio.h>
void main(){
  
  /*
  What is the behaviour :
  */
  const int x = 10;
  int *ptr = &x;
  *ptr = 20;

  /*
  🔥 Why is it undefined?

Because:

x is declared as const
Compiler may:
Put it in read-only memory (Flash/ROM)
Apply optimizations assuming it never changes

💣 Possible outcomes:
Program crashes (segmentation fault)
Value stays 10 (compiler ignores your write)
Value becomes 20
Weird unpredictable behavior

This leads to undefined behavior. Modifying a const variable through a non-const pointer is not allowed. 
Depending on the system, it may crash, ignore the write, or behave unpredictably.
  */
}
