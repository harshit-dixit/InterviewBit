int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size();
    //int ans;
    int arr[n+1]={0};
    for(int i=0;i<n;i++)
    {
        if(A[i]>0&&A[i]<n+1)
        {
            arr[A[i]]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==0)   return i;
    }
    return n+1;
}


// Note: numbers A[i]<=0 and A[i]>N ( N being the size of the array ) is not important to us since the missing positive integer will be in the range [1, N+1].

// The answer will be N+1 only if all of the elements of the array are exact one occurrence of [1, N].
