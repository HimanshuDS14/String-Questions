#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int lcs(string s1 , string s2 , int m , int n)
{
    int l[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i == 0 || j== 0)
                l[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
            {
                l[i][j] = l[i-1][j-1] + 1;
            }
            else
            {
                l[i][j] = max(l[i-1][j] , l[i][j-1]);
            }
        }
    }

    return l[m][n];
}


int main()
{
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";

    int m = s1.length();
    int n = s2.length();

    cout << lcs(s1,s2,m,n);
    return 0;
}