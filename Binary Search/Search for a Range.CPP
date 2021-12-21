vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n=A.size();
    int st,en,mid,i,j,x=-1;
    st=0;en=n-1;
    while(st<=en)
    {
        mid=(st+en)/2;
        if(B==A[mid])
        {
            x=mid;
            break;
        }
        else if(B>A[mid])   st=mid+1;
        else    en=mid-1;
    }
    vector<int> ans;
    if(x==-1)
    {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    else
    {
        for(i=mid;i>=0;i--)
        {
            if(A[i]!=B)
            {
                ans.push_back(i+1);
                break;
            }
            if(i==0)    ans.push_back(i);
        }
        for(i=mid;i<n;i++)
        {
            if(A[i]!=B)
            {
                ans.push_back(i-1);
                break;
            }
            if(i==n-1)    ans.push_back(i);
        }
        return ans;
    }
}







// class Solution {    
//     public:
//     vector<int> searchRange(const vector<int> &A, int target) {
//         int n = A.size();
//         int i = 0, j = n - 1;
//         vector<int> ret(2, -1);
//         // Search for the left one
//         while (i < j)
//         {
//             int mid = (i + j) /2;
//             if (A[mid] < target) i = mid + 1;
//             else j = mid;
//         }
//         if (A[i]!=target) return ret;
//         else ret[0] = i;

//         // Search for the right one
//         j = n-1;  // We don't have to set i to 0 the second time.
//         while (i < j)
//         {
//             int mid = (i + j) /2 + 1;   // Make mid biased to the right
//             if (A[mid] > target) j = mid - 1;  
//             else i = mid;               // So that this won't make the search range stuck.
//         }
//         ret[1] = j;
//         return ret; 
//     }
// };


