int Solution::solve(vector<int> &A) {
    long long n,i;
    int ans;
    ans=-1;
    n=A.size();
    sort(A.begin(),A.end());
    for(i=0;i<n-1;i++)
    {
        if(A[i]==n-i-1&&A[i+1]!=A[i])
        {
            ans=1;
            break;
        }
    }
    if(A[n-1]==0)   ans=1;
    return ans;
}

// First we sort the input array.

// Now, all we have to do is to traverse through each element of the array and check whether it matches our given statement, since the array is sorted we directly know how many elements are greater than that number in the array.

// Note: Please take care of cases, when certain element repeats many times.
