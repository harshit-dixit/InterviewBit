int Solution::solve(vector<string> &A) {
    int n=A.size();
    double sum,a,b,c,temp;
    int i,j;
    i=0;
    j=2;
    a=stod(A[i]);
    b=stod(A[i+1]);
    c=stod(A[i+2]);
    sum=a+b+c;
    while(j<n)
    {
        if(sum>1&&sum<2)    return 1;
        j++;
        if(j>=n)    return 0;
        temp=stod(A[j]);
        if(sum>=2)
        {
            if(a>b&&a>c) {  sum-=a; a=temp; sum+=temp;}
            else if(b>a&&b>c){  sum-=b; b=temp; sum+=temp;}
            else {  sum-=c; c=temp; sum+=temp;}
        }
        else
        {
            if(a<b&&a<c)    {   sum-=a; a=temp; sum+=temp;  }
            else if(b<a&&b<c)   {   sum-=b; b=temp; sum+=temp;  }
            else    {   sum-=c; c=temp; sum+=temp;  }
        }
    }
    return 0;
}
