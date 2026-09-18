#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    stk.pop();
    cout << "Last element --> " << stk.top() << endl;
    return 0;
}