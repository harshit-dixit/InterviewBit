int Solution::removeDuplicates(vector<int> &A) {
    int n=A.size();
    vector<int> ans;
    int i,j,d=0;
    for(i=0;i<n;i++)
    {
        ans.push_back(A[i]);
        j=i+1;
        if(A[j]==A[i]&&j<n)
        {
            while(A[j]==A[i]&&j<n)
            {
                d++;
                j++;
            }
            i=j-1;
        }
    }
    A.clear();
    A=ans;
    return n-d;
}


//It looks like order of n square but it really is order of n.
