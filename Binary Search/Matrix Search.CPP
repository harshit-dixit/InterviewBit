int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n=A.size();
    int m=A[0].size();
    int k=n*m;
    int i,j,st,en,mid,x=0;
    int arr[k]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            arr[x++]=A[i][j];
        }
    }
    st=0;
    en=k-1;
    while(st<=en)
    {
        mid=(st+en)/2;
        if(B>arr[mid])  st=mid+1;
        else if(B<arr[mid]) en=mid-1;
        else    return 1;
        if(st==mid) break;
    }
    return 0;
}



// int Solution::searchMatrix(vector<vector<int> > &A, int B) {
//     int N=A.size();
//     int M=A[0].size();
//     int start=0, end=N*M-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         int x=mid/M;
//         int y=mid%M;
//         if(A[x][y]==B) return 1;
//         if(B<A[x][y]) end=mid-1;
//         else start=mid+1;
//     }
//     return 0;
// }
