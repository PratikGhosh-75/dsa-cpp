#include <stdio.h>

int main()
{
int num,num1,num2,d;
printf("Enter a number: \n");
scanf("%d",&num);
num1=num;
num2=0;
while(num1>0)
{
d = num1%10;
num2 = num2*10+d;
num1 = num1/10;
}


if (num == num2)
{
printf("It is a palindrome number \n");
}
else
{
printf("It is not a palindrome number \n");
}
return 0;
}