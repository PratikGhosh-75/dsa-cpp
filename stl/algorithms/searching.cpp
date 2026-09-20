#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    int target = 40;
    bool it = binary_search(arr.begin(), arr.end(), target);
    cout << it << endl;

    auto it1 = lower_bound(arr.begin(), arr.end(), 30);
    cout << *it1 << endl;
    
    auto it2 = upper_bound(arr.begin(), arr.end(), 30);
    cout << *it2 << endl;

    vector<int> arr1(5);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 2;
    arr1[3] = 2;
    arr1[4] = 4;
    auto it3 = equal_range(arr1.begin(), arr1.end(), 2);
    cout << "First Position is " << it3.first - arr1.begin() << endl;
    cout << "Second Position is " << it3.second - arr1.begin() << endl;

    int a = 10;
    int b = 15;
    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    
    auto it4 = max_element(arr.begin(), arr.end());
    cout << *it4 << endl;
    auto it5 = min_element(arr.begin(), arr.end());
    cout << *it5 << endl;

    return 0;
}