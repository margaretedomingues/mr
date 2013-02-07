/* Example  binary shift and cell values and the binay operarion
 * remenber 5& 4=4 because we have 110 & 100 =100

by Nagoya, Margarete
*/

#include<stdio.h>
#include<stdlib.h>

/* Example of use */

int main () {
         unsigned int i,a,b;
	 
	a=1; b=3;
	/*Here is the value we found in the program  ftt.h */
	printf("\n \t FTT_FLAG_DESTROYED (1<<3) =  %d ", a<<b );
	
	b=a<<b;
	
	
	/* To check the flags of the cells ( i=1,..7) */
	for( i =0;i<8;i++)
	  printf ( " \n (flag = %d,  FTT_FLAG_DESTROYED = 8) => (flag & FTT_FLAG_DESTROYED)  =  %d \n ", i, i&b);
	
	  printf ( " \n (other value to flag = %d,  FTT_FLAG_DESTROYED = 8) => (flag & FTT_FLAG_DESTROYED)  =  %d \n ", i+1, i&b);
	
	
	
        return 0;
}
