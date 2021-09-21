int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int i=0,j,ans=0;
    while(i<n)
    {
        j=i+B-1;
        if(j>=n)    j=n-1;
        while(j>i-1)
        {
            if(A[j]==1)
            {
                ans++;
                j+=B-1;
                if(j>=n)    j=n-1;
                break;
            }
            else j--;
        }
        if(j==i-1)  break;
        else i=j+1;
    }
    if(ans==0)  cout<<-1<<"\n";
    else    cout<<ans<<"\n";
}
