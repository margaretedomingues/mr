/* This example explore the ideias of inheritance in C and also that the idea of how we can call
 * also functions types in this processes.
 * 
 * Elaborate by Margarete and Nagoya based in a gts.h design
 * 
 * date: 15th Feb 2013
 * 
 */


#include<stdio.h>


/* Here we define the structs and we give a nickname for them */  
typedef struct _P Parent;
typedef struct _C Child;

struct _C{
Parent * p;
int sibling;
int id;
};

struct _P{
int number;
int (*count) (Child*, Child*, int);
};


int numberOfChildren(Child *c1, Child *c2, int numberOfOtherChildren){
  printf("\n \t Values of c1->sibling, c2->sibling, numberOfOtherChildren: \n\t  %d %d %d \n", c1->sibling, c2->sibling, numberOfOtherChildren);
return(c1->sibling + c2->sibling + numberOfOtherChildren);
}

/*int idSum(Child* p1, Child* p2, int idAdd){
return(p1.id + p2.id + idAdd);
}
*/


main(){

// Variable definition  
int a;
Child c1, *c2;
Parent P1, P2; /* Try also define here just one Parent P, see the results ..*/


//Here we are filling the data
c1.sibling=3;
c1.id=1;
c1.p = & P1;
c1.p->number=6;

(*c2).sibling=4; 
(*c2).id=2;
(*c2).p = & P2;
(*c2).p->number=5;

//Printing data


a=c1.sibling;
printf("\n \t Number of children of C1 = %d \n", a);

a=(*c2).sibling;
printf("\n \t Number of children of C2 = %d \n", a);


a= c1.p->number;
printf("\n \t Number of other children for child 1= %d \n", a);

a= (*c2).p->number;
printf("\n \t Number of other children for child 2= %d \n", a);


// Defining the function to be point to
(*c2->p).count =  numberOfChildren;


//Using the function
a =   (*c2->p).count(&c1, c2, c1.p->number + (*c2).p->number);

printf("\n \t Total number of children %d \n", a);

/*
 * 
 * 	Number of children of C1 = 3 

 	 Number of children of C2 = 4 

 	 Number of other children for child 1= 6 

 	 Number of other children for child 2= 5 

 	 Values of c1->sibling, c2->sibling, numberOfOtherChildren: 
	  3 4 11 

 	 Total number of children 18 
 * 
 */

}



