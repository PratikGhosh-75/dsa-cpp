#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main()
{
    cout << "Ordered set" << endl;
    set<int> st;
    st.insert(15);
    st.insert(25);
    st.insert(27);
    st.insert(9);
    st.insert(36);
    set<int>::iterator it = st.begin();
    while(it != st.end())
    {
        cout << *it << " ";
        it++;
    }
    unordered_set<int> st1;
    st1.insert(15);
    st1.insert(25);
    st1.insert(27);
    st1.insert(9);
    st1.insert(36);
    cout << endl << "Unordered set" << endl;
    unordered_set<int>::iterator it1 = st1.begin();
    while(it1 != st1.end())
    {
        cout << *it1 << " ";
        it1++;
    }

    if (st.count(15) == 1)
    {
        cout << endl << "Found" << endl;
    }
    else
    {
        cout << endl << "Not found" << endl;
    }
    return 0;
}