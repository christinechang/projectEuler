#include <stdio.h>
#include <stdlib.h>
#include <stdmath.h>
 // sq of sums - sum of squares
int main()
{
	int maxNum = 10;
	long long sqOsums = 0;
	long long sumOsqs = 0;
	int i;
	for (i = 1 ; i <= maxNum ; i++) {
		sumOsqs += (i * i);
		sqOsums += i;
	}
	sqOsums *= sqOsums;
	printf("diff = %lli - %lli = %lli \n",sqOsums,sumOsqs, (sqOsums - sumOsqs));
}