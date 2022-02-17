void f(int ind,vector<int> &q,int n,vector<int> &A,vector<vector<int>> &ans)
{
    if(ind==n)
    {
        ans.push_back(q);
        return;
    }
    f(ind+1,q,n,A,ans);
    q.push_back(A[ind]);
    f(ind+1,q,n,A,ans);
    q.pop_back();
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    int ind,n=A.size();
    vector<int> q;
    vector<vector<int>> ans;
    sort(A.begin(),A.end());
    f(0,q,n,A,ans);
    sort(ans.begin(),ans.end());
    ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
    return ans;
}
