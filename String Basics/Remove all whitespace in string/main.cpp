#include <iostream>
#include<bits/stdc++.h>

using namespace std;

string removeSpace(string str)
{
    str.erase(remove(str.begin() , str.end() , ' ') ,str.end());
    return str;

}


int main()
{
    string str = "g eeks   for ge eeks    ";
    cout << "Original String is : " << str <<endl;
    str = removeSpace(str);
    cout << "After remove space String is : " <<endl;
    cout << str;
    return 0;
}
