int Solution::solve(vector<int> &A, int B) {
    //sort(A.begin(),A.end());
    int n=A.size();
    int max,min;
    long long i,sum,mid;
    max=INT_MIN;
    min=0;
    for(i=0;i<n;i++)
    {
        if(A[i]>max)    max=A[i];
    }
    while(max>min)
    {
        mid=(max+min)/2;
        sum=0;
        for(i=0;i<n;i++)
        {
            if(A[i]>mid)    sum+=A[i]-mid;
        }
        if(sum==B||min==mid)   break;
        else if(sum<B)  max=mid;
        else min=mid;;
    }
    return (int)mid;
}









// int Solution::solve(vector<int> &A, int B) {
//     int start = 0, end = 0;
//     for(int i=0; i<A.size(); i++){
//         end = max(A[i], end);               // Maxium height for binary search
//     }
//     while(start <= end){            // Do a binary search from the lowest height to max height and check for each height whether we clear our criteria or not
//         int height = start + (end-start)/2;
//         long long sum = 0;
//         for(int i=0; i<A.size(); i++){
//             sum += A[i] > height ? A[i] - height : 0;  // get total wood for this height
//         }
//         if(sum > B) start = height + 1;     // If we get more wood than required, we increase the height
//         else if(sum < B) end = height - 1;  // If we get less wood, we decrease height to cut more
//         else return height;                 // If we get the exact wood we return that height
//     }
//     return end;         // we return the maximum height we got that atleast cleared the criteria;
// }


