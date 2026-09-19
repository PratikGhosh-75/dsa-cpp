#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool checkEven(int a)
{
    return a%2==0;
}
void printDouble(int a)
{
    cout << 2*a << " ";
}
int main()
{
    vector<int> arr(5);
    arr[0] = 11;
    arr[1] = 20;
    arr[2] = 11;
    arr[3] = 40;
    arr[4] = 11;
    for_each(arr.begin(), arr.end(), printDouble);

    int target = 40;
    auto it = find(arr.begin(), arr.end(), target);
    cout << *it << endl;

    auto it1 = find_if(arr.begin(), arr.end(), checkEven);
    cout << *it1 << endl;

    int target1 = 11;
    int ans = count(arr.begin(), arr.end(), target1);
    cout << ans << endl;

    int ans1 = count_if(arr.begin(), arr.end(), checkEven);
    cout << ans1 << endl;

    sort(arr.begin(), arr.end());
    for(int a: arr)
    {
        cout << a << " ";
    }

    cout << endl;
    auto it2 = unique(arr.begin(), arr.end());
    arr.erase(it2, arr.end());
    for(int a: arr)
    {
        cout << a << " ";
    }

    cout << endl;
    reverse(arr.begin(), arr.end());
    for(int a: arr)
    {
        cout << a << " ";
    }

    vector<int> arr1(6);
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    arr1[3] = 40;
    arr1[4] = 50;
    arr1[5] = 60;
    cout << endl << "Before" << endl;
    for(int a: arr1)
    {
        cout << a << " ";
    }
    rotate(arr1.begin(), arr1.begin()+3, arr1.end());
    cout << endl << "After" << endl;
    for(int a: arr1)
    {
        cout << a << " ";
    }

    vector<int> arr2(6);
    arr2[0] = 10;
    arr2[1] = 11;
    arr2[2] = 12;
    arr2[3] = 13;
    arr2[4] = 14;
    arr2[5] = 15;

    cout << endl;
    partition(arr2.begin(), arr2.end(), checkEven);
    for (int a: arr2)
    {
        cout << a << " ";
    }
    return 0;
}