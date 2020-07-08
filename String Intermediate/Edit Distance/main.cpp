#include <iostream>

using namespace std;

int min(int x , int y , int z)
{
    return min(min(x,y),z);
}

int Edit(string s1 , string s2)
{
    int m = s1.length();
    int n = s2.length();

    int l[m+1][n+1];

    for(int i=0; i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
                l[i][j] = j;
            else if(j==0)
                l[i][j] = i;
            else if(s1[i-1] == s2[j-1])
                l[i][j] = l[i-1][j-1];
            else
            {
                l[i][j] = 1 + min(l[i-1][j] ,
                                  l[i-1][j-1] ,
                                  l[i][j-1]);
            }
        }
    }
    return l[m][n];
}


int main()
{
    string s1 = "sunday";
    string s2 = "saturday";

    cout << Edit(s1,s2);
    return 0;
}
