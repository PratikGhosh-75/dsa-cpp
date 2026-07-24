#include <stdio.h>

int fibonacci(int num);

int main()
{
    int n;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    
    printf("The fibonacci series till %d terms are: ", n);
    
    for (int i=0; i<n; i++) 
    {
        printf("%d, ", fibonacci(i));
    }
    
    return 0;
}

int fibonacci(int num)
{
    if (num==0)
    {
        return 0;
    }
    if (num==1)
    {
        return 1;
    }
    
    return fibonacci(num-1) + fibonacci(num-2);
}