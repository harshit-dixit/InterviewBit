bool valid(string s, int start, int end)
    {
        while(start<end)
        {
            if(s[start++]!=s[end--])    return false;
        }
        return true;
    }
    
void f(string s, int ind, vector<string> &path, vector<vector<string>> &ans)
    {
        if(ind==s.length())
        {
            ans.push_back(path);
            return;
        }
        for(int i=ind;i<s.length();i++)
        {
            if(valid(s,ind,i))
            {
                path.push_back(s.substr(ind,i-ind+1));
                f(s,i+1,path,ans);
                path.pop_back();
            }
        }
    }

vector<vector<string> > Solution::partition(string A) {
    vector<vector<string>> ans;
    vector<string> path;
    f(A,0,path,ans);
    return ans;
}
