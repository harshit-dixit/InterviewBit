int Solution::titleToNumber(string A) {
    int x=0,d=A.length()-1;
    for(int i=0;i<A.length();i++)
    {
        x+=((int)A[i]-64)*pow(26,d);
        d--;
    }
    return x;
}

// Simple math.

// This is just like base 26 number conversion.

// number = 26^0 * (S[n - 1] - ‘A’ + 1) + 26^1 * (S[n - 2] - ‘A’ + 1) + ….
