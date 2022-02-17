void f(int ind,vector<int> &C,vector<vector<int>> &ans,int t,vector<int> &ds)
{
    if(ind==C.size())
    {
        if(t==0)    ans.push_back(ds);
        return;
    }
    if(C[ind]<=t)
    {
        ds.push_back(C[ind]);
        f(ind,C,ans,t-C[ind],ds);
        ds.pop_back();
    }
    f(ind+1,C,ans,t,ds);
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>> ans;
    vector<int> ds;
    sort(A.begin(),A.end());
    f(0,A,ans,B,ds);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    return ans;
}


// In every recursion run, you either include the element in the combination or you don’t. 
// To account for multiple occurrences of an element, make sure you call the next function without incrementing the current index.
