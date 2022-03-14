int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> m;
    int n=A.size(),xr=0,c=0;
    for(int i=0;i<n;i++)
    {
        xr^=A[i];
        if(xr==B)   c++;
        int y=xr^B;
        if(m.find(y)!=m.end())
        {
            c+=m[y];
        }
        m[xr]+=1;
    }
    return c;
}



// A trivial solution is to use two loops to go through all possible subarrays of array and count the number of subarrays having XOR of their elements as B.
// Time Complexity of the above solution is O(n2).

// An Efficient Solution solves the above problem in O(n) time.

// Let us call the XOR of all elements in the range [i+1, j] as x, in the range [0, i] as y, and in the range [0, j] as z.

// If we do XOR of y with z, the overlapping elements in [0, i] from y and z zero out and we get XOR of all elements in the range [i+1, j], i.e. x.

// Since x = y XOR z, we have y = x XOR z. Now, if we know the value of z and we take the value of x as B, we get the count of x as the count of all y satisfying this relation.

// Essentially, we get the count of all subarrays having XOR-sum B for each z. As we take sum of this count over all z, we get our answer.

