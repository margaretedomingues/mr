/* Example  enum use that is used in the gts type
 by Naoya, Margarete
 date 2013/02/21
 */

#include<stdio.h>
#include<stdlib.h>

/* Example of use */

 typedef enum
{
 monday='\n', tuesday=1<<1, wednesday, thursday=1<<3, friday=1<<4, saturday='}', sunday='{'
} DAY;
 
/*
 * enum values
 * Monday=10, Tuesday =2, Wednesday=3, Thurdays=8, Friday=16, Saturday=17, Sunday
*/

int main () {

   DAY day = sunday;
 
if(day == saturday || day == sunday)
      printf("Day is a weekend day - work hours : %d ", day);
   else if(day == wednesday)
     printf("Work hours: %d \n",day);
  else if (day==monday)
          printf("Work hours: %d \n",day);
    
     printf("\n Work hours: %d \n",thursday);

        return 0;
}
