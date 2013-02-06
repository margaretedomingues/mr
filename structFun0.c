/* Example of a pointer to function in struct.
It seams that we can not used functions directly in C struct, so it is used
pointer to functions instead
Herein is an example of that.
Nagoya, 5th Feb 2013

by Nagoya, Margarete
*/

#include<stdio.h>
#include<stdlib.h>

/* Declaration of the struct with an int and a void pointer */

struct t {
        int a;
        void (*funptr) (int * a);
} ;

/* Declaration of the function that will be pointer for *funptr */
void fun(int * a) {
        printf (" input : ");
        scanf ("%d", a);
}

/* Example of use */

int main () {
        struct t test;
        test.a = 0;
	test.funptr=fun;
        test.funptr(&test.a);
        printf ("a (after): %d\n", test.a);
        return 0;
}

/* Other comment on   C pointer syntax
........................................................................................
What does int (*f)(int (*a)[5]) mean in C? 

it's pretty simple: int *p means that *p is an int; int a[5] means that a[i] is an int.

int (*f)(int (*a)[5])

Means that *f is a function, *a is an array of five integers, so f is a function taking a pointer to an array of five integers, and returning int. However, in C it isn't useful to pass a pointer to an array.

C declarations very rarely get this complicated.

Also, you can clarify using typedefs:

typedef int vec5[5];
int (*f)(vec5 *a);


................................................................................
					struct and typedef struct

C language: How to use STRUCT (typedef, “->”)
From web: http://myprogrammingblog.com/2011/07/18/c-language-how-to-use-struct-typedef/

*/
01	/* HOW TO USE STRUCTS, TYPEDEF */
02
03
/*       #include <stdio.h>
04	 
05	/ * struct is used in  C language to group data * /
06	/ * This is how to use struct without typedef
07	struct employee {
08	  char *first_name;
09	  char *last_name;
10	  int age;
11	  int emp_number;
12	  float salary;        
13	};
14	* /
15	 
16 / * Typedef makes struct much more readable !! 
17	 
18	typedef struct {
19	  char *first_name;
20	  char *last_name;
21	  int age;
22	  int emp_number;
23	  float salary;        
24	}Employee;
25	 



*/


