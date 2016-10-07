#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

 // sum of primes < 2000000

int main()
{
	const int MAXNUM =  2000000;
	long long sumOprimes = 0;
	int i,j,d,x, multpl;
	
	//create array of primes by removing all multiples of lower numbers
	int primeArr[MAXNUM];  
	
	d = MAXNUM/2;
	for (i = 0 ; i < MAXNUM ; i++) {
		primeArr[i] = 1;
	}	
	for (i = 2 ; i < d ; i++) {		//go thru and set all multiples of numbers to 0
		for ( j = 2 , multpl = i * j; multpl  < MAXNUM ; j++, multpl = i * j) {
			primeArr[multpl-1] = 0;
		}
	}
	for (i = 1 ; i < 20 ; i++) {		// show first of prime array
		printf("%d: %d; \n",i, primeArr[i-1]);
	}

	for (i = 2 ; i < MAXNUM ; i++) {
		if (primeArr[i-1] > 0 ) {
		    sumOprimes += (long long)(i);
		}
		if (i % 100000 == 0) {
            printf("%d, subtotal = %lli\n",i,sumOprimes);		}
   	}	
	printf("sum of primes + %d = %lli\n", MAXNUM, sumOprimes);
}

