#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool IsBalanced(string s)
{
    stack<char> stk;
    char x;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stk.push(s[i]);
                continue;
            }
            if(stk.empty())
                return false;

        switch(s[i])
        {
        case ')':
            x = stk.top();
            stk.pop();

            if(x == '{' || x == '[')
                {
                    return false;
                }
                break;
        case '}':
            x = stk.top();
            stk.pop();

            if(x == '[' || x == '(')
            {
                return false;
            }
            break;
        case ']':
            x = stk.top();
            stk.pop();

            if(x == '{' || x == '(')
                {
                    return false;

                }
                break;
        }
    }
    return (stk.empty());
}


int main()
{
     string s = "{()}[]";
     if(IsBalanced(s))
        cout << "Balanced";
     else
        cout << "Not Balanced";
}
