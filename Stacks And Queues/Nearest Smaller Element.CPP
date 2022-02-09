vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> ans;
    stack<int> s;
    for(int i=0;i<A.size();i++)
    {
        if(s.size()==0)
        {
            ans.push_back(-1);
            s.push(A[i]);
        }
        else if(s.top()<A[i])
        {
            ans.push_back(s.top());
            s.push(A[i]);
        }
        else
        {
            while(s.size()>0&&s.top()>=A[i])
            {
                s.pop();
            }
            if(s.size()==0) ans.push_back(-1);
            else    ans.push_back(s.top());
            s.push(A[i]);
        }
    }
    return ans;
}
