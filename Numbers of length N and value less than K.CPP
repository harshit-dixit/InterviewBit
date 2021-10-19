int Solution::solve(vector<int> &A, int B, int C) {
    int temp=C,count=0,ans=0,i,j,flag=0;
    if(A.size()==0) return 0;
    while(temp)
    {
        temp/=10;
        count++;
    }
    if(count<B) return 0;                                   //Case 1
    else if(count>B)                                        //Case 2
    {
        if(A[0]==0) ans = (A.size()-1)*pow(A.size(),B-1);
        else    ans =  pow(A.size(),B);
        if(A[0]==0&&B==1) return ans+1;
        else return ans;
    }
    else                                                    //Case 3
    {
        if(B==1)
        {
            for(i=0;i<A.size();i++)
            {
                if(A[i]<C) ans++; 
            }
        }
        else
        {
            vector<int> be(B);
            for(i=B-1;i>=0;i--)
            {
                be[i]=C%10;
                C/=10;
            }
            flag=0;
            count=0;
            for(i=0;i<A.size();i++)
            {
                if(A[i]==0) continue;
                if(A[i]>be[0])  break;
                count++;
            }
            ans+=count*pow(A.size(),B-1);
            for(i=0;i<A.size();i++)
            {
                if(A[i]==be[0]) flag=1;
            }
            j=1;
            while(flag==1&&j<B)
            {
                flag=0;
                count=0;
                for(i=0;i<A.size();i++)
                {
                    if(A[i]>be[j])  count++;
                    if(A[i]==be[j]) flag=1;
                }
                ans-=count*pow(A.size(),B-j-1);
                j++;
            }
            if(flag==1&&j==B) ans--;
            return ans;
        }
        return ans;
    }
}
