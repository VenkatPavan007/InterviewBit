#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{10, 90, 49, 2, 1, 5, 23};
    int n = arr.size();
    for(int i=0; i<n; i+=2)
    {
        
            if(arr[i]<arr[i+1] && (i+1)!=n)
            {
                swap(arr[i],arr[i+1]);
            }
            if(arr[i]<arr[i-1] && (i-1)>=0)
            {
                swap(arr[i],arr[i-1]);
            }
        
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}