#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of terms: \n");
    scanf("%d",&n);
    printf("The sum of series ");
    float sum = 0.0;
    for (float i=1; i<=n*2; i+=2)
    {
        float j=i+1;
        if (i != (n*2)-1)
        {
            printf("%d/%d + ",(int)i,(int)j);
        }
        else
        {
            printf("%d/%d ",(int)i,(int)j);
        }
        sum += i/j;
    }
    printf("is %f",sum);
    return 0;
}