int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    if(n==1&&A[0]<B)   return 1;
    int i=0,j=0,ans=0,x=A[0];
    while(i<n&&j<n)
    {
        if(x<B) ans+=j-i+1;
        j++;
        x+=A[j];
        while(x>=B)
        {
            x-=A[i];
            i++;
        }
    }
    return ans;
}


// An efficient solution is based on sliding window technique that can be used to solve the problem.
// We use two pointers start and end to represent starting and ending point of sliding window. (Not that we need to find contiguous parts).

// Initially both start and end point to the beginning of the array, i.e. index 0. Now, let’s try to add a new element el.
// There are two possible conditions.

// 1st case :
// If sum is less than B, increment end by one position. So contiguous arrays this step produce are (end – start). We also add el to previous sum. There are as many such arrays as the length of the window.

// 2nd case :
// If sum becomes greater than or equal to B, this means we need to subtract starting element from sum so that the sum again becomes less than B. So we adjust the window’s left border by incrementing start.

// We follow the same procedure until end < array size.

// Time complexity : O(N).


int Solution::solve(vector<int> &A, int B) {
    int ans=0,i,j,k,n=A.size();

    i=0,j=0;
    int s=0;
    while(j<n){
        s+=A[j];
        j++;

        while(s>=B && i<j){
            s-=A[i];
            i++;
        }

        ans+=(j-i);

    }

    return ans;
}
