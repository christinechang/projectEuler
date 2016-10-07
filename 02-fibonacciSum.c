#include <stdio.h>

int main()
{
    printf("Fibonacci sum of evens!\n");
    
    int oldx = 0;
    int sum = 0;
	int x = 1;
	int newx = 1;
	while ( newx < 4000000  ) {
		newx = x + oldx;
		oldx = x;
		x = newx;
		printf("x = %d, " ,x);

		if (x%2 == 0) {
			sum += x;
			printf("sum = %d, ",sum);

		}

	}	
}