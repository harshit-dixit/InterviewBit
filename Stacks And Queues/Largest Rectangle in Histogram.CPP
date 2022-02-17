int Solution::largestRectangleArea(vector<int> &A) {
    int n=A.size(),i;
    stack<int> ls;
    vector<int> left;
    for(i=0;i<n;i++)
    {
        if(ls.size()==0)    left.push_back(-1);
        else if(A[ls.top()]<A[i])   left.push_back(ls.top());
        else
        {
            while(ls.size()>0&&A[ls.top()]>=A[i])  ls.pop();
            if(ls.size()==0) left.push_back(-1);
            else    left.push_back(ls.top());
        }
        ls.push(i);
    }
    stack<int> rs;
    vector<int> right;
    for(i=n-1;i>=0;i--)
    {
        if(rs.size()==0)    right.push_back(n);
        else if(A[rs.top()]<A[i])   right.push_back(rs.top());
        else
        {
            while(rs.size()>0&&A[rs.top()]>=A[i])  rs.pop();
            if(rs.size()==0) right.push_back(n);
            else    right.push_back(rs.top());
        }
        rs.push(i);
    }
    reverse(right.begin(),right.end());
    int area=0;
    for(i=0;i<n;i++)
    {
        area=max(((right[i] - left[i] - 1)*A[i]),area);
    }
    return area;
}
