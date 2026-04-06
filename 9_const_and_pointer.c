#include<stdio.h>

void main()
{
    int a = 10;
  const int *p = &a;
  int b = 11;
  p=&b; // work because the const int pointer can chnage pointer not value of the variable it is pointing to.
  *p = 100; // not work as the 
  
  printf("value of a : %u", *p);
}


#include<stdio.h>

void main()
{
    int a = 10;
   int *const p = &a;
  int b = 11;
  p=&b; //this will not work..
  *p = 100; // this will as pointer const means the address will remain same but value at the address can be changed
  
  printf("value of a : %u", *p);
}


#include<stdio.h>

void main()
{
    int a = 10;
    const int *const p = &a;
    int b = 11;
    
    p = &b;
    *p = 100;
    //both will not work as this is const  to const pointer
  
    printf("value of a : %u", *p);
}
