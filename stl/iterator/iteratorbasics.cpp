#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    vector<int>::iterator it = arr.begin();
    while(it != arr.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    forward_list<int> mylist;
    mylist.push_front(10);
    mylist.push_front(20);
    mylist.push_front(30);

    forward_list<int>::iterator it1 = mylist.begin();
    while(it1 != mylist.end())
    {
        (*it1) = (*it1) + 5;
        it1++;
    }

    it1 = mylist.begin();
    while(it1 != mylist.end())
    {
        cout << *it1 << " ";
        it1++;
    }
    cout << endl;

    list<int> mylist1;
    mylist1.push_back(10);
    mylist1.push_back(20);
    mylist1.push_back(30);

    list<int>::iterator it2 = mylist1.begin();
    while(it2 != mylist1.end())
    {
        (*it2) = (*it2) + 2;
        it2++;
    }

    it2 = mylist1.begin();
    while(it2 != mylist1.end())
    {
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;

    list<int> mylist2;
    mylist2.push_back(10);
    mylist2.push_back(20);
    mylist2.push_back(30);

    list<int>::iterator it3 = mylist2.end();
    while(it3 != mylist2.begin())
    {
        it3--;
        cout << *it3 << " ";
    }
    cout << endl;
    return 0;
}