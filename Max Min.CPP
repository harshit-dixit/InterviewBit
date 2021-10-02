int Solution::solve(vector<int> &A) {
    int n=A.size();
    int max,min,i;
    max=A[0];
    min=A[0];
    for(i=1;i<n;i++)
    {
        if(A[i]>max)    max=A[i];
        else if(A[i]<min)   min=A[i];
    }
    return max+min;
}
