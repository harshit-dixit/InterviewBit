int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int i,j,ans=0,x;
    i=-1;
    x=-1;
    j=B-1;
    while(x<n-1)
    {
        if(j>n-1) j=n-1;
        while(j>i)
        {
            if(A[j]==1)
            {
                ans++;
                x=j+B-1;
                break;
            }
            else    j--;
        }
        if(j==i)
        {
            ans=0;
            break;
        }
        else    i=j;
        j+=2*B-1;
    }
    if(ans==0)  return -1;
    else return ans;
}
