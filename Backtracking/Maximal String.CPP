void f(int ind, int B, string &A, string &arr)
{
    if(B==0)
    {
        if(A>arr)
        {
            arr=A;
        }
        return;
    }
    for(int i=ind;i<A.length();i++)
    {
        swap(A[i],A[ind]);
        if(i!=ind)  f(ind+1,B-1,A,arr);
        else    f(ind+1,B,A,arr);
        swap(A[i],A[ind]);
    }
}

string Solution::solve(string A, int B) {
    string arr=A;
    f(0,B,A,arr);
    return arr;
}
