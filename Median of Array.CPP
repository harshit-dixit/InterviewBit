double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    int m=A.size();
    int n=B.size();
    if(m>n)
    {
        return findMedianSortedArrays(B,A);
    }
    if(m==0)
    {
        if(n%2==0)
        {
            return ((B[n/2]+B[(n/2)-1])/2.0);
        }
        else return B[n/2];
    }
    int lo,hi,cut1,cut2,l1,l2,r1,r2,k;
    k=(m+n+1)/2;
    lo=0;
    hi=m;
    while(lo<=hi)
    {
        cut1=(lo+hi)/2;
        cut2=k-cut1;
        l1=cut1==0?INT_MIN:A[cut1-1];
        l2=cut2==0?INT_MIN:B[cut2-1];
        r1=cut1==m?INT_MAX:A[cut1];
        r2=cut2==n?INT_MAX:B[cut2];
        if(l2<=r1&&l1<=r2)
        {
            if((m+n)%2==0)
            {
                return (max(l1,l2)+min(r1,r2))/2.0;
            }
            else
            {
                return max(l1,l2);
            }
        }
        else if(l2>r1)
        {
            lo=cut1+1;
        }
        else{
            hi=cut1-1;
        }
    }
    return 0.0;
}
