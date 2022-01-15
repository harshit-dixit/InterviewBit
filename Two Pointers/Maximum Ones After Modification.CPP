//                                              NOT OPTIMAL
int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int i,j,k,x,ans=0;
    for(i=0;i<n;i++)
    {
        if(A[i]==1)
        {
            k=B;
        }
        else
        {
            k=B-1;
        }
        x=1;
        j=i+1;
        while((k>0||A[j]==1)&&j<n)
        {
            if(A[j]==0)
            {
                k--;
            }
            j++;
            x++;
        }
        ans=max(x,ans);
    }
    return ans;
}


//                                                    OPTIMAL   (Fuckin sliding window)

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int i,j,l=2,x=0,ans=0;
    i=0;
    j=1;
    if(A[i]==0) x++;
    if(A[j]==0) x++;
    while(i<n&&j<n)
    {
        if(x<=B)
        {
            j++;
            if(A[j]==0) x++;
            if(j<n) l++;
        }
        else
        {
            if(A[i]==0) x--;
            i++;
            l--;
        }
        if(x<=B)    ans=max(l,ans);
        else    ans=max(l-1,ans);
    }
    return ans;
}


//                                            BEAUTIFUL SO NOT MINE

int longestOnes(vector<int>& A, int K) {
        int i = 0, j;
        for (j = 0; j < A.size(); ++j) {
            if (A[j] == 0) K--;
            if (K < 0 && A[i++] == 0) K++;
        }
        return j - i;
    }
