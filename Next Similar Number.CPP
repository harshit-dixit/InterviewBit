string Solution::solve(string A) {
    string str=A;
    int i,j,k,y,x,n=A.length();
    char temp;
    for(i=n-1;i>0;i--)
    {
        x=str[i];
        y=str[i-1];
        if(y<x)
        {
            j=i-1;
            k=n-1;
            while(k>j)
            {
                if(str[k]>y)
                {
                    temp=str[k];
                    str[k]=str[i-1];
                    str[i-1]=temp;
                    k=j;
                    sort(str.begin()+i,str.end());
                }
                else    k--;
            }
        }
        if(str!=A)  return str;
    }
    return "-1";
}
