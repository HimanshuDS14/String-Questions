#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool isOperator(char x)
{
    switch(x)
    {
    case '-':
    case '+':
    case '/':
    case '*':
        return true;

    }
    return false;
}

string pretopost(string s)
{
    stack<string> stk;

    int n = s.length();

    for(int i=n-1;i>=0;i--)
    {
        if(isOperator(s[i]))
        {
            string s1 = stk.top(); stk.pop();
            string s2 = stk.top(); stk.pop();

            string temp = s1+s2+s[i];

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
    string s = "*-A/BC-/AKL";
    cout <<"postfix : "<< pretopost(s);
    return 0;
}
