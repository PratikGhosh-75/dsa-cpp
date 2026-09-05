#include <iostream>
#include <queue>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);
    dq.push_front(70);
    dq.push_front(80);
    dq.pop_back();
    dq.pop_front();
    dq.insert(dq.begin(),100);

    cout << "Size of deque: " << dq.size() << endl;

    deque<int>::iterator it = dq.begin();
    while(it != dq.end())
    {
        cout << *it << " ";
        it++;
    }
    
    return 0;
}