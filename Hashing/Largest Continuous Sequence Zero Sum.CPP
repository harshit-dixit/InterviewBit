vector<int> Solution::lszero(vector<int> &A) {
    int n=A.size();
    unordered_map<int,int> m;
    int s=0,mx=0,ma=-1,mb=-1;
    for(int i=0;i<n;i++)
    {
        s+=A[i];
        if(s==0)
        {
            mx=i+1;
            ma=i;
            mb=0;
        }    
        else
        {
            if(m.count(s))
            {
                if(mx<(i-m[s]))
                {
                    mx=i-m[s];
                    ma=i;
                    mb=m[s]+1;
                }
            }
            else
            {
                m[s]=i;
            }
        }
    }
    vector<int> ans;
    if(ma==-1)  return ans;
    for(int i=mb;i<=ma;i++)
    {
        ans.push_back(A[i]);
    }
    return ans;
}
