vector<string> Solution::fullJustify(vector<string> &A, int B) {
    int n=A.size();
    int i,j,x=0,k=0,m=0,space,s;
    vector<int> len(n);
    vector<string> ans;
    for(i=0;i<n;i++)
    {
        len.push_back(A[i].length());
    }
    for(j=0;j<n;j++)
    {
        if(x+len[j]<=B)
        {
            x+=len[j]+1;
            k++;
        }
        else
        {
            x-=k;
            space=B-x;
            k--;
            m=space%k;
            space/=k;
            string str="";
            for(i=0;i<=k;i++)
            {
                str+=A[i];
                s=0;
                while(s<space)
                {
                    str+=" ";
                    s++;
                }
                if(m>0)
                {
                    str+=" ";
                    m--;
                }
            }
            ans.push_back(str);
            x=0;
            k=0;
            j--;
        }
    }
    return ans;
}
