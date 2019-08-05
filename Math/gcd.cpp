#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=4,b=6;
    int divisor,dividend;
    int remainder;
    dividend = max(a,b);
    divisor = a+b-dividend;
    while(divisor)
    {
        remainder = dividend % divisor;
        if(remainder==0)
            return divisor;
        dividend = divisor;
        divisor = remainder;
    }
    cout<<divisor;
    return 0;
}