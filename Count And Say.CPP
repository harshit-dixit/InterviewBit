string Solution::countAndSay(int A) {
    string str;
    int num=1,count,k=1,ans=0,p,m,c,x;
    while(k<A)
    {
        while(str.length())
        {
            str.pop_back();
        }
        //str.clear();
        while(num!=0)
        {
            //reverse num;
            c=0;
            x=num;
            while(x!=0)
            {
                c*=10;
                c+=x%10;
                x/=10;
            }
            num=c;
            //reverse end
            m=num%10;
            p=0;
            while(m==num%10)
            {
                p++;
                num/=10;
            }
            str.push_back(p);
            str.push_back(m);
        }
        num=0;
        for(auto it=str.begin();it!=str.end();it++)
        {
            num*=10;
            num+=(*it);
        }
        k++;
    }
    return str;
}
