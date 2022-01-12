vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int n=A.size(),m=B.size();
    int i=0,j=0;
    vector<int> ans;
    while(i<n&&j<m)
    {
        if(A[i]==B[j])
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]<B[j])
        {
            i++;
        }
        else j++;
    }
    return ans;
}


// We can have two indices, which both starts at zero.
// Compare the two first elements of A and B.

//     If A[0] is greater than B[0], we increase index of B by one.
//     If B[0] is greater than A[0], we increase index of A by one.

// If they are equal, we know an intersection has occurred, so add it to the list and increment index of A and B by one.
// Once either of the indices reaches the end of A or B, we have found all the intersections of A and B.
