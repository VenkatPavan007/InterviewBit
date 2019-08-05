#include<bits/stdc++.h>
using namespace std;

int minJumps(vector<int> & arr)
{
    int n = arr.size();
    vector<int> sol_arr(n,INT_MAX);
    sol_arr[0]=0;  // since we are already standing at 0th position
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=arr[i];j++)
        {
            if(sol_arr[i+j]==INT_MAX)
                return -1;
            if(i+j<n && sol_arr[i+j]>sol_arr[i]+1)
                sol_arr[i+j] = sol_arr[i]+1;     // 1 step from arr[i] to arr[j]
        }
    }

    if(sol_arr[n-1]==INT_MAX)
        return -1;
    return sol_arr[n-1];
}

int minJumpsDP(vector<int> & arr)
{
    int n = arr.size();
    vector<int> dp(n,INT_MAX);
    dp[0] = 0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(j+dp[j]>=i)  // check if i is reachable from j
            {
                if(dp[j]+1 < dp[i])
                {
                    dp[i] = dp[j]+1;
                }  
            }
                      
        }
        if(dp[i]==INT_MAX) //  no way to reach i from any j
                return -1;
        
    }
    return dp[n-1];
}

int minJumpsGreedy(vector<int> & arr)
{
    int n = arr.size();
    if(n==1)
        return 0;  // already on that step
    int maxReach = arr[0], currMaxReach = arr[0] , steps = 1;
    for(int i=1; i<=maxReach ; i++)
    {
        if(i==n-1)
            return steps;
        currMaxReach = max(currMaxReach,i+arr[i]);
        if(i==maxReach)
        {
            if(currMaxReach<=i)
                return -1;
            ++steps;
            maxReach = currMaxReach;
            
        }
    }
    return -1;

}
int main()
{
    vector<int> arr{1, 0, 5};
    cout<<minJumpsDP(arr);    
    return 0;
}
