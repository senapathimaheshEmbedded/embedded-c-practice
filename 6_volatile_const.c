#include<stdio.h>

void main(){
  volatile int check = 1; 
  /*
  volatile just stops the compiler to not optimize 
  the while loop as the variable can get change at 
  run time soo look for it.
  Example :
    Hardware registers
    Interrupt Service Routines (ISR)
    Shared variables between threads/tasks
  */
  while(check){
  }


  const int n =0 ;

  /*
  const means the variable cannot be modified after initilization.
  */
    
}
