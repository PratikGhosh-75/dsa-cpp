#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (~a) << endl;
    cout << (a ^ b) << endl;
    cout << (a >> b) << endl;
    cout << (a << b) << endl;
    int d = -5;
    unsigned int c = -5;
    cout << (d >> 1) << endl;
    cout << (c >> 1) << endl;
    cout << d << endl;
    cout << c << endl;
    int e=5, f=6;
    cout << (e++) + (++f) << endl;
    cout << "The next line is not printing due to continue!!!" << endl;
    for (int i=0; i<5; i++)
    {
        cout << "Hi everyone!!" << endl;
        continue;
        cout << "Nice to meet you..." << endl;
    }
    cout << "use of break statement" << endl;
    for (int i=0; i<5; i++)
    {
        cout << i << endl;
        if (i==3)
            break;
    }
    cout << "use of continue statement" << endl;
    for (int i=0; i<5; i++)
    {
        if (i==3)
            continue;
        cout << i << endl;
    }
    return 0;
}
