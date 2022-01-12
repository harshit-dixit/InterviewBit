void Solution::merge(vector<int> &A, vector<int> &B) {
    vector<int> ans;
    int n=A.size(),m=B.size();
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(A[i]<=B[j])
        {
            ans.push_back(A[i]);
            i++;
        }
        else
        {
            ans.push_back(B[j]);
            j++;
        }
    }
    while(i<n)
    {
        ans.push_back(A[i]);
        i++;
    }
    while(j<m)
    {
        ans.push_back(B[j]);
        j++;
    }
    A.clear();
    A=ans;
}


