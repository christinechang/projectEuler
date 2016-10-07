#include <stdio.h>
#include <math.h>

int main()
{
    printf("Hello, World!\n");
    
    int maxNumber = 1000;
    int multiple = 3;
    printf(" mod for 3: %d\n",findNumFacs(maxNumber,multiple));
    multiple = 5;
    printf(" mod for 5: %d\n",findNumFacs(maxNumber,multiple));
    multiple = 15;
    printf(" mod for 15: %d\n",findNumFacs(maxNumber,multiple));
    int sum66 = sumBetween(1,66);
    int sum199 = sumBetween(67,199);
    int sum333 = sumBetween(200,333);
    printf("sums: %d  %d  %d\n", sum66,sum199,sum333);
    int total = (3 + 5 - 15)*(sum66) + (3 + 5)*(sum199) + (3*sum333);
    printf("total= %d\n",total);
    
    return 0;
}
int findNumFacs(int maxN, int multiple) {
    int numFacs =  maxN/multiple;

    if ((maxN % multiple) == 0)
        numFacs--;
    return(numFacs);
}
int sumBetween(int startNum, int endNum)
{
    int i;
    int sum = 0;
    for (i = startNum ; i <= endNum; i++) {
        sum += i;
    }
    return sum;
}