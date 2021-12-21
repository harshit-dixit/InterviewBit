int Solution::sqrt(int A) {
    long long x,y,mid;
    x=1;
    y=A;
    mid=(x+y)/2;
    while(x!=mid)
    {
        if(mid*mid==A) break;
        else if(mid*mid>A)
        {
            y=mid;
        }
        else
        {
            x=mid;
        }
        mid=(x+y)/2;
    }
    return (int)mid;
}




// Think in terms of binary search.
// Let us say S is the answer.
// We know that 0 <= S <= x.
// Consider any random number r.

//     If r*r <= x, S >= r

//     If r*r > x, S < r.

// Maybe try to run a binary search for S.

// class Solution {
//     public:
//         int sqrt(int x) {
//             if (x == 0) return 0;
//             int start = 1, end = x, ans;
//             while (start <= end) {
//                 int mid = (start + end) / 2;
//                 if (mid <= x / mid) {
//                     start = mid + 1;
//                     ans = mid;
//                 } else {
//                     end = mid - 1;
//                 }
//             }
//             return ans;
//         }
// };


