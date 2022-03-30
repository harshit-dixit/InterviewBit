bool valid(vector<vector<char>>& A,int a,int b,char c)
    {
        for(int i=0;i<9;i++)
        {
            if(A[a][i]==c)  return false;
            if(A[i][b]==c)  return false;
            if(A[3*(a/3)+i%3][3*(b/3)+i/3]==c)  return false;
        }
        return true;
    }

bool solve(vector<vector<char>>& A)
    {
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A[0].size();j++)
            {
                if(A[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(valid(A,i,j,c))
                        {
                            A[i][j]=c;
                            if(solve(A))    return true;
                            else    A[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
 
void Solution::solveSudoku(vector<vector<char> > &A) {
    solve(A);
}
