#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

 // pythagorean triplet where a + b + c = 1000  what is a*b*c?

int main()
{
	long long total = 1000;
	long long a,b,c;
	//information:
	//a*a + b*b = c*c  where a,b,c are integers
	//a + b + c == total;

	//1000 - a -b ==  c;
	//a*a + b*b == (1000-a-b) 
	
	//long way of doing it:
	
	for (a = 1 ; a < total ; a++) {
			//try different b's
			//find a b that will create c then check that a+b+c = 1000;
			//start with b == 500 and move from there (or half total)
			// b = (total-a)/2;	 find a good starting b
			for (b = 1 ; a + b < total ; b++) {
				c = total - a - b;
				// test is c hypotenuse?
				if ((c * c) == (a * a + b * b)) {
					printf("%lli + %lli + %lli =1000 ;",a,b,c);
					printf("%lli + %lli == %lli  \n",a * a,b * b,c*c);
					printf("a*b*c = %lli\n",a*b*c);
    				return;
				}
            }
	}	
	

}
