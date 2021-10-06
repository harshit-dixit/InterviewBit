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
                    while(k>j)
                    {
                        str[k]=str[k-1];
                        k--;
                    }
                    str[k]=temp;
                }
                else    k--;
            }
        }
        if(str!=A)  return str;
    }
    return "-1";
}

// Your submission failed for the following input:
// A : "892795"
// Your function returned the following :
// 892975
// The expected returned value :
// 892957
