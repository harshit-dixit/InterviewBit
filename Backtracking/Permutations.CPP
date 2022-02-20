void f(vector<int> &A, vector<int> &ds, vector<vector<int>> &ans, int freq[])
{
    if(ds.size()==A.size())
    {
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<A.size();i++)
    {
        if(freq[i]==0)
        {
            ds.push_back(A[i]);
            freq[i]=1;
            f(A,ds,ans,freq);
            ds.pop_back();
            freq[i]=0;
        }
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<int> ds;
    vector<vector<int>> ans;
    int freq[A.size()]={0};
    f(A,ds,ans,freq);
    return ans;
}

// Lets say we are at index start then we can swap element at this index with any index>start and permute the elements starting from start+1 using recursion. 
// You can swap back the elements at start and index in order to maintain the order for next recursive call.
