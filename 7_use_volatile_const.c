#include<stdio.h>
void main(){
  /*
  Can we use volatile and const together?
  */
  volatile const int num = 20;

  /*
  yes, this means that the num variable cannot be changed by program,
  but can be changed by other internal things.

  Value cannot be modified by program, but can change externally.

  Yes. It is used for hardware registers that can change externally but should not be modified by the program.
  */
}
