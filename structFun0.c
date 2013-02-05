#include<stdio.h>
#include<stdlib.h>

/* Naoya */
struct t {
        int a;
        void (*funptr) (int * a);
} ;

void fun(int * a) {
        printf (" input : ");
        scanf ("%d", a);
}


int main () {
        struct t test;
        test.a = 0;
	test.funptr=fun;
        test.funptr(&test.a);
        printf ("a (after): %d\n", test.a);
        return 0;
}




