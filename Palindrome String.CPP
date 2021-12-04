int Solution::isPalindrome(string A) {
    vector<int> x;
    int n=A.length();
    int i,j;
    for(i=0;i<n;i++)
    {
        if((int)A[i]>=97&&(int)A[i]<=122)     x.push_back((int)A[i]);
        else if((int)A[i]>=65&&(int)A[i]<=90)     x.push_back((int)A[i]+32);
        else if((int)A[i]>=48&&(int)A[i]<=57)   x.push_back((int)A[i]);
    }
    j=x.size();
    for(i=0;i<j/2;i++)
    {
        if(x[i]!=x[j-i-1])
        {
            return 0;
        }
    }
    return 1;
}


// You need to maintain 2 pointers, one from the beginning and one from the end.

// At every iteration, after skipping the non alphanumeric characters, both the characters should match.

// Have you considered empty strings?

// Empty strings are palindromes. This is however, a nice question for clarification from the interviewer.
