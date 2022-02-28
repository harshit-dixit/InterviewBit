int Solution::maxSubArray(const vector<int> &A) {
    int s=0,mx=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        s+=A[i];
        mx=max(s,mx);
        if(s<0) s=0;
    }
    return mx;
}
