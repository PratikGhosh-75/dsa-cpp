#include <stdio.h>

int factorial(int count);

int main()
{
    int count;
    printf("Enter the number of terms: \n");
    scanf("%d",&count);
    printf("Factorial of %d is %d",count, factorial(count));
}

int factorial(int count)
{
    if (count==0)
    {
        return 1;
    }
    int factor = factorial(count-1);
    int fac = factor * count;
    return fac;
}