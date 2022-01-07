// Lets say M is length of haystack and N is length of needle. Then expected complexity here is O(N*M).

int Solution::strStr(const string A, const string B) {
    int i,j;
    for(i=0;i<A.length();i++)
    {
        j=0;
        if(A[i]==B[j])
        {
            while(j<B.length()&&(i+j)<A.length())
            {
                if(A[i+j]==B[j])    j++;
                else    break;
            }
        }
        if(j==B.length())   return i;
    }
    return -1;
}




// Let us first think about a simpler problem. How do you find out if 2 strings are equal?

// Implementing strstr is just plain simple simulation.

// Consider every index i for the answer. Find if the following 2 strings are equal:

// 1) Needle string and,

// 2) String haystack from index i with length the same as needle’s length

// Note that the complexity of this solution is O(M*N) where M is length of haystack and N is length of needle.

// If you are feeling more adventurous, try solving it in O(M).

// *Hint: KMP Algorithm**
