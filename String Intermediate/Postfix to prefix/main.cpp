#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool isOperator(char x)
{
    switch(x)
    {
    case '+':
    case '-':
    case '/':
    case '*':
        return true;
    }
    return false;
}

string postToPre(string s)
{
    stack<string> stk;

    int n = s.size();

    for(int i=0;i<n;i++)
    {
        if(isOperator(s[i]))
        {
            string s1 = stk.top(); stk.pop();
            string s2 = stk.top(); stk.pop();

            string temp = s[i] + s2 + s1;

            stk.push(temp);
        }
        else
        {
            stk.push(string(1,s[i]));
        }

    }
    return stk.top();

}


int main()
{
    string  s = "ABC/-AK/L-*";
    cout << "Prefix : " << postToPre(s);
    return 0;
}
