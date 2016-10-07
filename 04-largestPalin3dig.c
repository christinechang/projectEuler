#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
 
int main()
{
	int maxNum = 999;
	int minNum = 100;
	int fac1, fac2, test;
	int palin = 0;
	int testP = 0;
	int nPalin = 0;
	int ntests = 0;
	int fac1Sv, fac2Sv;
	
	// find first palindromes from decrementing fac1
	
	for (fac2 = maxNum ; fac2 > minNum ; fac2--)  {	//decrement fac2
		//for efficiency, start at same #fac2 - skips redundancy
		printf("fac2 %d,",fac2);
		for (fac1 = fac2 ; fac1 > minNum ; fac1--) {
			testP = fac1 * fac2;
			ntests ++;
			if (testP > palin) {// don't bother testing if product is less
				if (isPalin(testP)) {
					fac1Sv = fac1;
					fac2Sv = fac2;
					palin = testP;
					nPalin++;

				}
			}
		}
	}
	printf("ntests: %d\n",ntests);
	printf("Pal %d = %d = %d x %d\n",nPalin, palin,fac1Sv,fac2Sv);
	return 0;
}
int isPalin(int x)
{
	char charNum[50];
	int i,sl;

	snprintf(charNum,50,"%d",x);

	sl = strlen(charNum);

	//printf("%s:  %d\n", charNum,sl);
	for ( i = 0 ; i < sl/2; i++) {
		if (charNum[i]!=charNum[sl-1 - i])	{
			return(false);
		}
	}
	//printf(" - true\n");

	return(true);
}