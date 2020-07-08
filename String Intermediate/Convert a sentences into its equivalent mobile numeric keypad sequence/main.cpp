#include <iostream>

using namespace std;

string printSeq(string arr[] , string s)
{
    string output = "";

    for(int i=0 ;i<s.length(); i++)
    {
        if(s[i] == ' ')
            output+="0";
        else
        {
            int position = s[i] - 'A';

            output += arr[position];
        }
    }
    return output;
}


int main()
{
     string arr[] = {  "2" , "22" , "222" ,
                        "3" , "33" ,"333" ,
                        "4" , "44" , "444" ,
                        "5" , "55" , "555" ,
                        "6" , "66" , "666" ,
                        "7" , "77" , "777"  ,"7777",
                        "8" , "88" , "888" ,
                        "9" , "99" , "999" , "9999"  };
    string s = "GEEKSFORGEEKS";

    cout << printSeq(arr,s);
    return 0;
}
