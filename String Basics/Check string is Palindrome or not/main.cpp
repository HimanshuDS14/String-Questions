#include<iostream>


using namespace std;


void palindrome(string str)
{
    int n = str.length();
    int flag=0;

    for(int i=0;i<n;i++)
    {
        if(str[i] != str[n-i-1])
        {
            flag=1;
            break;
        }


    }

    if(flag == 1)
    {
        cout << str <<" is Not palindrome ";
    }
    else
    {
        cout << str <<" is Palindrome";
    }
}

int main()
{
    string str = "madam";
    palindrome(str);

}
