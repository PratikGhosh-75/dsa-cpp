#include <iostream>
#include <queue>
using namespace std;
int main()
{

    priority_queue<int> pq;
    pq.push(10);
    pq.push(25);
    pq.push(55);
    pq.push(25);

    cout << pq.top() << endl;

    pq.pop();

    cout << pq.top() << endl;
    cout << pq.size() << endl;

    if (pq.empty())
    {
        cout << "Queue is empty!!" << endl;
    }
    else
    {
        cout << "Queue is not empty!!" << endl;
    }

    //min heap

    priority_queue<int, vector<int>, greater<int> > pq1;
    pq1.push(100);
    pq1.push(50);
    pq1.push(70);
    pq1.push(250);

    cout << pq.top() << endl;

    pq.pop();

    cout << pq.top() << endl;
    cout << pq.size() << endl;
    return 0;
}