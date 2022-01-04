vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> ans;
    long long n=A.size();
    long long x,i,j,k=0,sum;
    sort(A.begin(),A.end());
    for(x=0;x<n-2;x++)
    {
        if(x>0&&A[x]==A[x-1])   continue;                                                         //IMPORTANT
        i=x+1;
        j=n-1;
        while(i<j)
        {
            sum = 0LL + A[x]+A[i]+A[j];                                                           //IMPORTANT
            if(sum==0)
            {
                if(k>0&&(A[x]==ans[k-1][0])&&(A[i]==ans[k-1][1])&&(A[j]==ans[k-1][2]))
                {
                    i++;
                    j--;
                }
                else
                {
                    ans.push_back(vector<int>());
                    ans[k].push_back(A[x]);
                    ans[k].push_back(A[i]);
                    ans[k].push_back(A[j]);
                    k++;
                    i++;
                    j--;
                }
            }
            else if(sum<0)   i++;
            else j--;
        }
    }
    return ans;
}


____________________________________________________________________________________________________________________________________________________________________________________
  
  

vector<vector<int> > Solution::threeSum(vector<int> &A) {
    sort(A.begin(), A.end());
    int n = A.size();
    vector<vector<int>> ans;
    for(int i = 0; i < n - 2; ++i){
        if(i > 0 && A[i] == A[i - 1])
            continue;
        int l = i + 1, r = n - 1;

        while(l < r){
            // long long sum = A[i] + (long long)A[l] + (long long)A[r];
            long long sum = 0LL + A[i] + A[l] + A[r];
            if(sum == 0){
                ans.push_back({A[i], A[l], A[r]});
                while(l < n - 1 && A[l] == A[l + 1])
                    ++l;
                while(r > 0 && A[r] == A[r - 1])
                    --r;
                ++l, --r;
            }
            else if(sum > 0)
                --r;
            else
                ++l;
        }
    }
    return ans;
}

