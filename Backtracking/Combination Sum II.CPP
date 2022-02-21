void f(int ind, int k, vector<int> &A, vector<int> &ds, vector<vector<int>> &ans)
{
    if(k==0)
    {
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<A.size();i++)
    {
        if(i!=ind&&A[i]==A[i-1])    continue;
        if(A[i]>k) break;
        ds.push_back(A[i]);
        f(i+1 ,k-A[i],A,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    vector<int> ds;
    vector<vector<int>> ans;
    f(0,B,A,ds,ans);
    return ans;
}
