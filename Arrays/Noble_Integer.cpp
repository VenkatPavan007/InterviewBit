int Solution::solve(vector<int> &A) {
    int n = A.size();
    sort(A.begin(),A.end());
    
    for(int i=0;i<n;i++)
    {
        if(A[i]<=n && A[i]>=0)
        {
            
                while(A[i]==A[i+1] && i+1!=n)
                {
                    ++i;
                }
            
            if(n-i-1 == A[i])
                return 1;
        }
    }
    return -1;
}
