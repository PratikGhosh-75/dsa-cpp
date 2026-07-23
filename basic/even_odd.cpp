#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a number!!!" << endl;
    int n;
    cin >> n;
    if (n>=0)
    {
        if (n%2==0)
            cout << "Even!!";
        else
            cout << "Odd!!";
    }
    else
        cout << "Enter a number greater than 0";
    return 0;
}