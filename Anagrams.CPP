vector<vector<int> > Solution::anagrams(const vector<string> &B) {
    vector<string> A=B;
    vector<vector<int>> ans;
    map<string,vector<int>> m;
    for(int i=0;i<A.size();i++)
    {
        sort(A[i].begin(),A[i].end());
        m[A[i]].push_back(i+1);
    }
    for(auto it:m)
    {
        ans.push_back(m[it.first]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
