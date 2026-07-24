#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cout << "Pratik" << endl;
    }
    //printing even no bw 1 and 100
    for (int i=1; i<100; i++)
    {
        if (i%2==0)
            cout << i << endl;
    }
    return 0;
}