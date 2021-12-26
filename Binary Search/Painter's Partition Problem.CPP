int Solution::paint(int A, int B, vector<int> &C) {
    int n=C.size();
    long long l=INT_MIN,u=0,mid,i,k,sum,ans=0;
    for(i=0;i<n;i++)
    {
        if(C[i]>l)  l=C[i];
        u+=C[i];
    }
    if(n<=A)    return (l*B)%10000003;
    while(l<=u)
    {
        mid=(l+u)/2;
        i=0;
        sum=0;
        k=A;
        while(i<n)
        {
            while(sum+C[i]<=mid&&i<n)
            {
                sum+=C[i];
                i++;
            }
            k--;
            sum=0;
        }
        if(k>=0)
        {
            ans=mid;
            u=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return (ans*B)%10000003;
}



