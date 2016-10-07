#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 // smallest number divisible by 1-20
int main()
{
	int maxNum = 10;
	int divisNum;
	int i, j, testNum;

	// make set of all factors which are not redundant:
	int factors[maxNum];
	int numD = 0;
	int nd;
	int seed,fac;
	int divisibleByAll = false;
	for (i = 1 ; i<= maxNum ; i++){
		factors[i-1] = i;	//initialize array
	}
	// mark any redundant or irrelevant factor = 0
	factors[0] = 0;	//initial place for factor of 1 is 0
	for (seed = 2 ; seed <= maxNum/2 ; seed++) {
		fac = seed;
		while (fac * 2 <= maxNum) {
				factors[fac-1] = 0;		// any number which is factor of greater number in range - is redundant
				fac *=2;
		}
	}
	printf("factors array: ");
	for (i = 0 ; i < maxNum ; i++) {
		printf ("%d, ",factors[i]);
	}
	printf("\n");

	divisNum = maxNum ;  // largest number is minimum to be divisible by all
	divisNum = maxNum * (maxNum - 1);
	
	while (divisibleByAll == false) {
		divisNum += maxNum;
		divisibleByAll = true;
		for (i = 0 ; i < maxNum ; i++) {		//cycle through all factors to see if number is divisible
			if (factors[i] > 0) {
				if (divisNum%(factors[i]) != 0) {
					divisibleByAll = false;
				}
			}
		}
	}
	printf("smallest number divisible by numbers under %d is: %d\n",maxNum,divisNum);
	
	return 0;
}
int isFactor(factor,number) {
	return(number%factor == 0 ? true :  false);
}
int isMultiAll(int divisNum, int maxNum)
{
	int i;
	//printf("divisNum %d \n",divisNum);
	for (i = 2 ; i <= maxNum ; i++) {
		if (divisNum%i != 0) {
			return false;
		}
	}
	return true;
}

