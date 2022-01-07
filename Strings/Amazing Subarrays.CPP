int Solution::solve(string A) {
    int i,ans=0,k;
    for(i=0;i<A.length();i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
        {
            k=A.length()-i;
            ans+=k;
        }
        ans=ans%10003;
    }
    return ans;
}


//The main idea to solve this problem is to traverse the string and when you encounter a vowel, add ( length(string) - position_of_curr_char ) to the answer.
