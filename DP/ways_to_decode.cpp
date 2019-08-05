#include<bits/stdc++.h>
using namespace std;
int ways(string s)
{
    int n = s.length();
    vector<int> cache(n+1,0);
    cache[0] = 1;  // no of ways to decode an empty string
    if((int)s[0]==0) // if string starts with 0 then no way to decode it
        return 0;
    cache[1] = 1; // first digit is not zero
    if((int)s[1]!=0)  // second digit   
    {
        // consider as single digit
        cache[1] = cache[0];

    }
    
    
    
}
int main()
{
    int n;
    cout<<ways("01");
    return 0;

}