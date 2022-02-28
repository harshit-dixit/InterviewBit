vector<vector<int> > Solution::fourSum(vector<int> &A, int t) {
    sort(A.begin(),A.end());
    vector<vector<int>> ans;
    int n=A.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int t2=t-A[i]-A[j];
            int l=j+1;
            int r=n-1;
            while(l<r)
            {
                int x=A[l]+A[r];
                if(x<t2)    l++;
                else if(x>t2)   r--;
                else
                {
                    vector<int> q(4,0);
                    q[0]=A[i];
                    q[1]=A[j];
                    q[2]=A[l];
                    q[3]=A[r];
                    ans.push_back(q);
                    while(l<r&&A[l]==q[2])  l++;
                    while(l<r&&A[r]==q[3])  r--;
                }
            }
            while(j+1<n&&A[j+1]==A[j])  j++;
        }
        while(i+1<n&&A[i+1]==A[i])  i++;
    }
    return ans;
}
