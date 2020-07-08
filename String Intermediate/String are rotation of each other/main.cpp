#include <iostream>

using namespace std;

bool isRotation(string st1 , string st2)
{
    if(st1.length() != st2.length())
        return false;

    string temp = st1 + st2;

    return (temp.find(st2) != string ::npos);
}


int main()
{
    string st1 = "AACD";
    string st2 = "ACDA";

    if(isRotation(st1 ,st2))
        cout << "String are rotation of Each other";
    else

        cout << "String Are not rotation of Each Other";
    return 0;
}
