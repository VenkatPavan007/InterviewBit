#include<bits/stdc++.h>
using namespace std;
string longestPallindrome(string s)
{
    int len = s.length();
    if(len<2)
        return s.substr(0);
    bool ** isPallindrome = new bool*[len];    
    for(int i=0;i< len ;i++)
    {
        isPallindrome[i] = new bool[len];
    }
    int left = 0,  right = 0;
    for(int j = 1; j<len ; j++)
    {
        for(int i = 0 ; i<j ;i++)
        {
            if(s[i]==s[j] && (isPallindrome[i+1][j-1] || j-i<=2))
            {
                isPallindrome[i][j]=true;
                if(j-i > right-left)
                {
                    left = i;
                    right = j;
                }
            }
            
        }
    }
    //cout<<right-left;
    return s.substr(left, right-left+1);
}
int main()
{
    string s = "abbcccbbbcaaccbababcbcabca";
    cout<< longestPallindrome(s);
    return 0;
}