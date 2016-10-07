#include <stdio.h>
#include <stdbool.h>
 
int main()
{
	long long bigNum = 600851475143LL;
	long long bigNumHalf = bigNum/2;
	long long i;
    printf("Largest prime factor of %lli.\n",bigNum);
	printf("Factors: ");
    long long factor;
    printf("bignumhalf: %lli\n",bigNumHalf);
	for  (i = 2; i < bigNumHalf ; i++ ) {  //only necessary to test up to half way
        //printf("%lli mod: %lli, ",i,bigNum%i);
		if (bigNum%i == 0) {	// if i is a factor
			factor = bigNum/i;	
			printf(" factor: %lli, \n",factor);
			if (isPrime(factor) == 1) {
				printf("		 which is largest prime factor\n");
				return 0;
			}
		}
	}
	return 0;
}
int isPrime(long long x)
{
    long long j;
	for ( j = 2; j < x/2; j++) {
		if (x%j == 0)	{
			return(false);
		}
	}
	return(true);
}