int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int st,en,mid,i=-1,a,b;
    st=0;
    en=n-1;
    a=0;
    b=n-1;
    while(st<en)
    {
        mid=(st+en)/2;
        if(B==A[mid])   break;
        else if(B<A[mid])  { en=mid-1;   b=mid;   }
        else    break;
    }
    for(i=mid;i<=en;i++)
    {
        if(A[i]>B)    break;
    }
    return i;
}



// while(l<=r)
//     {
//         int mid=(l+r)/2;
//         if(a[mid]<=k)
//         {
//             ans=mid+1;
//             l=mid+1;
//         }
//         else
//         {
//             r=mid-1;
//         }
//     }
