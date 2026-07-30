#include <iostream>
using namespace std;
int implicitype()
{
    int num1 = 5;
    float num2 = 5.5;
    float result = num1 + num2;
    cout << result << endl;
    int result1 = num1 + num2;
    cout << result1 << endl;

    char a = 'A';
    int b = a + 1;
    cout << b << endl;
    char a1 = 'A';
    char b1 = a1 + 1;
    cout << b1 << endl;
    int c = 98;
    char d = c;
    cout << d << endl;
}
int explicitype()
{
    int num1 = 5;
    float num2 = 5.5;
    float result = num1 + (int)num2;
    cout << result << endl;

    float num3 = 67.58;
    char a = char(num3);
    cout << a << endl;

    int b = 4;
    int c = 7.87;
    float d = c / b;
    cout << d << endl;
}
int main()
{
    cout << "IMPLICIT TYPE" << endl;
    implicitype();
    cout << "EXPLICIT TYPE" << endl;
    explicitype();
}