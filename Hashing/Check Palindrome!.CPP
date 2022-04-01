int Solution::solve(string A) {
    int arr[26]={0};
    for(int i=0;i<A.size();i++)
    {
        arr[(int)(A[i]-'a')]++;
    }
    int x=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2!=0&&arr[i]!=0)   x++;
    }
    if(x<2) return 1;
    else return 0;
}
