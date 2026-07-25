#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = n/2;
    for (int i=0; i<mid+1; i++)
    {
        for (int j=0; j<i+1; j++)
            cout << "* ";
        cout << endl;
    }
    for (int i=0; i<mid; i++)
    {
        for (int j=0; j<mid-i; j++)
            cout << "* ";
    cout << endl;
    }
}