int Solution::threeSumClosest(vector<int> &A, int B) {
    int n=A.size();
    int x,i,j,diff,d,ans,sum;
    sort(A.begin(),A.end());
    d=INT_MAX;
    for(x=0;x<n-2;x++)
    {
        sum=B-A[x];
        i=x+1;
        j=n-1;
        while(i<j)
        {
            if(A[i]+A[j]==sum)  return B;
            else if(A[i]+A[j]<sum)
            {
                diff=sum-A[i]-A[j];
                if(diff<d)
                {
                    d=diff;
                    ans=A[i]+A[j]+A[x];
                }
                i++;
            }
            else
            {
                diff=A[i]+A[j]-sum;
                if(diff<d)
                {
                    d=diff;
                    ans=A[i]+A[j]+A[x];
                }
                j--;
            }
        }
    }
    return ans;
}






// Lets sort the array.
// When the array is sorted, try to fix the least integer by looping over it.
// Lets say the least integer in the solution is arr[i].

// Now we need to find a pair of integers j and k, such that arr[j] + arr[k] is closest to (target - arr[i]).
// To do that, let us try the 2 pointer approach.
// If we fix the two pointers at the end ( that is, i+1 and end of array ), we look at the sum.

//     If the sum is smaller than the sum we need to get to, we increase the first pointer.
//     If the sum is bigger, we decrease the end pointer to reduce the sum.

  
  
  
  
  class Solution {
    public:
        int threeSumClosest(vector<int> &num, int target) {
            sort(num.begin(), num.end());
            int bestSum = 1000000000, sum = 0;
            // Fix the smallest number in the three integers
            for (int i = 0; i < num.size() - 2; i++) {
                // Now num[i] is the smallest number in the three integers in the solution
                int ptr1 = i + 1, ptr2 = num.size() - 1;
                while (ptr1 < ptr2) {
                    sum = num[i] + num[ptr1] + num[ptr2];
                    if (abs(target - sum) < abs(target - bestSum)) {
                        bestSum = sum;
                    }
                    if (sum > target) {
                        ptr2--;
                    } else {
                        ptr1++;
                    }
                }
            }
            return bestSum;
        }
};
