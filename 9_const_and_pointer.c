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

//practice...

int a = 10;
int b = 20;

const int *p = &a;
p = &b;

printf("%d\n", *p);

//const int *p means the data pointed to is constant, not
//the pointer itself. So I cannot modify the value through 
//p, but I can change the pointer to point to another variable.

int a = 10;
const int *p = &a;

a = 20; //allowed

printf("%d\n", *p);
//const int *p restricts modification through the pointer, 
//not the actual variable. Since a is not declared const, 
//it can still be modified directly.


int a = 10;

const int *p1 = &a;
int *p2 = &a;

*p2 = 30;

printf("%d\n", *p1);

/*
Output is 30. This is not a dangling pointer because the memory is 
valid. However, it violates const correctness since the same data is 
accessed through both const and non-const pointers, which is unsafe 
and can lead to unpredictable behavior.
*/ 

const int a = 10;

int *p = (int*)&a;
*p = 50;

printf("%d\n", a);

// What is happening here?
// &a → address of a
// (int*) → type casting
// So:

// “Take address of a (which is const), and force it to behave like a normal int pointer”

// 👉 This is called:

// ⚠️ Casting away const

/*
This results in undefined behavior. Casting away const and modifying 
the variable violates compiler assumptions. Depending on the system, 
it may print 10, 50, or crash.
*/

