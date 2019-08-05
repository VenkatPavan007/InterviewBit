// #include<bits/stdc++.h>
// using namespace std;
// int minimumInsertions(string s)
// {
//     int len = s.length();
//     int i=0, j=len-1;
//     int no_of_insertions = 0;
//     string str="";
//     while(i<j)
//     {
//         if(s[i]!=s[j])
//         {
//             ++no_of_insertions;
//             str+=s[j];
//             --j;
//         }
//         else
//         {
//             ++i;
//             --j;
//         }
        
        
//     }
//     s = str+s;
//     cout<<s;
//     return no_of_insertions;
// }
// int main()
// {
//     string s = "#$#!";
//     cout<<minimumInsertions(s);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
vector<vector<bool>> longestPallindrome(string s)
{
    int len = s.length();
    
    vector<bool> v (len,false);
    vector<vector<bool>> isPallindrome(len,v);
    //int left = 0,  right = 0;
    for(int j = 1; j<len ; j++)
    {
        for(int i = 0 ; i<j ;i++)
        {
            if(s[i]==s[j] && (isPallindrome[i+1][j-1] || j-i<=2))
            {
                isPallindrome[i][j]=true;
                // if(j-i > right-left)
                // {
                //     left = i;
                //     right = j;
                // }
            }
            
        }
    }
    //cout<<right-left;
    return isPallindrome;
}
int no_of_insertions =0;
int minimumInsertions(string s, vector<vector<bool>> isPallindrome, int i, int j)
{
    if(i>=j)
        return 0;
    if(j-i==1)
        return 0;
    if(!isPallindrome[i][j])
    {
        ++no_of_insertions;
        if(isPallindrome[i+1][j-1])
            return 0;
        else
        {
            
            return minimumInsertions(s,isPallindrome,i+1,j-1);
            return minimumInsertions()
            return minimumInsertions(s,isPallindrome,i+1,j-1);

        }
        

    }
    return 0;
    

}
int main()
{
    string s = "abc";
    cout<< minimumInsertions(s,longestPallindrome(s),0, s.length()-1);
    return 0;
}