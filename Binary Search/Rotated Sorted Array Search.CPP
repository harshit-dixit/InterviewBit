int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
    int lb,ub,mid,left,right,pivot;
    lb=0;ub=n-1;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        left=(mid+n-1)%n;
        right=(mid+1)%n;
        if(A[left]>A[mid]&&A[right]>A[mid]) break;
        else if(A[lb]<A[mid])   lb=mid+1;
        else    ub=mid-1;
    }
    pivot=mid;
    lb=0;ub=pivot-1;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(A[mid]==B)
        {
            return mid;
            break;
        }
        else if(A[mid]<B)   lb=mid+1;
        else ub=mid-1;
    }
    lb=pivot;ub=n-1;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(A[mid]==B)
        {
            return mid;
            break;
        }
        else if(A[mid]<B)   lb=mid+1;
        else ub=mid-1;
    }
    return-1;
}



// A naive solution is the linear search.

// To improve, let us break our approach into 2 steps. First, we find the pivot (the index of minimum in the array).

// Once we know the pivot, to search for x, we can do a conventional binary search in the left and right part of the pivot in the array.

// Now, let us look at how binary search can be applied in this scenario to find the minimum.

// There are 2 cases:

// 1)


//           mid
   
//            |
    
//    6 7 8 9 1 2 3 4 5  

// arr[mid] > arr[end]

// The min lies in (mid, end]

// Mid is excluded from the range because arr[mid] > arr[end]

// 2)

        
//          mid
         
//           | 
          
//   6 7 8 9 1 2 3 4 5

// arr[mid] < arr[end]

// The min lies in [start, mid]

// 3) Note: If there are duplicates, making either decision might be difficult and hence linear search might be required.

//                mid
               
//                 |
                
// 1 1 1 1 2 0 1 1 1 1 1 1 1 1 1 1 1 

// arr[mid] = arr[end]

// Indecisive. We would need to explore the whole array.

