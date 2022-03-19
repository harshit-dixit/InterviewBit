vector<int> Solution::solve(vector<int> &A) {
    unordered_map <int,int> m;
    for(int i=0;i<A.size();i++)
    {
        if(m.find(A[i])!=m.end())
        {
           A[m[A[i]]]++;
           m[A[m[A[i]]]]=m[A[i]];
           m.erase(A[i]); 
        }  
        m[A[i]]=i;
    }
    return A;
}
