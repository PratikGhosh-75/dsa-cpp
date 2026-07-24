#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter the marks: \n");
    scanf("%d",&num);
    if (num>=0 && num<30)
    {
        printf("C");
    }
    else if (num>=30 && num<70)
    {
        printf("B");
    }
    else if (num>=70 && num<90)
    {
        printf("A");
    }
    else if (num>=90 && num<=100)
    {
        printf("A+");
    }
    else
    {
        printf("invalid input");
    }
    return 0;
} 