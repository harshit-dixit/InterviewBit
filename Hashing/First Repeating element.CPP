int Solution::solve(vector<int> &A) {
    unordered_map<int,int> m;
    int n=A.size(),ans=n;
    for(int i=0;i<n;i++)
    {
        if(m.count(A[i]))   ans=min(ans,m[A[i]]);
        else    m[A[i]]=i;
    }
    if(ans==n)  return -1;
    return A[ans];
}
