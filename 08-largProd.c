
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include<stdbool.h>

 // largest product in series - of 4 adjacent digits = 9x9x8x9 = 5832 : then use 13 adj digits

int main()
{
	int maxDigs = 1000;
	char largNum[maxDigs],a;
	int numDigs =  13;
    
	strcpy(largNum,"73167176531330624919225119674426574742355349194934");
	strcat(largNum,"96983520312774506326239578318016984801869478851843");
	strcat(largNum,"85861560789112949495459501737958331952853208805511");
	strcat(largNum,"12540698747158523863050715693290963295227443043557");
	strcat(largNum,"66896648950445244523161731856403098711121722383113");
	strcat(largNum,"62229893423380308135336276614282806444486645238749");
	strcat(largNum,"30358907296290491560440772390713810515859307960866");
	strcat(largNum,"70172427121883998797908792274921901699720888093776");
	strcat(largNum,"65727333001053367881220235421809751254540594752243");
	strcat(largNum,"52584907711670556013604839586446706324415722155397");
	strcat(largNum,"53697817977846174064955149290862569321978468622482");
	strcat(largNum,"83972241375657056057490261407972968652414535100474");
	strcat(largNum,"82166370484403199890008895243450658541227588666881");
	strcat(largNum,"16427171479924442928230863465674813919123162824586");
	strcat(largNum,"17866458359124566529476545682848912883142607690042");
	strcat(largNum,"24219022671055626321111109370544217506941658960408");
	strcat(largNum,"07198403850962455444362981230987879927244284909188");
	strcat(largNum,"84580156166097919133875499200524063689912560717606");
	strcat(largNum,"05886116467109405077541002256983155200055935729725");
	strcat(largNum,"71636269561882670428252483600823257530420752963450");
///////////////////////////////////////////////////////////////////

	int idx = 0;
	int i,j;
	unsigned long digs[numDigs];
	int skip;
	unsigned long int prod, largProd;
	largProd = 0;

	printf("large num: %s \n",largNum);
	printf("\n");
	for (idx = 41 ; (idx + numDigs)<= maxDigs ; idx++) { // go thru all digits section by section
		skip = false;

		for (i=0 ; i < numDigs ; i++) {		//process number of digits at a time
			sscanf(largNum+idx +i,"%c",&a);

			digs[i] = atoi(&a);

			if (digs[i] == 0) {
				skip = true;	// go to next section - 0 will make all 0
				idx += i;	// start next section after this 0
				i = numDigs;    // increment i to exit out of for loop
			}
		}
		if (skip == false) {		//process the section
			prod = 1;
			for (i=0 ; i < numDigs ; i++) {		//process number of digits at a time
				prod *= digs[i];
			}
			if (largProd < prod) {
				printf("new larg prod: %lli,  idx %d: ",prod,idx);
				for (j = 0 ; j< numDigs ; j++) {
				    printf("%d, ",digs[j]) ;
				}
				printf("\n");
			}
			largProd = (largProd >= prod ? largProd : prod);
		}
	}
	printf("final idx = %d \n",idx + numDigs);
	printf ("largest prod = %lli\n",largProd);

}

