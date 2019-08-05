#include<bits/stdc++.h>
using namespace std;
int jumpGame(vector<int> &arr)
{  
    int n = arr.size();
    if(n==1)
        return 1;
    int minPossibleIndex = n-1;
    
    for(int i= n-2; i>=0; i--)
    {
        if(i+arr[i]>= minPossibleIndex)
        {
            minPossibleIndex = i;
        }  
        
    }
    if(minPossibleIndex!=0)
        return 0;
    return 1;
}
int main()
{
    vector<int> arr{1, 0, 5};
    cout<<jumpGame(arr);    
    return 0;
}