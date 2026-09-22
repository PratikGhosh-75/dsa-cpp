#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    vector<int> arr1;
    arr1.push_back(30);
    arr1.push_back(40);
    arr1.push_back(50);
    arr1.push_back(60);

    vector<int> result;
    set_union(arr.begin(), arr.end(), arr1.begin(), arr1.end(), inserter(result, result.begin()));

    for(int a: result)
    {
        cout << a << " ";
    }
    cout << endl;

    vector<int> result1;
    set_intersection(arr.begin(), arr.end(), arr1.begin(), arr1.end(), inserter(result1, result1.begin()));

    for(int a: result1)
    {
        cout << a << " ";
    }
    cout << endl;

    vector<int> result2;
    set_difference(arr.begin(), arr.end(), arr1.begin(), arr1.end(), inserter(result2, result2.begin()));

    for(int a: result2)
    {
        cout << a << " ";
    }
    cout << endl;

    vector<int> result3;
    set_symmetric_difference(arr.begin(), arr.end(), arr1.begin(), arr1.end(), inserter(result3, result3.begin()));

    for(int a: result3)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}