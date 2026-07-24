#include <stdio.h>

int natural(int count);

int main()
{
    int count;
    printf("Enter the number of terms: \n");
    scanf("%d",&count);
    printf("Sum of natural number till %d is %d",count, natural(count));
}

int natural(int count)
{
    if (count<=0)
    {
        return 0;
    }
    int sumNto1 = natural(count-1);
    int sumN=sumNto1+count;
    return sumN;
}