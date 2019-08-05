#include<bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int>& arr, int key)
{
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            if(mid!=0 && arr[mid-1]==key)
            {
                end = mid-1;
            }
            else
                return mid;
        }
        else if(arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
 int lastOccurence(vector<int>& arr,int key)
 {
     int n = arr.size();
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            if(mid!=n-1 && arr[mid+1]==key)
            {
                start = mid+1;
            }
            else
                return mid;
        }
        else if(arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return -1;
 }
int main()
{
    vector<int> arr{8};
    int first = firstOccurence(arr,8);
    //cout<<first;
    if(first == -1)
        return 0;
    int last = lastOccurence(arr,8);
    cout<<first<<" "<<last;
    return 0;
}