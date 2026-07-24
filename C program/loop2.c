#include <stdio.h>
int main()
{
    int n,factorial;
    printf("Enter the no of terms till to be displayed\n");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        factorial=1;
        for (int j=1; j<=i; j++)
        {
            factorial=factorial*j;
        }
        printf("factorial of %d i.e %d! is %d\n",i,i,factorial);
    }

    return 0;
}