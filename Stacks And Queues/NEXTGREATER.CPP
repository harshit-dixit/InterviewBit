vector<int> Solution::nextGreater(vector<int> &A) {
    int n=A.size();
    stack<int> s;
    vector<int> v;
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0) v.push_back(-1);
        else if(s.top()>A[i])   v.push_back(s.top());
        else
        {
            while(s.size()>0&&s.top()<=A[i])    s.pop();
            if(s.size()==0) v.push_back(-1);
            else    v.push_back(s.top());
        }
        s.push(A[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}
