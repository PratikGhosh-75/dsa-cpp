#include <iostream>
using namespace std;

int sum(int n)
{
    int sum=0;
    for (int i=1; i<=n; i++)
    {
        sum += i;
    }
    return sum;
}

int sumeven(int n)
{
    int sum=0;
    for (int i=1; i<=n; i++)
    {
        if (i%2==0)
            sum += i;
    }
    return sum;
}

void prime(int a, int b)
{
    for (int i=a; i<=b; i++)
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

int maximum(int a, int b, int c)
{
    if (a>b)
    {
        if (a>c)
            return a;
        else
            return c;
    }
    else
    {
        if (b>c)
            return b;
        else
            return c;
    }
}
int main()
{
    int ch;
    cout << "ENTER YOUR CHOICE!!" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1:
            int a,b,c;
            cout << "ENTER 3 NUMBERS!!" << endl;
            cin >> a >> b >> c;
            cout << "THE MAX NUMBER AMONG THREE IS: " << maximum(a,b,c) << endl;
            break;
        case 2:
            int d,e;
            cout << "Enter the lower limit: " << endl;
            cin >> d;
            cout << "Enter the upper limit: " << endl;
            cin >> e;
            cout << "THE PRIME NUMBERS FROM " << d << " TO " << e << " ARE: " << endl;
            prime(d,e);
            break;
        case 3:
            int n;
            cout << "Enter the last number" << endl;
            cin >> n;
            cout << "Sum of numbers from 1 to " << n << ": " << sum(n) << endl;
            break;
        case 4:
            int m;
            cout << "Enter the last number" << endl;
            cin >> m;
            cout << "Sum of even numbers from 1 to " << m << ": " << sumeven(m) << endl;
            break;
        default:
            cout << "INVALID INPUT!!" << endl;
    }
    return 0;
}