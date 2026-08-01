#include <iostream>
using namespace std;

float circle(int radius)
{
    return 3.14 * radius * radius;
}

int factorial(int num1)
{
    int fact;
    for(int i=num1; i>=1; i--)
        fact *= i;
    return fact;
}

void prime(int num2)
{
    for (int i=1; i<=num2; i++)
    {
        int flag=0;
        for (int j=1; j<=i; j++)
        {
            if (i%j==0)
                flag++;
        }
        if (flag==2)
            cout << i << endl;
    }
}

void digits(int num3)
{
    for(; num3>0; num3/=10)
    {
        int dig = num3 % 10;
        cout << dig << endl;
    }
}

int dig()
{
    int n,s=0;
    cout << "The the number of digits you want to print" << endl;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        int d;
        cin >> d;
        s = s * 10 + d;
    }
    return s;
}

int bin(int num4)
{
    int ans = 0;
    int place = 1;
    while (num4 > 0)
    {
        int bit = num4 % 2;
        ans += bit * place;
        place *= 10;
        num4 /= 2;
    }
    return ans;
}

int setbit(int num5)
{
    int s =0;
    int ans = 0;
    int place = 1;
    while (num5 > 0)
    {
        int bit = num5 % 2;
        ans += bit * place;
        place *= 10;
        num5 /= 2;
    }
    while (ans>0)
    {
        int dig = ans%10;
        if (dig == 1)
            s++;
        ans = ans / 10;
    }
    return s;
}

int evenodd(int num6)
{
    int ans = 0;
    int place = 1;
    while (num6 > 0)
    {
        int bit = num6 % 2;
        ans += bit * place;
        place *= 10;
        num6 /= 2;
    }
    if (ans%10==0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;
    return 0;
}

int main()
{
    int ch;
    cout << "ENTER YOUR CHOICE!!" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1:
            int radius;
            cout << "Enter radius: " << endl;
            cin >> radius;
            cout << "AREA= " << circle(radius) << endl;
            break;
        case 2:
            int num1;
            cout << "ENTER THE NUMBER: " << endl;
            cin >> num1;
            cout << "FACTORIAL= " << factorial(num1) << endl;
            break;
        case 3:
            int num2;
            cout << "ENTER THE NUMBER: " << endl;
            cin >> num2;
            cout << "PRIME NUMBER FROM 1 to N are";
            prime(num2);
            break;
        case 4:
            int num3;
            cout << "ENTER THE NUMBER: " << endl;
            cin >> num3;
            cout << "DIGITS of the number are";
            digits(num3);
            break;
        case 5:
            cout << "Number using the digits is " << dig() << endl;
            break;
        case 6:
            int num4;
            cout << "ENTER THE NUMBER: " << endl;
            cin >> num4;
            cout << "BINARY OF THE NUMBER IS " << bin(num4);
            break;
        case 7:
            int num5;
            cout << "ENTER THE NUMBER: " << endl;
            cin >> num5;
            cout << "SETBIT OF THE NUMBER IS " << setbit(num5);
            break;
        case 8:
            int num6;
            cout << "ENTER THE NUMBER: " << endl;
            cin >> num6;
            cout << evenodd(num6);
            break;
        default:
            cout << "INVALID INPUT!!!";
    }
    return 0;
}