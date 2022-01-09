int Solution::compareVersion(string A, string B) {
    unsigned long long a=A.length();
    unsigned long long b=B.length();
    unsigned long long i=0,j=0,x1,x2,flag=0;
    while(i<a||j<b)
    {
        x1=0;
        while(i<a&&A[i]!='.')
        {
            x1*=10;
            x1+=(A[i]-'0');
            i++;
        }
        x2=0;
        while(j<b&&B[j]!='.')
        {
            x2*=10;
            x2+=(B[j]-'0');
            j++;
        }
        if(x1>x2)   return 1;
        if(x2>x1)  return -1;
        i++;
        j++;
    }
    return 0;
}


