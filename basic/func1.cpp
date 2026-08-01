#include <iostream>
using namespace std;
void printName(string name,int n)
{
    for (int i=0; i<n; i++)
        cout << name << endl;
}
void printA()
{
    cout << "Coming to function A" << endl;
    cout << "A is been printed!!" << endl;
}
void printB()
{
    cout << "Coming to function B" << endl;
    cout << "B is being printed!!" << endl;
}
int main()
{
    int n;
    string name;
    cin >> name;
    cin >> n;
    printName(name,n);
    printA();
    printB();
    cout << "coming back to main" << endl;
    return 0;
}