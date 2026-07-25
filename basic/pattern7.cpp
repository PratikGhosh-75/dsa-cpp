#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n/2; i++)
    {
        for (int j=0; j<i+1; j++)
        {
            if (j==0 || j==i)
                cout << "* ";
            else
                cout << "  ";
        }
            for (int k=0; k<n-(2*(i+1)); k++)
            cout << "  ";
        for (int j=0; j<i+1; j++)
        {
            if (j==0 || j==i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i=0; i<n/2; i++)
    {
        for (int j=0; j<n/2-i; j++)
        {
            if (j==0 || j==n/2-i-1)
                cout << "* ";
            else
                cout << "  ";
        }
        for (int k=0; k<2*i; k++)
            cout << "  ";
        for (int j=0; j<n/2-i; j++)
        {
            if (j==0 || j==n/2-i-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}    