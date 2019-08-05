int Solution::reverse(int A) {    
    long int rev=0;
    while(A)
    {
       rev = rev*10+(A%10);
       A = A/10;
    }
    if(rev>INT_MAX || rev<INT_MIN)
        return 0;
        
    return rev;    
}
