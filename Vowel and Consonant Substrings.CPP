int Solution::solve(string A) {
    int n=A.length();
    int i,j,v=0,c=0;
    vector<int> x;
    for(i=0;i<n;i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
        {
            v++;
            x.push_back(0);
        }
        else
        {
            c++;
            x.push_back(1);
        }
    }
    long long ans=0;
    for(i=0;i<n;i++)
    {
        if(x[i]==0)
        {
            ans+=c;
            v--;
        }
        else
        {
            ans+=v;
            c--;
        }
        ans=ans%1000000007;
    }
    return (int)ans;
}





// Method-1
// An efficient solution is to count vowels and consonants in every suffix of string.
// After counting these, we traverse string from beginning.
// For every consonant, we add number of vowels after it to result. Similarly, for every vowel, we add number of consonants after it.
// Time Complexity:O(|A|)
// Space Complexity:O(|A|)

// Method-2

//     Just loop from 1 to 	A 	and maintain two variables named “vow” and “con” denoting the number of vow and con seen so far.
//     If the current character is vowel then do:
//         vow += 1
//         numberofSubstring += con //denoting the number of substring start with consonants and ending with this vowel.
//     Do similarly for consonants

// Time Complexity:O(|A|)
// Space Complexity:O(1)
