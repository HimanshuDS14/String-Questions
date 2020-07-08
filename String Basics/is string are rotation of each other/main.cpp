#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool isRotation(string s1 , string s2)
{
    if(s1.length() != s2.length())
        return false;

    string temp = s1 + s2;

    return(temp.find(s2) != string ::npos);


}

int main()
{
    string st1 = "AACD";
    string st2 = "ACDA";

    if(isRotation(st1 , st2))
        cout << "String are Rotation of Each Other ";
    else
        cout << "String are Not Rotation of Each Other";
    return 0;
}
