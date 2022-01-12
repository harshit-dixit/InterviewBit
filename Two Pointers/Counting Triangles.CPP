int Solution::nTriang(vector<int> &A) {
    int n=A.size();
    long long i,j,k,ans=0,m=1e9+7;
    sort(A.begin(),A.end());
    for(k=n-1;k>=0;k--)
    {
        i=0;
        j=k-1;
        while(i<j)
        {
            if(A[i]+A[j]>A[k])
            {
                ans+=j-i;
                j--;                //IMPORTANT
            }
            else    i++;
        }
        ans=ans%m;
    }
    return (int)ans;
}
