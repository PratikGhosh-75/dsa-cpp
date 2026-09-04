#include <iostream>
#include <queue>
using namespace std;
int main()
{

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    cout << "Front element -->" << q.front() << endl;
    cout << "Last element -->" << q.back() << endl;
    return 0;
}