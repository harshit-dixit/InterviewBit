vector<vector<int> > Solution::prettyPrint(int A) {
    int size,i,j,temp;
    size=2*A-1;
    vector<vector<int>> arr(size,vector<int>(size));
    temp=0;
    while(A>0)
    {
        for(i=temp;i<size;i++)
        {
            for(j=temp;j<size;j++)
            {
                arr[i][j]=A;
            }
        }
        A--;
        temp++;
        size--;
    }
    return arr;
}



// for(int i=0; i<A; i++)
// {
//     for(int j=i; j<n-i; j++)
//     {        
//             v[i][j]= A-i;
        
//             v[j][n-1-i]= A-i;
        
//             v[n-1-j][i]= A-i;
            
//             v[n-1-i][n-1-j]= A-i;          
//     }
// }   
