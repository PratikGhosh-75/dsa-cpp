#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    vector<int> arr1(5);
    arr1[0] = 11;
    arr1[1] = 12;
    arr1[2] = 13;
    arr1[3] = 14;
    arr1[4] = 15;

    int total = accumulate(arr.begin(), arr.end(), 0);
    cout << "Total sum is " << total << endl;
    
    int ans = inner_product(arr.begin(), arr.end(), arr1.begin(), 0);
    cout << "Inner Product is " << ans << endl;

    vector<int> result(arr.size());

    partial_sum(arr.begin(), arr.end(), result.begin());
    for (int a: result)
    {
        cout << a << " ";
    }
    cout << endl;

    vector<int> arr2(5);
    iota(arr2.begin(), arr2.end(), 1000);
    for (int a: arr2)
    {
        cout << a << " "; 
    }
    return 0;
}