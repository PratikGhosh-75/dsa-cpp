#include <stdio.h>
#include <math.h>

float rectangle(int length, int breadth);
float square(int side);
float circle(int radius);

int main()
{
    int length,breadth,side,radius;
    printf("Enter the length and breadth of a rectangle \n");
    scanf("%d%d",&length,&breadth);
    printf("Enter the side of square \n");
    scanf("%d",&side);
    printf("Enter the radius of circle \n");
    scanf("%d",&radius);
    printf("The area of rectangle is %f\n", rectangle(length, breadth));
    printf("The area of sqaure is %f\n", square(side));
    printf("The area of circle is %f\n",circle(radius));
    return 0;
}

float rectangle(int length, int breadth)
{
    return length*breadth;
}

float square(int side)
{
    return pow(side,2);
}

float circle(int radius)
{
    float pi=3.14;
    return (pi*pow(radius,2));
}