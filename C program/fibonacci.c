#include <stdio.h>
void fibonacci(int n);
int main()
{
    int n;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    printf("The fibonacci series till %d terms are: ",n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c;
    for (int i=1; i<=n; i++)
    {
        c=a+b;
        b=a;
        a=c;
        printf("%d, ",b);
    }
}