#include <stdio.h>
int main()
{
    int n,counter;
    counter=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    if (n>1)
    {
        for (int i=1; i<=n; i++)
        {
              if (n%i==0)
                {
                    counter++;
                }
        }
        if (counter==2)
        {
            printf("%d is a prime number\n",n);
        }
        else
        {
            printf("%d is not a prime number\n",n);
        }
    }
    else
    {
        printf("Enter a valid number!!\n");
    }
    printf("%d",counter);
    return 0;
}
  