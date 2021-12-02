int Solution::uniquePaths(int A, int B) {
    long long x,y,z,fx,fy,fz;
    x=A+B-2;
    if(A>B)
    {
        y=A-1;
        z=B-1; 
    }
    else
    {
        y=B-1;
        z=A-1;
    }
    
    fx=1;
    while(x>y)
    {
        fx*=x;
        x--;
    }
    fz=1;
    if(z==0)
    {
        fz=1;
    }
    else
    {
        while(z>0)
        {
            fz*=z;
            z--;
        }
    }
    fy=fx/fz;
    return (int)fy;
}




// class Solution {
//     public:
//         int uniquePaths(int m, int n) {
//             // m+n-2 C n-1 = (m+n-2)! / (n-1)! (m-1)! 
//             long long ans = 1;
//             for (int i = n; i < (m + n - 1); i++) {
//                 ans *= i;
//                 ans /= (i - n + 1);
//             }
//             return (int)ans;
//         }
// };
