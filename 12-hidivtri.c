#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <stdbool.h>
//#include <math.h>

 // highly divisible triangular numbers
 // triangular numbers = add all natural numbers < n
 // find first triangular number with over 500 divisors
// certainly 500! will be divisible by 500 numbers - but it's too big to calculate... 
// and it's not necessarily a triangle number...

int main()
{
	int targetnum = 500;
	long long trinum;	// array of triangular numbers - based on index
	int numdivisors = 0;
	int seednum;
	int i,j;
	int maxdivs= 0;
	trinum = 1;
	
	// calculate triangle numbers and keep going until you find the one with over targetidx number of divisors
    int fin = false;
	trinum = 1;
	numdivisors = 1;
	for (i = 2 ; numdivisors < targetnum ; i++) {
	    trinum +=i;
	    numdivisors = findnumdivisors(trinum);
		if (numdivisors > maxdivs) {
			maxdivs = numdivisors;
			printf("idx: %d, trinum: %d, numdivisors: %d, targetnum = %d\n",i, trinum, numdivisors,targetnum);
		}
	}

	printf("the answer is %d\n",trinum);
}
findnumdivisors(int x) {
    int numdiv;	
    int prevdiv;
	int i;
	int upto = x/2;

	int fin = false;
	// initialize divisors array
	numdiv = 2;
	prevdiv = x;  // every number divisible by 1 and itself.  (only 1 has a single divisor)

	for (i = 2 ; fin == false && i <= upto	; i++) {
		if (i == prevdiv)	{		//if this number is last divisor - we are done
			fin = true;		// break out of loop
		}
		else if (x % i == 0) {
			numdiv++;
			if (x/i == i ) {  		// number is square of this divisor
				fin = true;  //break out of loop
			}
			else    {
				numdiv++;
				prevdiv= x/i;
			}	
		}
	}
	return numdiv;
}



