int Solution::trap(const vector<int> &A) {
    int n=A.size();
    int mxl[n],mxr[n],ans=0,i;
    mxl[0]=A[0];
    for(i=1;i<n;i++)
    {
        mxl[i]=max(mxl[i-1],A[i]);
    }
    mxr[n-1]=A[n-1];
    for(i=n-2;i>=0;i--)
    {
        mxr[i]=max(mxr[i+1],A[i]);
    }
    for(i=0;i<n;i++)
    {
        ans+=min(mxl[i],mxr[i])-A[i];
    }
    return ans;
}


// Instead of calculating area by height*width, we can think it in a cumulative way. In other words, sum water amount of each bin(width=1). 
// Search from left to right and maintain a max height of left and right separately, which is like a one-side wall of partial container. 
// Fix the higher one and flow water from the lower part. For example, if current height of left is lower, we fill water in the left bin. 
// Until left meets right, we filled the whole container.
