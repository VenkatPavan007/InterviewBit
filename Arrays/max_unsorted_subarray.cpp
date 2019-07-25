vector<int> Solution::subUnsort(vector<int> &arr) {
    int n = arr.size(),i,j,start=n-1,end=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1] && i+1!=n)
        {
            start = i;
            break;
        }
       
    }
    if(start == n-1)  // array is sorted already
    {
        vector<int> res;
        res.push_back(-1);
        return res;
    }
        
    for(j=n-1;j>=0;j--)
    {
        if(arr[j]<arr[j-1] && j-1!=-1)
        {
            end=j;
            break;
        }
       
    }
    //cout<<start<<" "<<end<<endl;
    int min = INT_MAX, max=INT_MIN;
    
    for(int i = start; i<=end;i++)
    {
        if(arr[i]<min)
           min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    //cout<<min<<" "<<max<<endl;
    
    int final_start = start;
    int final_end = end;
    for(int i=start-1;i>=0;i--)
    {
        if(arr[i]>min)
        {
            final_start = i;
           
        }
    }
    for(int i=end+1;i<n;i++)
    {
        if(arr[i]<max)
        {
            final_end = i;
           
        }
    }
    
    while(arr[final_end]==arr[final_end+1] && (final_end+1)!=n)
    {
        ++final_end;
    }
    while(arr[final_start]==arr[final_start-1] && (final_start-1)!=-1)
    {
        --final_start;
    }


    vector<int> res;
    res.push_back(final_start);
    res.push_back(final_end);
    return res;
}
