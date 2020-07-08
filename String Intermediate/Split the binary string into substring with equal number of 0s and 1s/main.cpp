#include <iostream>

using namespace std;

int maxSubstr(string s , int n)
{
    int count_0=0 , count_1=0, cnt=0;

    for(int i=0;i<n;i++)
    {
        if(s[i] == '0')
        {
            count_0+=1;
        }
        else
        {
            count_1+=1;
        }

        if(count_0 == count_1)
        {
            cnt+=1;
        }

    }

    if(count_0 != count_1)
        return -1;
    else
        return cnt;



}


int main()
{
    string str = "0100110101";

    int n = str.length();

    cout << maxSubstr(str,n) <<endl;

    cout << maxSubstr("0111100010" , 10);
    return 0;
}
