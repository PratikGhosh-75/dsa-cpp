#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            cout << "  ";
        }
        for (int k=0; k<2*i+1; k++)
        {
            if (k%2!=0)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }
    for (int i=0; i<n; i++)
    {
        for (int k=0; k<i; k++)
            cout << "  ";
        for (int j=0; j<(2*n-1) - (2*i); j++)
        {
            if (j%2!=0)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }
    for (int i=0; i<n; i++)
    {
        for (int k=0; k<n-i-1; k++)
            cout << "  ";
        for (int j=0; j<2*i+1; j++)
        {
            if (j==0 || j==2*i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i=0; i<n; i++)
    {
        for (int k=0; k<i; k++)
            cout << "  ";
        for (int j=0; j<(2*n-1)-(2*i); j++)
        {
            if (j==0 || j==(2*n-1)-(2*i)-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-i; j++)
            cout << "* ";
        for (int k=0; k<2*i; k++)
            cout << "  ";
        for (int j=0; j<n-i; j++)
            cout << "* ";
         cout << endl;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i+1; j++)
            cout << "* ";
        for (int k=0; k<2*(n-i-1); k++)
            cout << "  ";
        for (int j=0; j<i+1; j++)
            cout << "* ";
        cout << endl;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-i; j++)
        {
            if (i==0 || j==0 || j==n-i-1)
                cout << "* ";
            else
                cout << "  ";
        }
        for (int k=0; k<2*i; k++)
            cout << "  ";
        for (int j=0; j<n-i; j++)
        {
            if (i==0 || j==0 || j==n-i-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}