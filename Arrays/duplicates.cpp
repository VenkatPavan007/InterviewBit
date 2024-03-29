int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<bool> visited(A.size()+1,false);
    
    for(int i=0;i<A.size();i++)
    {
        if(visited[A[i]] ==true)
            return A[i];
        visited[A[i]]=false;
    }
    return -1;
}
