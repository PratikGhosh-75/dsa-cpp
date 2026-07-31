#include <iostream>
using namespace std;
int  main()
{
    int op,a,b;
    float ans=0;
    cout << "Enter two numbers" << endl;
    cin >> a;
    cin >> b;
    cout << "What operation do you want to perform??" << endl;
    cout << "0 -> add" << endl << "1 -> sub" << endl << "2 -> mul" << endl << "3 -> div" <<endl;
    cout << "Enter your choice!!!" << endl;
    cin >> op;
    switch (op)
    {
        case 0:
            cout << "ADD CASE!!" << endl;
            ans = a + b;
            break;
        case 1:
            cout << "SUB CASE!!" << endl;
            ans = a-b;
            break;
        case 2:
            cout << "MUL CASE!!" << endl;
            ans = a*b;
            break;
        case 3:
            cout << "DIV CASE!!" << endl;
            ans = a/b;
            break;
        default:
            cout << "INVALID OPERATION!!" << endl;
            return 0;
    }
    cout << "Value is : " << ans << endl;
}