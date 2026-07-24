#include <stdio.h>
int main()
{
    while(1)
    {
    int a,b,counter;
    char ch;
    printf("Enter the lower limit\n");
    scanf("%d",&a);
    printf("Enter the upper limit\n");
    scanf("%d",&b);
        if (a>1 && b>a)
        {
            printf("The prime numbers between %d and %d are:\n",a,b);
            for (int i=a; i<=b; i++)
            {
                counter=0;
                for (int j=1; j<=i; j++)
                {
                    if (i%j==0)
                    {
                        counter++;
                    }
                }
            
                if (counter==2)
                {
                    printf("%d\n",i);
                }
            }
        }
        else
        {
            printf("Enter a valid limit!!\n");
        }
        printf("Do you wish to continue: if yes press y or Y otherwise any button!!!!");
        scanf("%s",&ch);
        if (ch=='y' || ch=='Y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}