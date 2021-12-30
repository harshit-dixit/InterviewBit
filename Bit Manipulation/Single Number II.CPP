//Solution 1
int Solution::singleNumber(const vector<int> &A) {
    int n=A.size();
    int i,j,one,mask,p=1,x;
    mask=0;
    for(i=0;i<32;i++)
    {
        one=0;
        for(j=0;j<n;j++)
        {
            x=(p&A[j]);
            if(x!=0)    one++;
        }
        if(one%3!=0)
        {
            mask+=p;
        }
        p*=2;
    }
    return mask;
}


//Solution 2
int Solution::singleNumber(const vector<int> &A) {
    int n=A.size();
    int i,j,one,mask,value;
    mask=0;
    for(i=0;i<32;i++)
    {
        one=0;
        for(j=0;j<n;j++)
        {
            value=(A[j]>>i);
            if((value&1)!=0)    one++;
        }
        if(one%3!=0)
        {
            mask=(mask|(1<<i));               // SILLY MISTAKE mask=(mask&(1<<i));
        }
    }
    return mask;
}



// Having noticed that if X has 1 in that position, we will have 3x+1 number of 1s in that position. If X has 0 in that position, we will have 3x+1 number of 0 in that position.

// A straightforward implementation is to use an array of size 32 to keep track of the total count of ith bit.

// We can improve this based on the previous solution using three bitmask variables:

// ones as a bitmask to represent the ith bit had appeared once.
// twos as a bitmask to represent the ith bit had appeared twice.
// threes as a bitmask to represent the ith bit had appeared three times.
// When the ith bit had appeared for the third time, clear the ith bit of both ones and twos to 0. The final answer will be the value of ones.
