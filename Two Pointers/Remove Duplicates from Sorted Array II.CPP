int Solution::removeDuplicates(vector<int> &A) {
     int i,j,k;
     for(i=0;i<A.size();i++)
     {
         j=i+2;
         if(A[j]==A[i]&&j<A.size())
         {
             k=j+1;
             while(A[k]==A[i]&&k<A.size())  k++;
             A.erase(A.begin()+j,A.begin()+k);
         }
     }
     return A.size();
}




// Notice that the array is sorted. This implies that all repetitions for an element are clustered together in the array.

// Try maintaining 2 pointers in the array:

//     One pointer iterates over the array
//     Other pointer only moves per occurrence of a value in the array.

// Now you need to make sure we choose atmost 2 occurrences per cluster of repetition in the array,
// We could probably just check **if A[i] != A[i+1] || A[i] != A[i+2] **
// So, the second pointer only moves when A[i] != A[i+1] || A[i] != A[i+2]
