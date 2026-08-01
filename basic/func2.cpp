#include <iostream>
using namespace std;

int a, b, c;

int sum1(int a, int b, int c)
{
    int s = a + b + c;
    return s;
}


int sum2()
{
    int s = a + b + c;
    return s;
}

void sum3(int a, int b, int c)
{
    int s = a + b + c;
    cout << s << endl;
}

void sum4()
{
    int s = a + b + c;
    cout << s << endl;
}

int main()
{
    cout << "Enter three numbers!!" << endl;
    cin >> a >> b >> c;
    cout << "Sum using function having argument and having return type: " << sum1(a,b,c) << endl;
    cout << "Sum using function having no argument and having return type: " << sum2() << endl;
    cout << "Sum using function having argument and having no return type: ";
    sum3(a,b,c);
    cout << "Sum using function having no argument and having no return type: ";    
    sum4();
    return 0;
}