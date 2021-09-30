vector<int> Solution::solve(vector<int> &A) {
    int n,ni,nn,pi,pn,i,x,y;
    vector<int> ans;
    n=A.size();
    nn=A[0];
    pn=A[n-1];
    ni=0;
    pi=n-1;
    for(i=0;i<n;i++)
    {
        if(A[i]>=nn&&A[i]<0)
        {
            nn=A[i];
            ni=i;
        }
        else if(A[i]<pn&&A[i]>=0)
        {
            pn=A[i];
            pi=i;
        }
    }
    while(ni>=0&&pi<n)
    {
        x=A[ni]*A[ni];
        y=A[pi]*A[pi];
        if(x<y)
        {
            ans.push_back(x);
            ni--;
        }
        else
        {
            ans.push_back(y);
            pi++;
        }
    }
    if(ni==-1)
    {
        while(pi<n)
        {
            y=A[pi]*A[pi];
            ans.push_back(y);
            pi++;
        }
    }
    if(pi==n)
    {
        while(ni>=0)
        {
            y=A[ni]*A[ni];
            ans.push_back(y);
            ni--;
        }
    }
    return ans;
}
