string Solution::solve(string A, int B) {
    string ans;
    int i,j,k,x;
    for(i=0;i<A.length();i++)
    {
        j=i;
        x=1;
        while(A[j+1]==A[j])
        {
            x++;
            j++;
        }
        if(x==B);
        else    ans.push_back(A[i]);
        i=j;
    }
    return ans;
}




