#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    if (num>0)
        cout << "Positive!!";
    else if (num==0)
        cout << "Equals zero!!";
    else
        cout << "negative!!";
    return 0;
}