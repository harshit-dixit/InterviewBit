void f(int i, int n, int k, vector<int> &ds, vector<vector<int>> &ans)
{
    if(k==0)
    {
        ans.push_back(ds);
        return;
    }
    if(i<=n)
    {
        ds.push_back(i);
        f(i+1,n,k-1,ds,ans);
        ds.pop_back();
        f(i+1,n,k,ds,ans);
    }
}

vector<vector<int> > Solution::combine(int A, int B) {
    vector<int> ds;
    vector<vector<int>> ans;
    f(1,A,B,ds,ans);
    return ans;
}
