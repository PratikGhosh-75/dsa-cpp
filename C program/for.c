#include <stdio.h>
int main()
{
    int num,sum;
    sum=0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("The numbers in backward direction: \n");
    for(int i=1, j=num; i<=num, j>=1; i++,j--)
    {
        sum+=i;
        printf("%d\n",j);
    }
    printf("Sum of 1 to %d is %d\n",num,sum);
    return 0;
}