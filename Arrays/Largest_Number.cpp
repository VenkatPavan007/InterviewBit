bool myCompare(int a, int b)
{
    string x = to_string(a);
    string y = to_string(b);
    string xy = x.append(y);
    string yx = y.append(x);
    return xy.compare(yx)>0 ?true: false;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> arr;
    arr.assign(A.begin(),A.end());
    sort(arr.begin(),arr.end(),myCompare);
    string res="";
    for(int i=0;i<arr.size();i++)
    {
        res.append(to_string(arr[i]));
    }
    while(res[0]=='0')     // for input containing all zeroes return only one zero
        res.erase(res.begin()+0);
    if(res.length()==0)
        res+='0';
    return res;
}
