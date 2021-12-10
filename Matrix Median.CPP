//Method 1

int Solution::findMedian(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    vector<int> arr(n*m,0);
    int i,j,k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           arr[k++]= A[i][j];
        }
    }
    sort(arr.begin(),arr.end());
    k=(n*m)/2;
    //k++;
    return arr[k];
}


//Method 2



// We cannot use extra memory, so we can’t actually store all elements in an array and sort the array.
// But since, rows are sorted it must be of some use, right?

// Note that in a row you can binary search to find how many elements are smaller than a value X in O(log M).
// This is the base of our solution.

// Say k = N*M/2. We need to find (k + 1)^th smallest element.
// We can use binary search on answer. In O(N log M), we can count how many elements are smaller than X in the matrix.

// So, we use binary search on interval [1, INT_MAX]. So, total complexity is O(30 * N log M).

// Note:
// This problem can be solve by using min-heap, but extra memory is not allowed.




int Solution::findMedian(vector<vector<int> > &a) {
    int n=a.size(),m=a[0].size();
    int mi=INT_MAX,ma=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mi=min(mi,a[i][0]);
    }
    for(int i=0;i<n;i++)
    {
        ma=max(ma,a[i][m-1]);
    }
    int ind=((n*m)+1)/2;
    while(mi<ma)
    {
        int mid=mi+(ma-mi)/2;
        int count=0;
        for(int i=0;i<n;i++)
        {
            count=count+upper_bound(a[i].begin(),a[i].end(),mid)-a[i].begin();
        }
         if(count<ind)
             mi=mid+1;
           else
             ma=mid;
    }
    return mi;
}

