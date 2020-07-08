#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(string str)
{
    set<char> s;
    for(int i=0;i<str.length(); i++)
    {
        s.insert(str[i]);
    }

    for(set<char>::iterator it = s.begin(); it!=s.end(); it++)
    {
        cout << *it;
    }
}


int main()
{
    string str = "geeksforgeeks";
    removeDuplicate(str);
    return 0;
}
