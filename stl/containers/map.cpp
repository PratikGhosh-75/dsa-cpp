#include<iostream>
#include<map>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string, string> table;

    table["in"] = "INDIA";
    table.insert(make_pair("en","ENGLAND"));

    pair<string, string> p;
    p.first = "br";
    p.second = "BRAZIL";
    table.insert(p);

    cout << "Size of map: " << table.size() << endl;
    cout << table.at("in") << endl;

    table.at("in") = "INDIA2";
    cout << table.at("in") << endl;

    table["in"] = "INDIA3";
    cout << table.at("in") << endl;

    unordered_map<string,string>::iterator it = table.begin();
    while (it != table.end())
    {
        pair<string,string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }
    if (table.count("in") == 0)
    {
        cout << "Key not found" << endl;
    }
    if (table.count("in") == 1)
    {
        cout << "Key found" << endl;
    }

    map <string,string> table1;
    table1["in"] = "INDIA";
    table1["en"] = "ENGLAND";
    table1["br"] = "BRAZIL";
    table1["ar"] = "ARGENTINA";
    
    map<string,string>::iterator it1 = table1.begin();
    while(it1 != table1.end())
    {
        pair<string,string> p1 = *it1;
        cout << p1.first << " " << p1.second << endl;
        it1++;
    }

    map<int,string> table2;
    table2[1] = "WEST BENGAL";
    table2[3] = "ASSAM";
    table2[5] = "MUMBAI";
    table2[4] = "DELHI";
    table2[2] = "BIHAR";
    table2[7] = "JHARKHAND";
    table2[6] = "PUNE";

    map<int,string>::iterator it2 = table2.begin();
    while(it2 != table2.end())
    {
        pair<int,string> p2 = *it2;
        cout << p2.first << " " << p2.second << endl;
        it2++;
    }
    return 0;
}