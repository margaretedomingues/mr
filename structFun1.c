/*Example of usage of 
 *                     (*structptr->funptr)(& structptr->a);
 * 			 structptr->funptr(& structptr->a);
*/

#include <stdio.h>
 
struct details {
   int a;
   void (*funptr) (int * a);
};
 

void get_a (int * a) {
        printf (" \n input : %d\n", *a);
	*a=*a+1;
	printf (" \n output : %d \n", *a);
}

int main()
{
       
/* Declaration of the structure and the pointer to it */
  
struct details MainDetails;
struct details *structptr;


       
/* Initialization of variable a from structure MainDetails */

MainDetails.a=0;        
printf ("a (begin): %d\n", MainDetails.a);


       
/* Initialization of the pointer to the structure MainDetails */
structptr=&MainDetails;

/* Initialization of the pointer to the function  get_a using the pointer to the structure MainDetails */
structptr->funptr = get_a;

/* Applying the pointer to the function  get_a from the structure MainDetail */
structptr->funptr(&MainDetails.a);


/* Update the variable a from the pointer to the structure MainDetai */
structptr->a=20;


printf("Test 1");
/* Applying the pointer to the function  get_a from the pointer to the structure MainDetail */
(*structptr->funptr)(& structptr->a);


printf("Test 2");

/* Applying the pointer to the function  get_a from the pointer to the structure MainDetail */

 structptr->funptr(&MainDetails.a);


printf("\n  \t Final value = %d\n",MainDetails.a);
 
 
return 0;
}