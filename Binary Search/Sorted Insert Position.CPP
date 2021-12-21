int Solution::searchInsert(vector<int> &A, int B) {
    int n=A.size();
    int st,en,mid,i,j;
    st=0;
    en=n-1;
    while(st<=en)
    {
        mid=(st+en)/2;
        if(A[mid]==B)   return mid;
        else if(A[mid]<B)   st=mid+1;
        else    en=mid-1;
    }
    return st;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


// You need to return the index of least element >= x.
