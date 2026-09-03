#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> marks;
    
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout << "The size of vector is " << marks.size() << endl;
    
    marks.pop_back();

    if (marks.empty())
    {
        cout << "The vector is empty!!" << endl;
    }
    else
    {
        cout << "The vector is not empty!!" << endl;
    }

    cout << "The vector contains: ";

    for (int i=0; i<marks.size(); i++)
    {
        cout << marks[i] << ',';
    }

    for (int i: marks)
    {
        cout << i << endl;
    }

    cout << endl << "The first element is " << marks.front() << endl;
    cout << "The last element is " << marks.back() << endl;

    vector<int> first;
    first.push_back(100);
    first.push_back(200);
    first.push_back(300);
    first.push_back(400);

    vector<int>::iterator it = first.begin();
    while (it != first.end())
    {
        cout << *it << endl;
        it ++;
    }

    vector<vector<int>> arr(5, vector<int>(5,0));
    int rows = arr.size();
    int columns = arr[0].size();
    cout << rows << endl;
    cout << columns << endl;

    vector<vector<int>> arr1(5);
    arr1[0] = vector<int>(5);
    arr1[1] = vector<int>(2);
    arr1[2] = vector<int>(3);
    arr1[3] = vector<int>(6);
    arr1[4] = vector<int>(1);
    for (int i=0; i<arr1.size(); i++)
    {
        cout << arr1[i].size() <<endl; 
    }
    return 0;
}