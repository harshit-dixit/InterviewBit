int Solution::solve(vector<int> &A, int B) {
    int n=A.size(),bio;
    for(int i=1;i<n-1;i++)
    {
        if(A[i]>A[i-1]&&A[i]>A[i+1])    bio=i;
    }
    int s1=0,e1=bio-1,s2=bio+1,e2=n-1,mid;
    if(B==A[bio])   return bio;
    else if(B>A[bio])   return -1;
    else
    {
        while(s1<=e1)
        {
            mid=(s1+e1)/2;
            if(B==A[mid])   return mid;
            else if(B>A[mid])   s1=mid+1;
            else e1=mid-1;
        }
        while(s2<=e2)
        {
            mid=(s2+e2)/2;
            if(B==A[mid])   return mid;
            else if(B>A[mid])   e2=mid-1;
            else s2=mid+1;
        }
        return -1;
    }
}
