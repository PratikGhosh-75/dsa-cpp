#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(20);
    arr.push_back(14);

    make_heap(arr.begin(), arr.end());
    for (int a: arr)
    {
        cout << a << " ";
    }
    cout << endl;

    arr.push_back(88);
    push_heap(arr.begin(),arr.end());
    for (int a: arr)
    {
        cout << a << " ";
    }
    cout << endl;

    pop_heap(arr.begin(), arr.end());
    arr.pop_back();

    sort_heap(arr.begin(), arr.end());
    for (int a: arr)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}