/*
How you can pass a function which takes  functions as a parameter

6th Feb 2013

*/


#include<stdio.h>

/*
A prototype for a function which takes a function parameter looks like the following:
*/

void func ( void (*f)(int) );

/*
This states that the parameter f will be a pointer to a function which has a void return type and which takes a single int parameter. 
The following function (print) is an example of a function which could be passed to func as a parameter because it is the proper type:
*/

void print ( int x ) {
  printf("\n \t %d\n",x);
}

void print2 ( int x ) {
  printf("\n \t %d\n", 2 *x);
}

/*
Function Call

When calling a function with a function parameter, the value passed must be a pointer to a function. Use the function's name (without parens) for this:

func(print);

would call func, passing the print function to it.
*/


/*
Function Body

As with any parameter, func can now use the parameter's name in the function body to access the value of the parameter. Let's say that func will apply the function it is passed to the numbers 0-4. Consider, first, what the loop would look like to call print directly:

for ( int ctr = 0 ; ctr < 5 ; ctr++ ) {
  print(ctr);
}

Since func's parameter declaration says that f is the name for a pointer to the desired function, we recall first that if f is a pointer then *f is the thing that f points to (i.e. the function print in this case). As a result, just replace every occurrence of print in the loop above with *f:
*/


void func ( void (*f)(int) ) {
int ctr;
  for ( ctr = 0 ; ctr < 5 ; ctr++ ) {
    (*f)(ctr);
  }
}


main(){

func(print);

printf("Now print 2");

func(print2);

}