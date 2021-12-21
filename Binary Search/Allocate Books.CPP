int Solution::books(vector<int> &A, int B) {
    int n=A.size();
    if(n<B) return -1;
    int lb,ub,mid,ans,i,sum,k;
    lb=INT_MIN;
    ub=0;
    for(i=0;i<n;i++)
    {
        if(A[i]>lb) lb=A[i];
        ub+=A[i];
    }
    ans=0;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        k=B;
        i=0;
        while(i<n)
        {
            sum=0;
            while(sum<=mid&&i<n)
            {
                if(sum+A[i]<=mid)    sum+=A[i];
                else    break;
                i++;
            }
            k--;
        }
        //if(k==0)    ans=mid;
        if(k>=0)
        {
            ub=mid-1;
            ans=mid;
        }
        else    lb=mid+1;
        //cout<<ans<<"\n";
    }
    if(ans==0)  return -1;
    else return ans;
}



// Problem statement : Given fixed number of pages (V),  how many number of students we need?
// Solution :
//    simple simulation approach
//    intially Sum := 0
//    cnt_of_student = 0
//    iterate over all books:
//         If Sum + number_of_pages_in_current_book > V :
//                   increment cnt_of_student
//                   update Sum
//         Else:
//                   update Sum
//    EndLoop;
  


//     fix range LOW, HIGH
//     Loop until LOW < HIGH:
//             find MID_point
//             Is number of students required to keep max number of pages below MID < M ? 
//             IF Yes:
//                 update HIGH
//             Else
//                 update LOW
//     EndLoop;
