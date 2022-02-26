bool isSafe(int row, int col, vector<string> &b, int n)
{
    int c=col;
    int r=row;
    while(row>=0&&col>=0)
    {
        if(b[row][col]=='Q')    return false;
        row--;
        col--;
    }
    row=r;
    col=c;
    while(col>=0)
    {
        if(b[row][col]=='Q')    return false;
        col--;
    }
    col=c;
    while(row<n&&col>=0)
    {
        if(b[row][col]=='Q')    return false;
        row++;
        col--;
    }
    return true;
}

void f(int col, vector<string> &b, vector<vector<string>> &ans, int n)
{
    if(col==n)
    {
        ans.push_back(b);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(isSafe(row,col,b,n))
        {
            b[row][col]='Q';
            f(col + 1,b,ans,n);
            b[row][col]='.';
        }
    }
}

vector<vector<string> > Solution::solveNQueens(int A) 
{
    vector<vector<string>> ans;
    vector<string> b(A);
    string s(A,'.');
    for(int i=0;i<A;i++)
    {
        b[i]=s;
    }
    f(0,b,ans,A);
    return ans;
}
