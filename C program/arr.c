#include <stdio.h>
int main()
{
    int a=3, *b=&a;
    printf("%d", a * (*b)); 
    return 0;
}