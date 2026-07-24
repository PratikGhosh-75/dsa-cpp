#include <stdio.h>
int main()
{
    int a,i;
    printf("Enter the no of terms till to be displayed\n");
    scanf("%d",&a);
    i=1;
    printf("The odd no from %d to %d are:\n",i,a);
    while (i<=a)
    {
        printf("%d\n",i);
        i+=2;
    }
    return 0;
}