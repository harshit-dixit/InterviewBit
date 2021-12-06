string Solution::longestCommonPrefix(vector<string> &A) {
    int n=A.size();
    string str;
    int i,j,low,x=0;
    low=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(A[i].length()<low)   low=A[i].length();
    }
    int flag=0;
    for(i=0;i<low;i++)
    {
        for(j=1;j<n;j++)
        {
            if(A[0][i]!=A[j][i])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1) str.push_back(A[0][i]);
        else    break;
    }
    return str;
}





// string Solution::longestCommonPrefix(vector<string> &A) 
// {
//     string s;
//     //sorting the strings lexicographically 
//     sort(A.begin(),A.end());
//     int m,n;
//     m=A.size()-1;
//     n=min(A[0].length(),A[m].length());
//     int i=0;
//     //first and last string will be most dissimilar thus finding common charcters in these
//     while(i<n && A[0][i]==A[m][i])
//     {
//         s+=A[0][i];
//         i++;
//     }
//     return s;
// }

