#include <iostream>
#include <list>
using namespace std;
int main()
{

    list<int> myList;

    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_front(50);
    cout << "Size of list: " << myList.size() << endl;

    myList.remove(50);

    list<int>::iterator it = myList.begin();
    while (it != myList.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}