#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<stdbool.h>
 // 100001'st prime number
int main()
{
	int maxNum = 10001;

	int numPrimes = 1;      // count 2 as first prime
	int aPrimeNum;
	int num;
	
	for (num = 3 ; numPrimes < maxNum ; num++) {
		if (isPrime(num) == true) {
			aPrimeNum = num;
			numPrimes ++;
			if (numPrimes%100 == 0 || numPrimes < 10) {
			    printf("%d: %d, \n",numPrimes,aPrimeNum);
			}
		}
	}
	printf ("%d'st: %d",numPrimes, aPrimeNum);

}
int isPrime(int p) {
	int i;
	if (p%2 == 0) {		//if number is even - false
		return (false);
	}
	for (i = 3 ; i < p/2 ; i+=2) {	//skip even numbers
		if (p%i == 0) {
			return (false);
		}
	}
	return (true);
}